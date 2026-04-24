/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/s3files/model/ListMountTargetsDescription.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace S3Files {
namespace Model {

ListMountTargetsDescription::ListMountTargetsDescription(JsonView jsonValue) { *this = jsonValue; }

ListMountTargetsDescription& ListMountTargetsDescription::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("availabilityZoneId")) {
    m_availabilityZoneId = jsonValue.GetString("availabilityZoneId");
    m_availabilityZoneIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("fileSystemId")) {
    m_fileSystemId = jsonValue.GetString("fileSystemId");
    m_fileSystemIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ipv4Address")) {
    m_ipv4Address = jsonValue.GetString("ipv4Address");
    m_ipv4AddressHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ipv6Address")) {
    m_ipv6Address = jsonValue.GetString("ipv6Address");
    m_ipv6AddressHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = LifeCycleStateMapper::GetLifeCycleStateForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("statusMessage")) {
    m_statusMessage = jsonValue.GetString("statusMessage");
    m_statusMessageHasBeenSet = true;
  }
  if (jsonValue.ValueExists("mountTargetId")) {
    m_mountTargetId = jsonValue.GetString("mountTargetId");
    m_mountTargetIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("networkInterfaceId")) {
    m_networkInterfaceId = jsonValue.GetString("networkInterfaceId");
    m_networkInterfaceIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ownerId")) {
    m_ownerId = jsonValue.GetString("ownerId");
    m_ownerIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("subnetId")) {
    m_subnetId = jsonValue.GetString("subnetId");
    m_subnetIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("vpcId")) {
    m_vpcId = jsonValue.GetString("vpcId");
    m_vpcIdHasBeenSet = true;
  }
  return *this;
}

JsonValue ListMountTargetsDescription::Jsonize() const {
  JsonValue payload;

  if (m_availabilityZoneIdHasBeenSet) {
    payload.WithString("availabilityZoneId", m_availabilityZoneId);
  }

  if (m_fileSystemIdHasBeenSet) {
    payload.WithString("fileSystemId", m_fileSystemId);
  }

  if (m_ipv4AddressHasBeenSet) {
    payload.WithString("ipv4Address", m_ipv4Address);
  }

  if (m_ipv6AddressHasBeenSet) {
    payload.WithString("ipv6Address", m_ipv6Address);
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", LifeCycleStateMapper::GetNameForLifeCycleState(m_status));
  }

  if (m_statusMessageHasBeenSet) {
    payload.WithString("statusMessage", m_statusMessage);
  }

  if (m_mountTargetIdHasBeenSet) {
    payload.WithString("mountTargetId", m_mountTargetId);
  }

  if (m_networkInterfaceIdHasBeenSet) {
    payload.WithString("networkInterfaceId", m_networkInterfaceId);
  }

  if (m_ownerIdHasBeenSet) {
    payload.WithString("ownerId", m_ownerId);
  }

  if (m_subnetIdHasBeenSet) {
    payload.WithString("subnetId", m_subnetId);
  }

  if (m_vpcIdHasBeenSet) {
    payload.WithString("vpcId", m_vpcId);
  }

  return payload;
}

}  // namespace Model
}  // namespace S3Files
}  // namespace Aws
