/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/outposts/model/ServerSpecificationDetails.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Outposts {
namespace Model {

ServerSpecificationDetails::ServerSpecificationDetails(JsonView jsonValue) { *this = jsonValue; }

ServerSpecificationDetails& ServerSpecificationDetails::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ServerPowerDrawKva")) {
    m_serverPowerDrawKva = jsonValue.GetDouble("ServerPowerDrawKva");
    m_serverPowerDrawKvaHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ServerWeightLbs")) {
    m_serverWeightLbs = jsonValue.GetDouble("ServerWeightLbs");
    m_serverWeightLbsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ServerHeightInches")) {
    m_serverHeightInches = jsonValue.GetDouble("ServerHeightInches");
    m_serverHeightInchesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ServerWidthInches")) {
    m_serverWidthInches = jsonValue.GetDouble("ServerWidthInches");
    m_serverWidthInchesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ServerDepthInches")) {
    m_serverDepthInches = jsonValue.GetDouble("ServerDepthInches");
    m_serverDepthInchesHasBeenSet = true;
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

JsonValue ServerSpecificationDetails::Jsonize() const {
  JsonValue payload;

  if (m_serverPowerDrawKvaHasBeenSet) {
    payload.WithDouble("ServerPowerDrawKva", m_serverPowerDrawKva);
  }

  if (m_serverWeightLbsHasBeenSet) {
    payload.WithDouble("ServerWeightLbs", m_serverWeightLbs);
  }

  if (m_serverHeightInchesHasBeenSet) {
    payload.WithDouble("ServerHeightInches", m_serverHeightInches);
  }

  if (m_serverWidthInchesHasBeenSet) {
    payload.WithDouble("ServerWidthInches", m_serverWidthInches);
  }

  if (m_serverDepthInchesHasBeenSet) {
    payload.WithDouble("ServerDepthInches", m_serverDepthInches);
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
