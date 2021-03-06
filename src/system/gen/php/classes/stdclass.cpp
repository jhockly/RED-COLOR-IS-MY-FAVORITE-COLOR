/*
   +----------------------------------------------------------------------+
   | HipHop for PHP                                                       |
   +----------------------------------------------------------------------+
   | Copyright (c) 2010 Facebook, Inc. (http://www.facebook.com)          |
   +----------------------------------------------------------------------+
   | This source file is subject to version 3.01 of the PHP license,      |
   | that is bundled with this package in the file LICENSE, and is        |
   | available through the world-wide-web at the following url:           |
   | http://www.php.net/license/3_01.txt                                  |
   | If you did not receive a copy of the PHP license and are unable to   |
   | obtain it through the world-wide-web, please send a note to          |
   | license@php.net so we can mail you a copy immediately.               |
   +----------------------------------------------------------------------+
*/
// @generated by HipHop Compiler

#include <php/classes/stdclass.h>
#include <php/classes/stdclass.fws.h>

// Dependencies
#include <runtime/ext/ext.h>
#include <runtime/eval/eval.h>
namespace hphp_impl_starter {}

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

/* preface starts */
extern CallInfo ci_;
/* preface finishes */
/* SRC: classes/stdclass.php line 4 */
#ifndef OMIT_JUMP_TABLE_CLASS_STATIC_GETINIT_stdClass
Variant c_stdClass::os_getInit(CStrRef s) {
  return c_ObjectData::os_getInit(s);
}
#endif // OMIT_JUMP_TABLE_CLASS_STATIC_GETINIT_stdClass
#ifndef OMIT_JUMP_TABLE_CLASS_STATIC_GET_stdClass
Variant c_stdClass::os_get(CStrRef s) {
  return c_ObjectData::os_get(s);
}
#endif // OMIT_JUMP_TABLE_CLASS_STATIC_GET_stdClass
#ifndef OMIT_JUMP_TABLE_CLASS_STATIC_LVAL_stdClass
Variant &c_stdClass::os_lval(CStrRef s) {
  return c_ObjectData::os_lval(s);
}
#endif // OMIT_JUMP_TABLE_CLASS_STATIC_LVAL_stdClass
#ifndef OMIT_JUMP_TABLE_CLASS_GETARRAY_stdClass
void c_stdClass::o_getArray(Array &props, bool pubOnly) const {
  c_ObjectData::o_getArray(props, pubOnly);
}
#endif // OMIT_JUMP_TABLE_CLASS_GETARRAY_stdClass
#ifndef OMIT_JUMP_TABLE_CLASS_SETARRAY_stdClass
void c_stdClass::o_setArray(CArrRef props) {
  c_ObjectData::o_setArray(props);
}
#endif // OMIT_JUMP_TABLE_CLASS_SETARRAY_stdClass
#ifndef OMIT_JUMP_TABLE_CLASS_realProp_stdClass
Variant * c_stdClass::o_realProp(CStrRef prop, int flags, CStrRef context) const {
  return o_realPropPublic(prop, flags);
}
#endif // OMIT_JUMP_TABLE_CLASS_realProp_stdClass
#ifndef OMIT_JUMP_TABLE_CLASS_realProp_PUBLIC_stdClass
Variant * c_stdClass::o_realPropPublic(CStrRef s, int flags) const {
  return c_ObjectData::o_realPropPublic(s, flags);
}
#endif // OMIT_JUMP_TABLE_CLASS_realProp_PUBLIC_stdClass
#ifndef OMIT_JUMP_TABLE_CLASS_realProp_PRIVATE_stdClass
Variant * c_stdClass::o_realPropPrivate(CStrRef s, int flags) const {
  return o_realPropPublic(s, flags);
}
#endif // OMIT_JUMP_TABLE_CLASS_realProp_PRIVATE_stdClass
#ifndef OMIT_JUMP_TABLE_CLASS_CONSTANT_stdClass
Variant c_stdClass::os_constant(const char *s) {
  return c_ObjectData::os_constant(s);
}
#endif // OMIT_JUMP_TABLE_CLASS_CONSTANT_stdClass
IMPLEMENT_CLASS(stdClass)
bool c_stdClass::o_instanceof(CStrRef s) const {
  int64 hash = s->hash();
  switch (hash & 1) {
    case 1:
      HASH_INSTANCEOF(0x3D69936178BA13F7LL, NAMSTR(s_sys_ss426361a3, "stdClass"));
      break;
    default:
      break;
  }
  return false;
}
ObjectData *c_stdClass::cloneImpl() {
  c_stdClass *obj = NEW(c_stdClass)();
  cloneSet(obj);
  return obj;
}
void c_stdClass::cloneSet(c_stdClass *clone) {
  ObjectData::cloneSet(clone);
}
Variant c_stdClass::o_invoke_from_eval(const char *s, Eval::VariableEnvironment &env, const Eval::FunctionCallExpression *caller, int64 hash, bool fatal) {
  return c_ObjectData::o_invoke_from_eval(s, env, caller, hash, fatal);
}
Variant c_stdClass::os_invoke_from_eval(const char *c, const char *s, Eval::VariableEnvironment &env, const Eval::FunctionCallExpression *caller, int64 hash, bool fatal) {
  return c_ObjectData::os_invoke_from_eval(c, s, env, caller, hash, fatal);
}
bool c_stdClass::os_get_call_info(MethodCallPackage &mcp, int64 hash) {
  CStrRef s __attribute__((__unused__)) (mcp.name);
  return c_ObjectData::os_get_call_info(mcp, hash);
}
bool c_stdClass::o_get_call_info(MethodCallPackage &mcp, int64 hash) {
  mcp.obj = this;
  return os_get_call_info(mcp, hash);
}
struct ObjectStaticCallbacks cw_stdClass = {
  c_stdClass::os_getInit,
  c_stdClass::os_get,
  c_stdClass::os_lval,
  c_stdClass::os_invoke,
  c_stdClass::os_constant,
  c_stdClass::os_get_call_info
};
void c_stdClass::init() {
}
/* SRC: classes/stdclass.php line 8 */
#ifndef OMIT_JUMP_TABLE_CLASS_STATIC_GETINIT___PHP_Incomplete_Class
Variant c___PHP_Incomplete_Class::os_getInit(CStrRef s) {
  return c_ObjectData::os_getInit(s);
}
#endif // OMIT_JUMP_TABLE_CLASS_STATIC_GETINIT___PHP_Incomplete_Class
#ifndef OMIT_JUMP_TABLE_CLASS_STATIC_GET___PHP_Incomplete_Class
Variant c___PHP_Incomplete_Class::os_get(CStrRef s) {
  return c_ObjectData::os_get(s);
}
#endif // OMIT_JUMP_TABLE_CLASS_STATIC_GET___PHP_Incomplete_Class
#ifndef OMIT_JUMP_TABLE_CLASS_STATIC_LVAL___PHP_Incomplete_Class
Variant &c___PHP_Incomplete_Class::os_lval(CStrRef s) {
  return c_ObjectData::os_lval(s);
}
#endif // OMIT_JUMP_TABLE_CLASS_STATIC_LVAL___PHP_Incomplete_Class
#ifndef OMIT_JUMP_TABLE_CLASS_GETARRAY___PHP_Incomplete_Class
void c___PHP_Incomplete_Class::o_getArray(Array &props, bool pubOnly) const {
  c_ObjectData::o_getArray(props, pubOnly);
}
#endif // OMIT_JUMP_TABLE_CLASS_GETARRAY___PHP_Incomplete_Class
#ifndef OMIT_JUMP_TABLE_CLASS_SETARRAY___PHP_Incomplete_Class
void c___PHP_Incomplete_Class::o_setArray(CArrRef props) {
  c_ObjectData::o_setArray(props);
}
#endif // OMIT_JUMP_TABLE_CLASS_SETARRAY___PHP_Incomplete_Class
#ifndef OMIT_JUMP_TABLE_CLASS_realProp___PHP_Incomplete_Class
Variant * c___PHP_Incomplete_Class::o_realProp(CStrRef prop, int flags, CStrRef context) const {
  return o_realPropPublic(prop, flags);
}
#endif // OMIT_JUMP_TABLE_CLASS_realProp___PHP_Incomplete_Class
#ifndef OMIT_JUMP_TABLE_CLASS_realProp_PUBLIC___PHP_Incomplete_Class
Variant * c___PHP_Incomplete_Class::o_realPropPublic(CStrRef s, int flags) const {
  return c_ObjectData::o_realPropPublic(s, flags);
}
#endif // OMIT_JUMP_TABLE_CLASS_realProp_PUBLIC___PHP_Incomplete_Class
#ifndef OMIT_JUMP_TABLE_CLASS_realProp_PRIVATE___PHP_Incomplete_Class
Variant * c___PHP_Incomplete_Class::o_realPropPrivate(CStrRef s, int flags) const {
  return o_realPropPublic(s, flags);
}
#endif // OMIT_JUMP_TABLE_CLASS_realProp_PRIVATE___PHP_Incomplete_Class
#ifndef OMIT_JUMP_TABLE_CLASS_CONSTANT___PHP_Incomplete_Class
Variant c___PHP_Incomplete_Class::os_constant(const char *s) {
  return c_ObjectData::os_constant(s);
}
#endif // OMIT_JUMP_TABLE_CLASS_CONSTANT___PHP_Incomplete_Class
IMPLEMENT_CLASS(__PHP_Incomplete_Class)
bool c___PHP_Incomplete_Class::o_instanceof(CStrRef s) const {
  int64 hash = s->hash();
  switch (hash & 1) {
    case 0:
      HASH_INSTANCEOF(0x6576EACCCE24D694LL, NAMSTR(s_sys_ssd8c10a25, "__PHP_Incomplete_Class"));
      break;
    default:
      break;
  }
  return false;
}
ObjectData *c___PHP_Incomplete_Class::cloneImpl() {
  c___PHP_Incomplete_Class *obj = NEW(c___PHP_Incomplete_Class)();
  cloneSet(obj);
  return obj;
}
void c___PHP_Incomplete_Class::cloneSet(c___PHP_Incomplete_Class *clone) {
  ObjectData::cloneSet(clone);
}
Variant c___PHP_Incomplete_Class::o_invoke_from_eval(const char *s, Eval::VariableEnvironment &env, const Eval::FunctionCallExpression *caller, int64 hash, bool fatal) {
  return c_ObjectData::o_invoke_from_eval(s, env, caller, hash, fatal);
}
Variant c___PHP_Incomplete_Class::os_invoke_from_eval(const char *c, const char *s, Eval::VariableEnvironment &env, const Eval::FunctionCallExpression *caller, int64 hash, bool fatal) {
  return c_ObjectData::os_invoke_from_eval(c, s, env, caller, hash, fatal);
}
bool c___PHP_Incomplete_Class::os_get_call_info(MethodCallPackage &mcp, int64 hash) {
  CStrRef s __attribute__((__unused__)) (mcp.name);
  return c_ObjectData::os_get_call_info(mcp, hash);
}
bool c___PHP_Incomplete_Class::o_get_call_info(MethodCallPackage &mcp, int64 hash) {
  mcp.obj = this;
  return os_get_call_info(mcp, hash);
}
struct ObjectStaticCallbacks cw___PHP_Incomplete_Class = {
  c___PHP_Incomplete_Class::os_getInit,
  c___PHP_Incomplete_Class::os_get,
  c___PHP_Incomplete_Class::os_lval,
  c___PHP_Incomplete_Class::os_invoke,
  c___PHP_Incomplete_Class::os_constant,
  c___PHP_Incomplete_Class::os_get_call_info
};
void c___PHP_Incomplete_Class::init() {
}
Object co_stdClass(CArrRef params, bool init /* = true */) {
  return Object((NEW(c_stdClass)())->dynCreate(params, init));
}
Object coo_stdClass() {
  Object r(NEW(c_stdClass)());
  r->init();
  return r;
}
Object co___PHP_Incomplete_Class(CArrRef params, bool init /* = true */) {
  return Object((NEW(c___PHP_Incomplete_Class)())->dynCreate(params, init));
}
Object coo___PHP_Incomplete_Class() {
  Object r(NEW(c___PHP_Incomplete_Class)());
  r->init();
  return r;
}
Variant pm_php$classes$stdclass_php(bool incOnce /* = false */, LVariableTable* variables /* = NULL */, Globals *globals /* = get_globals() */) {
  PSEUDOMAIN_INJECTION_BUILTIN(run_init::classes/stdclass.php, pm_php$classes$stdclass_php);
  LVariableTable *gVariables __attribute__((__unused__)) = (LVariableTable *)g;
  return true;
}
namespace hphp_impl_splitter {}

///////////////////////////////////////////////////////////////////////////////
}
