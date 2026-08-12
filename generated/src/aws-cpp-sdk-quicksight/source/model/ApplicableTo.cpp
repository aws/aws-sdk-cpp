/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/ApplicableTo.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {

ApplicableTo::ApplicableTo(JsonView jsonValue) { *this = jsonValue; }

ApplicableTo& ApplicableTo::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Type")) {
    m_type = ApplicableToTypeMapper::GetApplicableToTypeForName(jsonValue.GetString("Type"));
    m_typeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("GroupArns")) {
    Aws::Utils::Array<JsonView> groupArnsJsonList = jsonValue.GetArray("GroupArns");
    for (unsigned groupArnsIndex = 0; groupArnsIndex < groupArnsJsonList.GetLength(); ++groupArnsIndex) {
      m_groupArns.push_back(groupArnsJsonList[groupArnsIndex].AsString());
    }
    m_groupArnsHasBeenSet = true;
  }
  return *this;
}

JsonValue ApplicableTo::Jsonize() const {
  JsonValue payload;

  if (m_typeHasBeenSet) {
    payload.WithString("Type", ApplicableToTypeMapper::GetNameForApplicableToType(m_type));
  }

  if (m_groupArnsHasBeenSet) {
    Aws::Utils::Array<JsonValue> groupArnsJsonList(m_groupArns.size());
    for (unsigned groupArnsIndex = 0; groupArnsIndex < groupArnsJsonList.GetLength(); ++groupArnsIndex) {
      groupArnsJsonList[groupArnsIndex].AsString(m_groupArns[groupArnsIndex]);
    }
    payload.WithArray("GroupArns", std::move(groupArnsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
