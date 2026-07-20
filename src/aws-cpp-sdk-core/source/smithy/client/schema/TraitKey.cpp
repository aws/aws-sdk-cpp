/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <smithy/client/schema/JsonTraits.h>
#include <smithy/client/schema/SerdeTraits.h>
#include <smithy/client/schema/TraitKey.h>
#include <smithy/client/schema/XmlTraits.h>

#include <atomic>

namespace smithy {
namespace schema {

static std::atomic<int> s_traitIdCounter{0};

int NextTraitKey() { return s_traitIdCounter.fetch_add(1, std::memory_order_relaxed); }

template <typename T>
const TraitKey<T>& TraitKey<T>::Instance() {
  static const TraitKey instance(NextTraitKey());
  return instance;
}

#ifdef _MSC_VER
#define SMITHY_TEMPLATE_EXPORT __declspec(dllexport)
#else
#define SMITHY_TEMPLATE_EXPORT
#endif

template class SMITHY_TEMPLATE_EXPORT TraitKey<JsonNameTrait>;
template class SMITHY_TEMPLATE_EXPORT TraitKey<TimestampFormatTrait>;
template class SMITHY_TEMPLATE_EXPORT TraitKey<XmlNameTrait>;
template class SMITHY_TEMPLATE_EXPORT TraitKey<XmlFlattenedTrait>;
template class SMITHY_TEMPLATE_EXPORT TraitKey<XmlAttributeTrait>;
template class SMITHY_TEMPLATE_EXPORT TraitKey<XmlNamespaceTrait>;
template class SMITHY_TEMPLATE_EXPORT TraitKey<XmlListItemNameTrait>;
template class SMITHY_TEMPLATE_EXPORT TraitKey<XmlMapEntryNameTrait>;
template class SMITHY_TEMPLATE_EXPORT TraitKey<XmlMapKeyNameTrait>;
template class SMITHY_TEMPLATE_EXPORT TraitKey<XmlMapValueNameTrait>;

}  // namespace schema
}  // namespace smithy
