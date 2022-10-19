//task2
#define D_MIN(A,B) ((A) < (B) ? (A) : (B))
#define D_MAX(A,B) ((A) > (B) ? (A) : (B))
#define D_SQR(A) ((A)*(A))
#define D_POW(A,B) pow((A), (B))
#define D_EVEN(A) ((A) % 2 == 0) ? 1 : 0
#define D_ODD(A) ((A) % 2 == 1) ? 1 : 0

//task1
#ifdef INTEGER
#define fill fill_array_int
#define show show_array_int
#define find_min find_min_int
#define find_max find_max_int
#define sort_array sort_array_int
#define change_array change_array_int
#endif

#ifdef DOUBLE
#define fill fill_array_double
#define show show_array_double
#define find_min find_min_double
#define find_max find_max_double
#define sort_array sort_array_double
#define change_array change_array_double
#endif

#ifdef CHAR
#define fill fill_array_char
#define show show_array_char
#define find_min find_min_char
#define find_max find_max_char
#define sort_array sort_array_char
#define change_array change_array_char
#endif

void fill_array_int(int* arr, int size);
void fill_array_double(double* arr, int size);
void fill_array_char(char* arr, int size);

void show_array_int(int* arr, int size);
void show_array_double(double* arr, int size);
void show_array_char(char* arr, int size);

int find_min_int(int* arr, int size);
double find_min_double(double* arr, int size);
char find_min_char(char* arr, int size);

int find_max_int(int* arr, int size);
double find_max_double(double* arr, int size);
char find_max_char(char* arr, int size);

void sort_array_int(int* arr, int size);
void sort_array_double(double* arr, int size);
void sort_array_char(char* arr, int size);

void change_array_int(int* arr, int size);
void change_array_double(double* arr, int size);
void change_array_char(char* arr, int size);


