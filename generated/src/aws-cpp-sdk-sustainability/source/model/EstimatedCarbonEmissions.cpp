/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sustainability/model/EstimatedCarbonEmissions.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Sustainability {
namespace Model {

EstimatedCarbonEmissions::EstimatedCarbonEmissions(JsonView jsonValue) { *this = jsonValue; }

EstimatedCarbonEmissions& EstimatedCarbonEmissions::operator=(JsonView jsonValue) {
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
  if (jsonValue.ValueExists("EmissionsValues")) {
    Aws::Map<Aws::String, JsonView> emissionsValuesJsonMap = jsonValue.GetObject("EmissionsValues").GetAllObjects();
    for (auto& emissionsValuesItem : emissionsValuesJsonMap) {
      m_emissionsValues[EmissionsTypeMapper::GetEmissionsTypeForName(emissionsValuesItem.first)] = emissionsValuesItem.second.AsObject();
    }
    m_emissionsValuesHasBeenSet = true;
  }
  return *this;
}

JsonValue EstimatedCarbonEmissions::Jsonize() const {
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

  if (m_emissionsValuesHasBeenSet) {
    JsonValue emissionsValuesJsonMap;
    for (auto& emissionsValuesItem : m_emissionsValues) {
      emissionsValuesJsonMap.WithObject(EmissionsTypeMapper::GetNameForEmissionsType(emissionsValuesItem.first),
                                        emissionsValuesItem.second.Jsonize());
    }
    payload.WithObject("EmissionsValues", std::move(emissionsValuesJsonMap));
  }

  return payload;
}

}  // namespace Model
}  // namespace Sustainability
}  // namespace Aws
