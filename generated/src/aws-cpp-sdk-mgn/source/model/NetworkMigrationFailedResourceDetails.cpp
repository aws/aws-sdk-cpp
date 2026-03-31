/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mgn/model/NetworkMigrationFailedResourceDetails.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace mgn {
namespace Model {

NetworkMigrationFailedResourceDetails::NetworkMigrationFailedResourceDetails(JsonView jsonValue) { *this = jsonValue; }

NetworkMigrationFailedResourceDetails& NetworkMigrationFailedResourceDetails::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("logicalID")) {
    m_logicalID = jsonValue.GetString("logicalID");
    m_logicalIDHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = NetworkMigrationFailedResourceStatusMapper::GetNetworkMigrationFailedResourceStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("statusReason")) {
    m_statusReason = jsonValue.GetString("statusReason");
    m_statusReasonHasBeenSet = true;
  }
  return *this;
}

JsonValue NetworkMigrationFailedResourceDetails::Jsonize() const {
  JsonValue payload;

  if (m_logicalIDHasBeenSet) {
    payload.WithString("logicalID", m_logicalID);
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", NetworkMigrationFailedResourceStatusMapper::GetNameForNetworkMigrationFailedResourceStatus(m_status));
  }

  if (m_statusReasonHasBeenSet) {
    payload.WithString("statusReason", m_statusReason);
  }

  return payload;
}

}  // namespace Model
}  // namespace mgn
}  // namespace Aws
