/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/network-security-manager/model/ResourceSet.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace NetworkSecurityManager {
namespace Model {

ResourceSet::ResourceSet(JsonView jsonValue) { *this = jsonValue; }

ResourceSet& ResourceSet::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("explicitArns")) {
    Aws::Utils::Array<JsonView> explicitArnsJsonList = jsonValue.GetArray("explicitArns");
    for (unsigned explicitArnsIndex = 0; explicitArnsIndex < explicitArnsJsonList.GetLength(); ++explicitArnsIndex) {
      m_explicitArns.push_back(explicitArnsJsonList[explicitArnsIndex].AsString());
    }
    m_explicitArnsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("expression")) {
    m_expression = jsonValue.GetObject("expression");
    m_expressionHasBeenSet = true;
  }
  return *this;
}

JsonValue ResourceSet::Jsonize() const {
  JsonValue payload;

  if (m_explicitArnsHasBeenSet) {
    Aws::Utils::Array<JsonValue> explicitArnsJsonList(m_explicitArns.size());
    for (unsigned explicitArnsIndex = 0; explicitArnsIndex < explicitArnsJsonList.GetLength(); ++explicitArnsIndex) {
      explicitArnsJsonList[explicitArnsIndex].AsString(m_explicitArns[explicitArnsIndex]);
    }
    payload.WithArray("explicitArns", std::move(explicitArnsJsonList));
  }

  if (m_expressionHasBeenSet) {
    payload.WithObject("expression", m_expression.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace NetworkSecurityManager
}  // namespace Aws
