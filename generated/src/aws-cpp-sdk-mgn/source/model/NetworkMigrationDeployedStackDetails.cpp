/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mgn/model/NetworkMigrationDeployedStackDetails.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace mgn {
namespace Model {

NetworkMigrationDeployedStackDetails::NetworkMigrationDeployedStackDetails(JsonView jsonValue) { *this = jsonValue; }

NetworkMigrationDeployedStackDetails& NetworkMigrationDeployedStackDetails::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("status")) {
    m_status = NetworkMigrationDeployedStackStatusMapper::GetNetworkMigrationDeployedStackStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("stackPhysicalID")) {
    m_stackPhysicalID = jsonValue.GetString("stackPhysicalID");
    m_stackPhysicalIDHasBeenSet = true;
  }
  if (jsonValue.ValueExists("stackLogicalID")) {
    m_stackLogicalID = jsonValue.GetString("stackLogicalID");
    m_stackLogicalIDHasBeenSet = true;
  }
  if (jsonValue.ValueExists("segmentID")) {
    m_segmentID = jsonValue.GetString("segmentID");
    m_segmentIDHasBeenSet = true;
  }
  if (jsonValue.ValueExists("targetAccount")) {
    m_targetAccount = jsonValue.GetString("targetAccount");
    m_targetAccountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("failedResources")) {
    Aws::Utils::Array<JsonView> failedResourcesJsonList = jsonValue.GetArray("failedResources");
    for (unsigned failedResourcesIndex = 0; failedResourcesIndex < failedResourcesJsonList.GetLength(); ++failedResourcesIndex) {
      m_failedResources.push_back(failedResourcesJsonList[failedResourcesIndex].AsObject());
    }
    m_failedResourcesHasBeenSet = true;
  }
  return *this;
}

JsonValue NetworkMigrationDeployedStackDetails::Jsonize() const {
  JsonValue payload;

  if (m_statusHasBeenSet) {
    payload.WithString("status", NetworkMigrationDeployedStackStatusMapper::GetNameForNetworkMigrationDeployedStackStatus(m_status));
  }

  if (m_stackPhysicalIDHasBeenSet) {
    payload.WithString("stackPhysicalID", m_stackPhysicalID);
  }

  if (m_stackLogicalIDHasBeenSet) {
    payload.WithString("stackLogicalID", m_stackLogicalID);
  }

  if (m_segmentIDHasBeenSet) {
    payload.WithString("segmentID", m_segmentID);
  }

  if (m_targetAccountHasBeenSet) {
    payload.WithString("targetAccount", m_targetAccount);
  }

  if (m_failedResourcesHasBeenSet) {
    Aws::Utils::Array<JsonValue> failedResourcesJsonList(m_failedResources.size());
    for (unsigned failedResourcesIndex = 0; failedResourcesIndex < failedResourcesJsonList.GetLength(); ++failedResourcesIndex) {
      failedResourcesJsonList[failedResourcesIndex].AsObject(m_failedResources[failedResourcesIndex].Jsonize());
    }
    payload.WithArray("failedResources", std::move(failedResourcesJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace mgn
}  // namespace Aws
