/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/timestream-query/model/DescribeAccountSettingsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::TimestreamQuery::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeAccountSettingsRequest::DescribeAccountSettingsRequest()
{
}

Aws::String DescribeAccountSettingsRequest::SerializePayload() const
{
  return "{}";
}

Aws::Http::HeaderValueCollection DescribeAccountSettingsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Timestream_20181101.DescribeAccountSettings"));
  return headers;

}




