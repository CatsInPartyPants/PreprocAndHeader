//task2
#define D_MIN(A,B) ((A) < (B) ? (A) : (B))
#define D_MAX(A,B) ((A) > (B) ? (A) : (B))
#define D_SQR(A) ((A)*(A))
#define D_POW(A,B) pow((A), (B))
#define D_EVEN(A) ((A) % 2 == 0) ? 1 : 0
#define D_ODD(A) ((A) % 2 == 1) ? 1 : 0
#define DOUBLE

//task1
#ifdef INTEGER
#define FILL fill_array_int
#define SHOW show_array_int
#define FIND_MIN find_min_int
#define FIND_MAX find_max_int
#define SORT_ARRAY sort_array_int
#define CHANGE_ARRAY change_array_int
#endif

#ifdef DOUBLE
#define FILL fill_array_double
#define SHOW show_array_double
#define FIND_MIN find_min_double
#define FIND_MAX find_max_double
#define SORT_ARRAY sort_array_double
#define CHANGE_ARRAY change_array_double
#endif

#ifdef CHAR
#define FILL fill_array_char
#define SHOW show_array_char
#define FIND_MIN find_min_char
#define FIND_MAX find_max_char
#define SORT_ARRAY sort_array_char
#define CHANGE_ARRAY change_array_char
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


