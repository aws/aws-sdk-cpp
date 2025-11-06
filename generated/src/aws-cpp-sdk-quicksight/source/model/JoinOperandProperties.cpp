/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/JoinOperandProperties.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {

JoinOperandProperties::JoinOperandProperties(JsonView jsonValue) { *this = jsonValue; }

JoinOperandProperties& JoinOperandProperties::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("OutputColumnNameOverrides")) {
    Aws::Utils::Array<JsonView> outputColumnNameOverridesJsonList = jsonValue.GetArray("OutputColumnNameOverrides");
    for (unsigned outputColumnNameOverridesIndex = 0; outputColumnNameOverridesIndex < outputColumnNameOverridesJsonList.GetLength();
         ++outputColumnNameOverridesIndex) {
      m_outputColumnNameOverrides.push_back(outputColumnNameOverridesJsonList[outputColumnNameOverridesIndex].AsObject());
    }
    m_outputColumnNameOverridesHasBeenSet = true;
  }
  return *this;
}

JsonValue JoinOperandProperties::Jsonize() const {
  JsonValue payload;

  if (m_outputColumnNameOverridesHasBeenSet) {
    Aws::Utils::Array<JsonValue> outputColumnNameOverridesJsonList(m_outputColumnNameOverrides.size());
    for (unsigned outputColumnNameOverridesIndex = 0; outputColumnNameOverridesIndex < outputColumnNameOverridesJsonList.GetLength();
         ++outputColumnNameOverridesIndex) {
      outputColumnNameOverridesJsonList[outputColumnNameOverridesIndex].AsObject(
          m_outputColumnNameOverrides[outputColumnNameOverridesIndex].Jsonize());
    }
    payload.WithArray("OutputColumnNameOverrides", std::move(outputColumnNameOverridesJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
