/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/migrationhub-config/model/DeleteHomeRegionControlRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MigrationHubConfig::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteHomeRegionControlRequest::DeleteHomeRegionControlRequest() : 
    m_controlIdHasBeenSet(false)
{
}

Aws::String DeleteHomeRegionControlRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_controlIdHasBeenSet)
  {
   payload.WithString("ControlId", m_controlId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteHomeRegionControlRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSMigrationHubMultiAccountService.DeleteHomeRegionControl"));
  return headers;

}




