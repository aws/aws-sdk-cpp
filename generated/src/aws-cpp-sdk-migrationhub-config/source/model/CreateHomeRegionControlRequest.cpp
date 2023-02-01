/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/migrationhub-config/model/CreateHomeRegionControlRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MigrationHubConfig::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateHomeRegionControlRequest::CreateHomeRegionControlRequest() : 
    m_homeRegionHasBeenSet(false),
    m_targetHasBeenSet(false),
    m_dryRun(false),
    m_dryRunHasBeenSet(false)
{
}

Aws::String CreateHomeRegionControlRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_homeRegionHasBeenSet)
  {
   payload.WithString("HomeRegion", m_homeRegion);

  }

  if(m_targetHasBeenSet)
  {
   payload.WithObject("Target", m_target.Jsonize());

  }

  if(m_dryRunHasBeenSet)
  {
   payload.WithBool("DryRun", m_dryRun);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateHomeRegionControlRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSMigrationHubMultiAccountService.CreateHomeRegionControl"));
  return headers;

}




