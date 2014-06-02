/**************************************/
/**************************************/
/*********General framework*************/
/**************************************/
/**************************************/
bool isfinished = false; /* whether found all the solution */

backtrack(int solution[], int cur, data input)
{
    int candidate_pos[MAXCANDIDATES]; /* candidates for next position */
    int candidate_num; /*next position candidate count*/

    if (is_a_solution(solution, cur, input))
        process_solution(solution, cur, input);

    else
    {
        cur = cur + 1; /* move the position */

        construct_candidate(solution, cur, input, candidate_pos, &candidate_num);
        for (int i = 0; i < candidate_num; ++i)
        {
            solution[cur] = candidate_pos[i];
            backtrack(solution, cur, input);
            if (isfinished) return; /*if finished, then just return*/
        }
    }
}
