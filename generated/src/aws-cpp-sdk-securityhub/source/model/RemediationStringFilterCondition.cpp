/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/securityhub/model/RemediationStringFilterCondition.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SecurityHub {
namespace Model {

RemediationStringFilterCondition::RemediationStringFilterCondition(JsonView jsonValue) { *this = jsonValue; }

RemediationStringFilterCondition& RemediationStringFilterCondition::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Value")) {
    m_value = jsonValue.GetString("Value");
    m_valueHasBeenSet = true;
  }
  return *this;
}

JsonValue RemediationStringFilterCondition::Jsonize() const {
  JsonValue payload;

  if (m_valueHasBeenSet) {
    payload.WithString("Value", m_value);
  }

  return payload;
}

}  // namespace Model
}  // namespace SecurityHub
}  // namespace Aws
