class meo1 {
    private:
        char name[50];
        float weight;
        int age;

    public:
        int public_var;
        meo1(char *name, float weight, int age);
        ~meo1();

        void meo_info();
        void change_weight(float new_weight);
};