/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/outposts/model/CapacitySummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Outposts {
namespace Model {

CapacitySummary::CapacitySummary(JsonView jsonValue) { *this = jsonValue; }

CapacitySummary& CapacitySummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ExistingCapacities")) {
    Aws::Utils::Array<JsonView> existingCapacitiesJsonList = jsonValue.GetArray("ExistingCapacities");
    for (unsigned existingCapacitiesIndex = 0; existingCapacitiesIndex < existingCapacitiesJsonList.GetLength();
         ++existingCapacitiesIndex) {
      m_existingCapacities.push_back(existingCapacitiesJsonList[existingCapacitiesIndex].AsObject());
    }
    m_existingCapacitiesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("FinalCapacities")) {
    Aws::Utils::Array<JsonView> finalCapacitiesJsonList = jsonValue.GetArray("FinalCapacities");
    for (unsigned finalCapacitiesIndex = 0; finalCapacitiesIndex < finalCapacitiesJsonList.GetLength(); ++finalCapacitiesIndex) {
      m_finalCapacities.push_back(finalCapacitiesJsonList[finalCapacitiesIndex].AsObject());
    }
    m_finalCapacitiesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CapacityChange")) {
    Aws::Utils::Array<JsonView> capacityChangeJsonList = jsonValue.GetArray("CapacityChange");
    for (unsigned capacityChangeIndex = 0; capacityChangeIndex < capacityChangeJsonList.GetLength(); ++capacityChangeIndex) {
      m_capacityChange.push_back(capacityChangeJsonList[capacityChangeIndex].AsObject());
    }
    m_capacityChangeHasBeenSet = true;
  }
  return *this;
}

JsonValue CapacitySummary::Jsonize() const {
  JsonValue payload;

  if (m_existingCapacitiesHasBeenSet) {
    Aws::Utils::Array<JsonValue> existingCapacitiesJsonList(m_existingCapacities.size());
    for (unsigned existingCapacitiesIndex = 0; existingCapacitiesIndex < existingCapacitiesJsonList.GetLength();
         ++existingCapacitiesIndex) {
      existingCapacitiesJsonList[existingCapacitiesIndex].AsObject(m_existingCapacities[existingCapacitiesIndex].Jsonize());
    }
    payload.WithArray("ExistingCapacities", std::move(existingCapacitiesJsonList));
  }

  if (m_finalCapacitiesHasBeenSet) {
    Aws::Utils::Array<JsonValue> finalCapacitiesJsonList(m_finalCapacities.size());
    for (unsigned finalCapacitiesIndex = 0; finalCapacitiesIndex < finalCapacitiesJsonList.GetLength(); ++finalCapacitiesIndex) {
      finalCapacitiesJsonList[finalCapacitiesIndex].AsObject(m_finalCapacities[finalCapacitiesIndex].Jsonize());
    }
    payload.WithArray("FinalCapacities", std::move(finalCapacitiesJsonList));
  }

  if (m_capacityChangeHasBeenSet) {
    Aws::Utils::Array<JsonValue> capacityChangeJsonList(m_capacityChange.size());
    for (unsigned capacityChangeIndex = 0; capacityChangeIndex < capacityChangeJsonList.GetLength(); ++capacityChangeIndex) {
      capacityChangeJsonList[capacityChangeIndex].AsObject(m_capacityChange[capacityChangeIndex].Jsonize());
    }
    payload.WithArray("CapacityChange", std::move(capacityChangeJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace Outposts
}  // namespace Aws
