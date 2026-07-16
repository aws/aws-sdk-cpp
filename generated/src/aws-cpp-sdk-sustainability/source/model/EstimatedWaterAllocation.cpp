/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sustainability/model/EstimatedWaterAllocation.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Sustainability {
namespace Model {

EstimatedWaterAllocation::EstimatedWaterAllocation(JsonView jsonValue) { *this = jsonValue; }

EstimatedWaterAllocation& EstimatedWaterAllocation::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("TimePeriod")) {
    m_timePeriod = jsonValue.GetObject("TimePeriod");
    m_timePeriodHasBeenSet = true;
  }
  if (jsonValue.ValueExists("DimensionsValues")) {
    Aws::Map<Aws::String, JsonView> dimensionsValuesJsonMap = jsonValue.GetObject("DimensionsValues").GetAllObjects();
    for (auto& dimensionsValuesItem : dimensionsValuesJsonMap) {
      m_dimensionsValues[DimensionMapper::GetDimensionForName(dimensionsValuesItem.first)] = dimensionsValuesItem.second.AsString();
    }
    m_dimensionsValuesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ModelVersion")) {
    m_modelVersion = jsonValue.GetString("ModelVersion");
    m_modelVersionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AllocationValues")) {
    Aws::Map<Aws::String, JsonView> allocationValuesJsonMap = jsonValue.GetObject("AllocationValues").GetAllObjects();
    for (auto& allocationValuesItem : allocationValuesJsonMap) {
      m_allocationValues[WaterAllocationTypeMapper::GetWaterAllocationTypeForName(allocationValuesItem.first)] =
          allocationValuesItem.second.AsObject();
    }
    m_allocationValuesHasBeenSet = true;
  }
  return *this;
}

JsonValue EstimatedWaterAllocation::Jsonize() const {
  JsonValue payload;

  if (m_timePeriodHasBeenSet) {
    payload.WithObject("TimePeriod", m_timePeriod.Jsonize());
  }

  if (m_dimensionsValuesHasBeenSet) {
    JsonValue dimensionsValuesJsonMap;
    for (auto& dimensionsValuesItem : m_dimensionsValues) {
      dimensionsValuesJsonMap.WithString(DimensionMapper::GetNameForDimension(dimensionsValuesItem.first), dimensionsValuesItem.second);
    }
    payload.WithObject("DimensionsValues", std::move(dimensionsValuesJsonMap));
  }

  if (m_modelVersionHasBeenSet) {
    payload.WithString("ModelVersion", m_modelVersion);
  }

  if (m_allocationValuesHasBeenSet) {
    JsonValue allocationValuesJsonMap;
    for (auto& allocationValuesItem : m_allocationValues) {
      allocationValuesJsonMap.WithObject(WaterAllocationTypeMapper::GetNameForWaterAllocationType(allocationValuesItem.first),
                                         allocationValuesItem.second.Jsonize());
    }
    payload.WithObject("AllocationValues", std::move(allocationValuesJsonMap));
  }

  return payload;
}

}  // namespace Model
}  // namespace Sustainability
}  // namespace Aws
