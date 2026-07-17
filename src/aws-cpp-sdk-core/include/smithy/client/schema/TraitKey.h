#pragma once

#include <smithy/Smithy_EXPORTS.h>

namespace smithy {
namespace schema {
class SMITHY_API TraitKeyBase {
 public:
  int GetId() const { return m_id; }

 protected:
  explicit TraitKeyBase(int id) : m_id(id) {}

 private:
  int m_id;
};

SMITHY_API int NextTraitKey();

template <typename T>
class TraitKey : public TraitKeyBase {
 public:
  static const TraitKey& Instance();

 private:
  explicit TraitKey(int id) : TraitKeyBase(id) {}
};
}  // namespace schema
}  // namespace smithy