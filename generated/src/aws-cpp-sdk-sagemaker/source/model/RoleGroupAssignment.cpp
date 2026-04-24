/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemaker/model/RoleGroupAssignment.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SageMaker {
namespace Model {

RoleGroupAssignment::RoleGroupAssignment(JsonView jsonValue) { *this = jsonValue; }

RoleGroupAssignment& RoleGroupAssignment::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("RoleName")) {
    m_roleName = jsonValue.GetString("RoleName");
    m_roleNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("GroupPatterns")) {
    Aws::Utils::Array<JsonView> groupPatternsJsonList = jsonValue.GetArray("GroupPatterns");
    for (unsigned groupPatternsIndex = 0; groupPatternsIndex < groupPatternsJsonList.GetLength(); ++groupPatternsIndex) {
      m_groupPatterns.push_back(groupPatternsJsonList[groupPatternsIndex].AsString());
    }
    m_groupPatternsHasBeenSet = true;
  }
  return *this;
}

JsonValue RoleGroupAssignment::Jsonize() const {
  JsonValue payload;

  if (m_roleNameHasBeenSet) {
    payload.WithString("RoleName", m_roleName);
  }

  if (m_groupPatternsHasBeenSet) {
    Aws::Utils::Array<JsonValue> groupPatternsJsonList(m_groupPatterns.size());
    for (unsigned groupPatternsIndex = 0; groupPatternsIndex < groupPatternsJsonList.GetLength(); ++groupPatternsIndex) {
      groupPatternsJsonList[groupPatternsIndex].AsString(m_groupPatterns[groupPatternsIndex]);
    }
    payload.WithArray("GroupPatterns", std::move(groupPatternsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
