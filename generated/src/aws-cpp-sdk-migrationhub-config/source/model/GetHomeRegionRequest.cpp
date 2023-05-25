/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/migrationhub-config/model/GetHomeRegionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MigrationHubConfig::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetHomeRegionRequest::GetHomeRegionRequest()
{
}

Aws::String GetHomeRegionRequest::SerializePayload() const
{
  return "{}";
}

Aws::Http::HeaderValueCollection GetHomeRegionRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSMigrationHubMultiAccountService.GetHomeRegion"));
  return headers;

}




