#ifndef __ACML_HPP__XML___AUTHOR__YTJ__YTJ000_AT_GMAIL_DOT_COM_20120126
#define __ACML_HPP__XML___AUTHOR__YTJ__YTJ000_AT_GMAIL_DOT_COM_20120126
#include"detail/xml.hpp"

namespace acml {
namespace xml {

template<class T>
std::string dumps(const T &object) {
    return detail::dumps(object);
};

} /* namespace xml */
} /* namespace acml */
#endif /* __ACML_HPP__XML___AUTHOR__YTJ__YTJ000_AT_GMAIL_DOT_COM_20120126 */
