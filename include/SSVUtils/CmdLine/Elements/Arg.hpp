// Copyright (c) 2013-2014 Vittorio Romeo
// License: Academic Free License ("AFL") v. 3.0
// AFL License page: http://opensource.org/licenses/AFL-3.0

#ifndef SSVU_CMDLINE_ELEMENTS_ARG
#define SSVU_CMDLINE_ELEMENTS_ARG

namespace ssvu
{
	namespace CmdLine
	{
		namespace Impl
		{
			template<typename T> class ArgImpl : public Impl::BaseArg
			{
				protected:
					T value;

				public:
					inline void set(const std::string& mValue) override	{ value = Parser<T>::parse(mValue); }
					inline auto get() const								{ return value; }
			};
		}

		template<typename T> class Arg final : public Impl::ArgImpl<T>, public Impl::ETypeInfo<EType::Arg> { };
	}
}

#endif
