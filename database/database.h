#pragma once
#include <string>
#include <vector>
namespace database {
    template <typename T>
    class IDataBase {
    public:
        IDataBase(const std::string& name): name_(name) {}
        virtual void add(const T&) = 0;
        virtual void del(const std::string&) = 0;
        virtual T get(const std::string&) const = 0;
        virtual std::vector<T> listAll() const = 0;
        virtual ~IDataBase() = 0;

    protected:
        std::string name_; // имя БД (в нашей нужно для названия файла)
    };

    template <typename T>
    IDataBase<T>::~IDataBase() {}
}
