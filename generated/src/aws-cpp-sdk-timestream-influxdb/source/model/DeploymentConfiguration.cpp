/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/timestream-influxdb/model/DeploymentConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace TimestreamInfluxDB {
namespace Model {

DeploymentConfiguration::DeploymentConfiguration(JsonView jsonValue) { *this = jsonValue; }

DeploymentConfiguration& DeploymentConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("InfluxDBv3Enterprise")) {
    m_influxDBv3Enterprise = jsonValue.GetObject("InfluxDBv3Enterprise");
    m_influxDBv3EnterpriseHasBeenSet = true;
  }
  return *this;
}

JsonValue DeploymentConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_influxDBv3EnterpriseHasBeenSet) {
    payload.WithObject("InfluxDBv3Enterprise", m_influxDBv3Enterprise.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace TimestreamInfluxDB
}  // namespace Aws
