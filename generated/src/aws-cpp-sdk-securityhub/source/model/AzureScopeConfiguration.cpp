/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/securityhub/model/AzureScopeConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SecurityHub {
namespace Model {

AzureScopeConfiguration::AzureScopeConfiguration(JsonView jsonValue) { *this = jsonValue; }

AzureScopeConfiguration& AzureScopeConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ScopeType")) {
    m_scopeType = ScopeTypeMapper::GetScopeTypeForName(jsonValue.GetString("ScopeType"));
    m_scopeTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ScopeValues")) {
    Aws::Utils::Array<JsonView> scopeValuesJsonList = jsonValue.GetArray("ScopeValues");
    for (unsigned scopeValuesIndex = 0; scopeValuesIndex < scopeValuesJsonList.GetLength(); ++scopeValuesIndex) {
      m_scopeValues.push_back(scopeValuesJsonList[scopeValuesIndex].AsString());
    }
    m_scopeValuesHasBeenSet = true;
  }
  return *this;
}

JsonValue AzureScopeConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_scopeTypeHasBeenSet) {
    payload.WithString("ScopeType", ScopeTypeMapper::GetNameForScopeType(m_scopeType));
  }

  if (m_scopeValuesHasBeenSet) {
    Aws::Utils::Array<JsonValue> scopeValuesJsonList(m_scopeValues.size());
    for (unsigned scopeValuesIndex = 0; scopeValuesIndex < scopeValuesJsonList.GetLength(); ++scopeValuesIndex) {
      scopeValuesJsonList[scopeValuesIndex].AsString(m_scopeValues[scopeValuesIndex]);
    }
    payload.WithArray("ScopeValues", std::move(scopeValuesJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace SecurityHub
}  // namespace Aws
