#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char questions[][100] = {
        "1. What is React.js?",
        "2. What does JSX stand for?",
        "3. Which lifecycle method is invoked immediately after a component is rendered on the DOM?",
        "4. What is the purpose of the 'key' prop in React?",
        "5. What is the state of React class component?",
        "6. Which method is used to update the state of a class component in React?",
        "7. What is the purpose of the React Router library?",
        "8. What is the purpose of PropTypes in React?",
        "9. What is the purpose of React Fragments?",
        "10. Which method is used to render a React component to the DOM?"
    };

    char possible_answers[][4][100] = {
        {"a) A JavaScript framework for building user interfaces.",
         "b) A server-side programming language.",
         "c) A database management system.",
         "d) A front-end CSS framework."},

        {"a) JavaScript XML",
         "b) Java Syntax Extension",
         "c) JSON Xchange Schema ",
         "d) JavaScript Xerography"},

        {"a) componentDidMount ",
         "b) componentDidUpdate",
         "c) componentWillMount",
         "d) componentWillRender"},

        {"a) It uniquely identifies a component in an array of components.",
         "b) It determines the visual styling of a component.",
         "c) It specifies the route for navigation within a React application.",
         "d) It defines the data type of a component's prop."},

        {"a) A JavaScript method for sorting arrays.",
         "b) A built-in object that stores component data.",
         "c) A CSS class used for component styling.",
         "d) A React component's initial render method."},

        {"a) this.updateState()",
         "b) this.setState()",
         "c) this.modifyState()",
         "d) this.changeState()"},

        {"a) To handle HTTP requests in React applications.",
         "b) To manage and synchronize component states.",
         "c) To manage navigation and routing in React applications.",
         "d) To optimize the performance of React applications."},

        {"a) To define the expected data types of component props.",
         "b) To validate HTML syntax within JSX code.",
         "c) To handle form validation in React applications.",
         "d) To provide default values for component props."},

        {"a) To group multiple components within a single parent component.",
         "b) To create reusable CSS styles for React components.",
         "c) To optimize the rendering performance of React components.",
         "d) To handle asynchronous operations in React applications."},

        {"a) renderComponent()",
         "b) ReactDOM.render()",
         "c) React.render()",
         "d) component.render() "}
    };

    char correct_answers[] = {'a', 'a', 'a', 'a', 'b', 'b', 'c', 'a', 'a', 'b'};

    int score = 0;
    char guess;
    printf("REACT QUIZ !!!!!!!!!!!!!!! \n");
    printf("§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§\n");
    printf("Welcome to the React Quiz! \n");
    printf("You have 15 minutes to answer all the questions.\n");
    printf("Press 'Enter' to start the quiz.\n");
    getchar();

    for (int i = 0; i < (sizeof(questions) / sizeof(questions[0])); i++)
    {
        printf("%s\n", questions[i]);
        for (int j = 0; j < 4; j++)
        {
            printf("%s\n", possible_answers[i][j]);
        }
        printf("Choose your answer (a-d): ");
        scanf(" %c", &guess);
        guess = tolower(guess);

        if (guess < 'a' || guess > 'd') {
            printf("You entered an invalid character. Please enter a valid answer (a-d).\n");
            i--; // Decrement to retry the same question
            continue;
        }

        if (guess == correct_answers[i])
        {
            printf("Correct!\n");
            score++;
        }
        else
        {
            printf("Wrong answer, the correct answer is %c\n", correct_answers[i]);
        }
        printf("§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§\n");
    }

    printf("End of contest! Your score: %d\n", score);
    if (score == 10) {
        printf("good job u r dominating it !!!!!!!!!!!!!") ;
    }
    else if (score >5 && score< 10)
    {
        printf("u did great but not enough to win it!!!") ;
    }
    else if (score < 5)
    {
        printf("u need to improve more to win it , niggggggggggggggggggga!!!") ;
    }
    
    return 0;
}
