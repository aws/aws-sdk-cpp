/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/snowball/model/GetSnowballUsageRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Snowball::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetSnowballUsageRequest::GetSnowballUsageRequest()
{
}

Aws::String GetSnowballUsageRequest::SerializePayload() const
{
  return "{}";
}

Aws::Http::HeaderValueCollection GetSnowballUsageRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSIESnowballJobManagementService.GetSnowballUsage"));
  return headers;

}




