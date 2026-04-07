/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/s3files/model/UpdateMountTargetRequest.h>

#include <utility>

using namespace Aws::S3Files::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateMountTargetRequest::SerializePayload() const {
  JsonValue payload;

  if (m_securityGroupsHasBeenSet) {
    Aws::Utils::Array<JsonValue> securityGroupsJsonList(m_securityGroups.size());
    for (unsigned securityGroupsIndex = 0; securityGroupsIndex < securityGroupsJsonList.GetLength(); ++securityGroupsIndex) {
      securityGroupsJsonList[securityGroupsIndex].AsString(m_securityGroups[securityGroupsIndex]);
    }
    payload.WithArray("securityGroups", std::move(securityGroupsJsonList));
  }

  return payload.View().WriteReadable();
}
