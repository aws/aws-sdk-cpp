#pragma once

#include <aws/core/utils/memory/stl/AWSVector.h>
#include <smithy/Smithy_EXPORTS.h>
#include <smithy/client/schema/Trait.h>
#include <smithy/client/schema/TraitKey.h>

#include <memory>

namespace smithy {
namespace schema {
class SMITHY_API TraitMap {
 public:
  TraitMap() = default;

  template <typename T>
  std::shared_ptr<const T> Get(const TraitKey<T>& key) const {
    int idx = key.GetId();
    if (idx >= static_cast<int>(m_values.size())) return nullptr;
    return std::static_pointer_cast<const T>(m_values[idx]);
  }

  bool Has(const TraitKeyBase& key) const {
    int idx = key.GetId();
    if (idx >= static_cast<int>(m_values.size())) return false;
    return m_values[idx] != nullptr;
  }

  void Set(const TraitKeyBase& key, std::shared_ptr<const Trait> trait) {
    int idx = key.GetId();
    if (idx >= static_cast<int>(m_values.size())) {
      m_values.resize(idx + 1);
    }
    m_values[idx] = std::move(trait);
  }

 private:
  Aws::Vector<std::shared_ptr<const Trait>> m_values;
};
}  // namespace schema
}  // namespace smithy