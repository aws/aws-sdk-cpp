/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/timestream-influxdb/model/NodeGroup.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace TimestreamInfluxDB {
namespace Model {

NodeGroup::NodeGroup(JsonView jsonValue) { *this = jsonValue; }

NodeGroup& NodeGroup::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("instanceModes")) {
    Aws::Utils::Array<JsonView> instanceModesJsonList = jsonValue.GetArray("instanceModes");
    for (unsigned instanceModesIndex = 0; instanceModesIndex < instanceModesJsonList.GetLength(); ++instanceModesIndex) {
      m_instanceModes.push_back(InstanceModeMapper::GetInstanceModeForName(instanceModesJsonList[instanceModesIndex].AsString()));
    }
    m_instanceModesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("instanceType")) {
    m_instanceType = DbInstanceTypeMapper::GetDbInstanceTypeForName(jsonValue.GetString("instanceType"));
    m_instanceTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("count")) {
    m_count = jsonValue.GetInteger("count");
    m_countHasBeenSet = true;
  }
  return *this;
}

JsonValue NodeGroup::Jsonize() const {
  JsonValue payload;

  if (m_instanceModesHasBeenSet) {
    Aws::Utils::Array<JsonValue> instanceModesJsonList(m_instanceModes.size());
    for (unsigned instanceModesIndex = 0; instanceModesIndex < instanceModesJsonList.GetLength(); ++instanceModesIndex) {
      instanceModesJsonList[instanceModesIndex].AsString(InstanceModeMapper::GetNameForInstanceMode(m_instanceModes[instanceModesIndex]));
    }
    payload.WithArray("instanceModes", std::move(instanceModesJsonList));
  }

  if (m_instanceTypeHasBeenSet) {
    payload.WithString("instanceType", DbInstanceTypeMapper::GetNameForDbInstanceType(m_instanceType));
  }

  if (m_countHasBeenSet) {
    payload.WithInteger("count", m_count);
  }

  return payload;
}

}  // namespace Model
}  // namespace TimestreamInfluxDB
}  // namespace Aws
