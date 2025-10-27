/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/rtbfabric/model/Filter.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace RTBFabric {
namespace Model {

Filter::Filter(JsonView jsonValue) { *this = jsonValue; }

Filter& Filter::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("criteria")) {
    Aws::Utils::Array<JsonView> criteriaJsonList = jsonValue.GetArray("criteria");
    for (unsigned criteriaIndex = 0; criteriaIndex < criteriaJsonList.GetLength(); ++criteriaIndex) {
      m_criteria.push_back(criteriaJsonList[criteriaIndex].AsObject());
    }
    m_criteriaHasBeenSet = true;
  }
  return *this;
}

JsonValue Filter::Jsonize() const {
  JsonValue payload;

  if (m_criteriaHasBeenSet) {
    Aws::Utils::Array<JsonValue> criteriaJsonList(m_criteria.size());
    for (unsigned criteriaIndex = 0; criteriaIndex < criteriaJsonList.GetLength(); ++criteriaIndex) {
      criteriaJsonList[criteriaIndex].AsObject(m_criteria[criteriaIndex].Jsonize());
    }
    payload.WithArray("criteria", std::move(criteriaJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace RTBFabric
}  // namespace Aws
