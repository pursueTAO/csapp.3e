/**
 * Practice 21
 *
 * | Expression                    | Type     | Evaluation |
 * |-------------------------------------------------------|
 * | -2147483647-1  == 2147483648U | unsigned | 1          |
 * | -2147483647-1  <  2147483647  | signed   | 1          |
 * | -2147483647-1U <  2147483647  | unsigned | 0          |
 * | -2147483647-1  <  -2147483647 | signed   | 1          |
 * | -2147483647-1U <  -2147483647 | unsigned | 1          |
 *
 */
