// use #defines the dstype in its code before including this

struct ds;
typedef struct ds *ds;

ds init_d();
void insert_d(ds, dstype);
void update_d(ds, dstype, dstype);
void delete_d(ds, dstype);
void delmax_d(ds);
void delmin_d(ds);
dstype search_d(ds, dstype);
dstype max_d(ds);
dstype min_d(ds);
