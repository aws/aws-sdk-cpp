/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/outposts/model/RackSpecificationDetails.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Outposts {
namespace Model {

RackSpecificationDetails::RackSpecificationDetails(JsonView jsonValue) { *this = jsonValue; }

RackSpecificationDetails& RackSpecificationDetails::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("RackId")) {
    m_rackId = jsonValue.GetString("RackId");
    m_rackIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("RackUse")) {
    m_rackUse = QuoteRackUseTypeMapper::GetQuoteRackUseTypeForName(jsonValue.GetString("RackUse"));
    m_rackUseHasBeenSet = true;
  }
  if (jsonValue.ValueExists("RackPowerDrawKva")) {
    m_rackPowerDrawKva = jsonValue.GetDouble("RackPowerDrawKva");
    m_rackPowerDrawKvaHasBeenSet = true;
  }
  if (jsonValue.ValueExists("RackWeightLbs")) {
    m_rackWeightLbs = jsonValue.GetDouble("RackWeightLbs");
    m_rackWeightLbsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("RackHeightInches")) {
    m_rackHeightInches = jsonValue.GetDouble("RackHeightInches");
    m_rackHeightInchesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("RackWidthInches")) {
    m_rackWidthInches = jsonValue.GetDouble("RackWidthInches");
    m_rackWidthInchesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("RackDepthInches")) {
    m_rackDepthInches = jsonValue.GetDouble("RackDepthInches");
    m_rackDepthInchesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("RackUnitHeight")) {
    m_rackUnitHeight = RackUnitHeightMapper::GetRackUnitHeightForName(jsonValue.GetString("RackUnitHeight"));
    m_rackUnitHeightHasBeenSet = true;
  }
  if (jsonValue.ValueExists("EC2Capacities")) {
    Aws::Utils::Array<JsonView> eC2CapacitiesJsonList = jsonValue.GetArray("EC2Capacities");
    for (unsigned eC2CapacitiesIndex = 0; eC2CapacitiesIndex < eC2CapacitiesJsonList.GetLength(); ++eC2CapacitiesIndex) {
      m_eC2Capacities.push_back(eC2CapacitiesJsonList[eC2CapacitiesIndex].AsObject());
    }
    m_eC2CapacitiesHasBeenSet = true;
  }
  return *this;
}

JsonValue RackSpecificationDetails::Jsonize() const {
  JsonValue payload;

  if (m_rackIdHasBeenSet) {
    payload.WithString("RackId", m_rackId);
  }

  if (m_rackUseHasBeenSet) {
    payload.WithString("RackUse", QuoteRackUseTypeMapper::GetNameForQuoteRackUseType(m_rackUse));
  }

  if (m_rackPowerDrawKvaHasBeenSet) {
    payload.WithDouble("RackPowerDrawKva", m_rackPowerDrawKva);
  }

  if (m_rackWeightLbsHasBeenSet) {
    payload.WithDouble("RackWeightLbs", m_rackWeightLbs);
  }

  if (m_rackHeightInchesHasBeenSet) {
    payload.WithDouble("RackHeightInches", m_rackHeightInches);
  }

  if (m_rackWidthInchesHasBeenSet) {
    payload.WithDouble("RackWidthInches", m_rackWidthInches);
  }

  if (m_rackDepthInchesHasBeenSet) {
    payload.WithDouble("RackDepthInches", m_rackDepthInches);
  }

  if (m_rackUnitHeightHasBeenSet) {
    payload.WithString("RackUnitHeight", RackUnitHeightMapper::GetNameForRackUnitHeight(m_rackUnitHeight));
  }

  if (m_eC2CapacitiesHasBeenSet) {
    Aws::Utils::Array<JsonValue> eC2CapacitiesJsonList(m_eC2Capacities.size());
    for (unsigned eC2CapacitiesIndex = 0; eC2CapacitiesIndex < eC2CapacitiesJsonList.GetLength(); ++eC2CapacitiesIndex) {
      eC2CapacitiesJsonList[eC2CapacitiesIndex].AsObject(m_eC2Capacities[eC2CapacitiesIndex].Jsonize());
    }
    payload.WithArray("EC2Capacities", std::move(eC2CapacitiesJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace Outposts
}  // namespace Aws
