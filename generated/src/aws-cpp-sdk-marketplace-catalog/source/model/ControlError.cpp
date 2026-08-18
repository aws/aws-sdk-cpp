/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/marketplace-catalog/model/ControlError.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MarketplaceCatalog {
namespace Model {

ControlError::ControlError(JsonView jsonValue) { *this = jsonValue; }

ControlError& ControlError::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Code")) {
    m_code = jsonValue.GetString("Code");
    m_codeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Message")) {
    m_message = jsonValue.GetString("Message");
    m_messageHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Scope")) {
    Aws::Utils::Array<JsonView> scopeJsonList = jsonValue.GetArray("Scope");
    for (unsigned scopeIndex = 0; scopeIndex < scopeJsonList.GetLength(); ++scopeIndex) {
      m_scope.push_back(scopeJsonList[scopeIndex].AsObject());
    }
    m_scopeHasBeenSet = true;
  }
  return *this;
}

JsonValue ControlError::Jsonize() const {
  JsonValue payload;

  if (m_codeHasBeenSet) {
    payload.WithString("Code", m_code);
  }

  if (m_messageHasBeenSet) {
    payload.WithString("Message", m_message);
  }

  if (m_scopeHasBeenSet) {
    Aws::Utils::Array<JsonValue> scopeJsonList(m_scope.size());
    for (unsigned scopeIndex = 0; scopeIndex < scopeJsonList.GetLength(); ++scopeIndex) {
      scopeJsonList[scopeIndex].AsObject(m_scope[scopeIndex].Jsonize());
    }
    payload.WithArray("Scope", std::move(scopeJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace MarketplaceCatalog
}  // namespace Aws
