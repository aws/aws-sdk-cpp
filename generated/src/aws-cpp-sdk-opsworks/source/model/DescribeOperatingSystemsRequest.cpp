/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opsworks/model/DescribeOperatingSystemsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::OpsWorks::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeOperatingSystemsRequest::DescribeOperatingSystemsRequest()
{
}

Aws::String DescribeOperatingSystemsRequest::SerializePayload() const
{
  return "{}";
}

Aws::Http::HeaderValueCollection DescribeOperatingSystemsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "OpsWorks_20130218.DescribeOperatingSystems"));
  return headers;

}




