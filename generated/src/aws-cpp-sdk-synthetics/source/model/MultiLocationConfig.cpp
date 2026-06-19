/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/synthetics/model/MultiLocationConfig.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Synthetics {
namespace Model {

MultiLocationConfig::MultiLocationConfig(JsonView jsonValue) { *this = jsonValue; }

MultiLocationConfig& MultiLocationConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("LocationType")) {
    m_locationType = LocationTypeMapper::GetLocationTypeForName(jsonValue.GetString("LocationType"));
    m_locationTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("PrimaryLocation")) {
    m_primaryLocation = jsonValue.GetString("PrimaryLocation");
    m_primaryLocationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Replicas")) {
    Aws::Utils::Array<JsonView> replicasJsonList = jsonValue.GetArray("Replicas");
    for (unsigned replicasIndex = 0; replicasIndex < replicasJsonList.GetLength(); ++replicasIndex) {
      m_replicas.push_back(replicasJsonList[replicasIndex].AsObject());
    }
    m_replicasHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ReplicationState")) {
    m_replicationState = ReplicationStateMapper::GetReplicationStateForName(jsonValue.GetString("ReplicationState"));
    m_replicationStateHasBeenSet = true;
  }
  return *this;
}

JsonValue MultiLocationConfig::Jsonize() const {
  JsonValue payload;

  if (m_locationTypeHasBeenSet) {
    payload.WithString("LocationType", LocationTypeMapper::GetNameForLocationType(m_locationType));
  }

  if (m_primaryLocationHasBeenSet) {
    payload.WithString("PrimaryLocation", m_primaryLocation);
  }

  if (m_replicasHasBeenSet) {
    Aws::Utils::Array<JsonValue> replicasJsonList(m_replicas.size());
    for (unsigned replicasIndex = 0; replicasIndex < replicasJsonList.GetLength(); ++replicasIndex) {
      replicasJsonList[replicasIndex].AsObject(m_replicas[replicasIndex].Jsonize());
    }
    payload.WithArray("Replicas", std::move(replicasJsonList));
  }

  if (m_replicationStateHasBeenSet) {
    payload.WithString("ReplicationState", ReplicationStateMapper::GetNameForReplicationState(m_replicationState));
  }

  return payload;
}

}  // namespace Model
}  // namespace Synthetics
}  // namespace Aws
