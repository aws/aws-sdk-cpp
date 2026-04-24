/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/s3files/model/CreateMountTargetRequest.h>

#include <utility>

using namespace Aws::S3Files::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateMountTargetRequest::SerializePayload() const {
  JsonValue payload;

  if (m_fileSystemIdHasBeenSet) {
    payload.WithString("fileSystemId", m_fileSystemId);
  }

  if (m_subnetIdHasBeenSet) {
    payload.WithString("subnetId", m_subnetId);
  }

  if (m_ipv4AddressHasBeenSet) {
    payload.WithString("ipv4Address", m_ipv4Address);
  }

  if (m_ipv6AddressHasBeenSet) {
    payload.WithString("ipv6Address", m_ipv6Address);
  }

  if (m_ipAddressTypeHasBeenSet) {
    payload.WithString("ipAddressType", IpAddressTypeMapper::GetNameForIpAddressType(m_ipAddressType));
  }

  if (m_securityGroupsHasBeenSet) {
    Aws::Utils::Array<JsonValue> securityGroupsJsonList(m_securityGroups.size());
    for (unsigned securityGroupsIndex = 0; securityGroupsIndex < securityGroupsJsonList.GetLength(); ++securityGroupsIndex) {
      securityGroupsJsonList[securityGroupsIndex].AsString(m_securityGroups[securityGroupsIndex]);
    }
    payload.WithArray("securityGroups", std::move(securityGroupsJsonList));
  }

  return payload.View().WriteReadable();
}
