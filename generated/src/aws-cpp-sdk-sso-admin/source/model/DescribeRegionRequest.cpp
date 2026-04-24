/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sso-admin/model/DescribeRegionRequest.h>

#include <utility>

using namespace Aws::SSOAdmin::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String DescribeRegionRequest::SerializePayload() const {
  JsonValue payload;

  if (m_instanceArnHasBeenSet) {
    payload.WithString("InstanceArn", m_instanceArn);
  }

  if (m_regionNameHasBeenSet) {
    payload.WithString("RegionName", m_regionName);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeRegionRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SWBExternalService.DescribeRegion"));
  return headers;
}
