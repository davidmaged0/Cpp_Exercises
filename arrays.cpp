#include <iostream>
#include <array>

using namespace std;    

int main() {
    /*multi-dimentional array*/
    int arr1[][3] { {1,2,3},             /*[0][0]=1   [0][1]=2   [0][2]=3*/
                    {4,5,6},             /*[1][0]=4   [1][1]=5   [1][2]=6*/
                    {7,8,9},             /*[2][0]=7   [2][1]=8   [2][2]=9*/
                    {10, 11,12 } };      /*[3][0]=10  [3][1]=11  [3][2]=12*/
    for (int i=0; i<sizeof(arr1)/sizeof(arr1[0]); i++) {
        for (int j=0; j<sizeof(arr1[0])/sizeof(arr1[0][0]); j++) {
            cout << arr1[i][j] << " ";
        }
        cout << endl;
    }
    int coloums_length = sizeof(arr1[1])/sizeof(arr1[3][2]);
    int rows_length = sizeof(arr1)/sizeof(arr1[0]);

    cout << "No. of array is: " << rows_length * coloums_length << endl;


    return 0;

}
/*
🧮 1. sizeof(arr1)

معناها: حجم المصفوفة كلها بالـ bytes.

عدد العناصر = 4 × 3 = 12

حجم كل عنصر = 4 bytes (لو int)

الحجم الكلي = 12 × 4 = 48 bytes

✅ sizeof(arr1) → 48

🧮 2. sizeof(arr1[0])

arr1[0] معناها: الصف الأول كله → وهو عبارة عن مصفوفة فيها 3 عناصر.

3 عناصر × 4 bytes = 12 bytes.

✅ sizeof(arr1[0]) → 12

🧮 3. sizeof(arr1[0][0])

arr1[0][0] معناها: أول عنصر في الصف الأول.

حجمه = 4 bytes (لأن نوعه int).

✅ sizeof(arr1[0][0]) → 4

| التعبير                                | المعنى                                             | الناتج في المثال |
| -------------------------------------- | -------------------------------------------------- | ---------------- |
| `sizeof(arr1)`                         | حجم كل المصفوفة (كل الصفوف × الأعمدة × حجم العنصر) | 48               |
| `sizeof(arr1[0])`                      | حجم صف واحد فقط (عدد الأعمدة × حجم العنصر)         | 12               |
| `sizeof(arr1[0][0])`                   | حجم عنصر واحد فقط                                  | 4                |
| `sizeof(arr1[0]) / sizeof(arr1[0][0])` | عدد الأعمدة في الصف الواحد                         | 3                |

*/