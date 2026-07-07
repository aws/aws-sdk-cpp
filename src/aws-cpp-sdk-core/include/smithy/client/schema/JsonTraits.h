/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#pragma once

#include <aws/core/utils/memory/stl/AWSString.h>
#include <smithy/client/schema/Trait.h>
#include <smithy/client/schema/TraitKey.h>

namespace smithy {
namespace schema {

class JsonNameTrait : public Trait {
 public:
  explicit JsonNameTrait(const Aws::String& value) : m_value(value) {}
  const Aws::String& GetValue() const { return m_value; }
  static const TraitKey<JsonNameTrait>& KEY() { return TraitKey<JsonNameTrait>::Instance(); }

 private:
  Aws::String m_value;
};

}  // namespace schema
}  // namespace smithy
