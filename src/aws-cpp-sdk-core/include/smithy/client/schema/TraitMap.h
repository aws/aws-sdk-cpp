#pragma once

#include <aws/core/utils/memory/stl/AWSVector.h>
#include <smithy/Smithy_EXPORTS.h>
#include <smithy/client/schema/Trait.h>
#include <smithy/client/schema/TraitKey.h>

namespace smithy {
namespace schema {
class SMITHY_API TraitMap {
 public:
  TraitMap() = default;

  template <typename T>
  const T* Get(const TraitKey<T>& key) const {
    int idx = key.GetId();
    if (idx >= static_cast<int>(m_value.size())) return nullptr;
    return static_cast<const T*>(m_value[idx]);
  }

  bool Has(const TraitKeyBase& key) const {
    int idx = key.GetId();
    if (idx >= static_cast<int>(m_value.size())) return false;
    return m_value[idx] != nullptr;
  }

  void Set(const TraitKeyBase& key, const Trait* trait) {
    int idx = key.GetId();
    if (idx >= static_cast<int>(m_value.size())) {
      m_value.resize(idx + 1, nullptr);
    }
    m_value[idx] = trait;
  }

 private:
  Aws::Vector<const Trait*> m_value;
};
}  // namespace schema
}  // namespace smithy