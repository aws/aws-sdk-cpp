/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resourcegroupstaggingapi/model/DescribeReportCreationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ResourceGroupsTaggingAPI::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeReportCreationRequest::DescribeReportCreationRequest()
{
}

Aws::String DescribeReportCreationRequest::SerializePayload() const
{
  return "{}";
}

Aws::Http::HeaderValueCollection DescribeReportCreationRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "ResourceGroupsTaggingAPI_20170126.DescribeReportCreation"));
  return headers;

}




