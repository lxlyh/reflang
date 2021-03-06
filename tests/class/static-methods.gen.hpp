// !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
// !!! This file is auto-generated by Reflang. !!!
// !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
#ifndef REFLANG_METADATA_STATIC_METHODS_GEN_HPP
#define REFLANG_METADATA_STATIC_METHODS_GEN_HPP

#include <string>

#include "lib/reflang.hpp"
#include "static-methods.src.hpp"

namespace reflang
{


template <>
class Class<MyClass> : public IClass
{
public:
	static const constexpr int FieldCount = 0;
	static const constexpr int StaticFieldCount = 0;
	static const constexpr int MethodCount = 0;
	static const constexpr int StaticMethodCount = 4;

	int GetFieldCount() const override;
	Reference GetField(
			const Reference& o, const std::string& name) const override;

	int GetStaticFieldCount() const override;
	Reference GetStaticField(const std::string& name) const override;

	int GetMethodCount() const override;
	std::vector<std::unique_ptr<IMethod>> GetMethod(
			const std::string& name) const override;

	int GetStaticMethodCount() const override;
	std::vector<std::unique_ptr<IFunction>> GetStaticMethod(
			const std::string& name) const override;

	const std::string& GetName() const override;

	// Calls T::operator() on each field of 'MyClass'.
	// Works well with C++14 generic lambdas.
	template <typename T>
	static void IterateFields(const MyClass& c, T t);

	template <typename T>
	static void IterateFields(MyClass& c, T t);

	template <typename T>
	static void IterateStaticFields(T t);
};

template <typename T>
void Class<MyClass>::IterateFields(const MyClass& c, T t)
{
}

template <typename T>
void Class<MyClass>::IterateFields(MyClass& c, T t)
{
}

template <typename T>
void Class<MyClass>::IterateStaticFields(T t)
{
}

// MyClass static methods metadata.

template <>
class Function<void(*)(), MyClass::Method0> : public IFunction
{
	int GetParameterCount() const override;
	Parameter GetReturnType() const override;
	Parameter GetParameter(int i) const override;

	const std::string& GetName() const override;

	Object Invoke(const std::vector<Object>& args) override;
};

template <>
class Function<void(*)(int), MyClass::Method1> : public IFunction
{
	int GetParameterCount() const override;
	Parameter GetReturnType() const override;
	Parameter GetParameter(int i) const override;

	const std::string& GetName() const override;

	Object Invoke(const std::vector<Object>& args) override;
};

template <>
class Function<bool(*)(), MyClass::RMethod0> : public IFunction
{
	int GetParameterCount() const override;
	Parameter GetReturnType() const override;
	Parameter GetParameter(int i) const override;

	const std::string& GetName() const override;

	Object Invoke(const std::vector<Object>& args) override;
};

template <>
class Function<bool(*)(bool, int), MyClass::RMethod1> : public IFunction
{
	int GetParameterCount() const override;
	Parameter GetReturnType() const override;
	Parameter GetParameter(int i) const override;

	const std::string& GetName() const override;

	Object Invoke(const std::vector<Object>& args) override;
};
// End of MyClass static methods metadata.



}  // namespace reflang

#endif //REFLANG_METADATA_STATIC_METHODS_GEN_HPP
