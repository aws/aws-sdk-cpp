/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sustainability/model/FilterExpression.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Sustainability {
namespace Model {

FilterExpression::FilterExpression(JsonView jsonValue) { *this = jsonValue; }

FilterExpression& FilterExpression::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Dimensions")) {
    Aws::Map<Aws::String, JsonView> dimensionsJsonMap = jsonValue.GetObject("Dimensions").GetAllObjects();
    for (auto& dimensionsItem : dimensionsJsonMap) {
      Aws::Utils::Array<JsonView> dimensionValueList2JsonList = dimensionsItem.second.AsArray();
      Aws::Vector<Aws::String> dimensionValueList2List;
      dimensionValueList2List.reserve((size_t)dimensionValueList2JsonList.GetLength());
      for (unsigned dimensionValueList2Index = 0; dimensionValueList2Index < dimensionValueList2JsonList.GetLength();
           ++dimensionValueList2Index) {
        dimensionValueList2List.push_back(dimensionValueList2JsonList[dimensionValueList2Index].AsString());
      }
      m_dimensions[DimensionMapper::GetDimensionForName(dimensionsItem.first)] = std::move(dimensionValueList2List);
    }
    m_dimensionsHasBeenSet = true;
  }
  return *this;
}

JsonValue FilterExpression::Jsonize() const {
  JsonValue payload;

  if (m_dimensionsHasBeenSet) {
    JsonValue dimensionsJsonMap;
    for (auto& dimensionsItem : m_dimensions) {
      Aws::Utils::Array<JsonValue> dimensionValueListJsonList(dimensionsItem.second.size());
      for (unsigned dimensionValueListIndex = 0; dimensionValueListIndex < dimensionValueListJsonList.GetLength();
           ++dimensionValueListIndex) {
        dimensionValueListJsonList[dimensionValueListIndex].AsString(dimensionsItem.second[dimensionValueListIndex]);
      }
      dimensionsJsonMap.WithArray(DimensionMapper::GetNameForDimension(dimensionsItem.first), std::move(dimensionValueListJsonList));
    }
    payload.WithObject("Dimensions", std::move(dimensionsJsonMap));
  }

  return payload;
}

}  // namespace Model
}  // namespace Sustainability
}  // namespace Aws
