/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/timestream-influxdb/model/ClusterConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace TimestreamInfluxDB {
namespace Model {

ClusterConfiguration::ClusterConfiguration(JsonView jsonValue) { *this = jsonValue; }

ClusterConfiguration& ClusterConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ingestQueryInstances")) {
    m_ingestQueryInstances = jsonValue.GetInteger("ingestQueryInstances");
    m_ingestQueryInstancesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("queryOnlyInstances")) {
    m_queryOnlyInstances = jsonValue.GetInteger("queryOnlyInstances");
    m_queryOnlyInstancesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("dedicatedCompactor")) {
    m_dedicatedCompactor = jsonValue.GetBool("dedicatedCompactor");
    m_dedicatedCompactorHasBeenSet = true;
  }
  return *this;
}

JsonValue ClusterConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_ingestQueryInstancesHasBeenSet) {
    payload.WithInteger("ingestQueryInstances", m_ingestQueryInstances);
  }

  if (m_queryOnlyInstancesHasBeenSet) {
    payload.WithInteger("queryOnlyInstances", m_queryOnlyInstances);
  }

  if (m_dedicatedCompactorHasBeenSet) {
    payload.WithBool("dedicatedCompactor", m_dedicatedCompactor);
  }

  return payload;
}

}  // namespace Model
}  // namespace TimestreamInfluxDB
}  // namespace Aws
