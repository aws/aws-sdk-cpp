/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/timestream-influxdb/model/InfluxDBv3EnterpriseDeploymentConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace TimestreamInfluxDB {
namespace Model {

InfluxDBv3EnterpriseDeploymentConfiguration::InfluxDBv3EnterpriseDeploymentConfiguration(JsonView jsonValue) { *this = jsonValue; }

InfluxDBv3EnterpriseDeploymentConfiguration& InfluxDBv3EnterpriseDeploymentConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("nodeGroups")) {
    Aws::Utils::Array<JsonView> nodeGroupsJsonList = jsonValue.GetArray("nodeGroups");
    for (unsigned nodeGroupsIndex = 0; nodeGroupsIndex < nodeGroupsJsonList.GetLength(); ++nodeGroupsIndex) {
      m_nodeGroups.push_back(nodeGroupsJsonList[nodeGroupsIndex].AsObject());
    }
    m_nodeGroupsHasBeenSet = true;
  }
  return *this;
}

JsonValue InfluxDBv3EnterpriseDeploymentConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_nodeGroupsHasBeenSet) {
    Aws::Utils::Array<JsonValue> nodeGroupsJsonList(m_nodeGroups.size());
    for (unsigned nodeGroupsIndex = 0; nodeGroupsIndex < nodeGroupsJsonList.GetLength(); ++nodeGroupsIndex) {
      nodeGroupsJsonList[nodeGroupsIndex].AsObject(m_nodeGroups[nodeGroupsIndex].Jsonize());
    }
    payload.WithArray("nodeGroups", std::move(nodeGroupsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace TimestreamInfluxDB
}  // namespace Aws
