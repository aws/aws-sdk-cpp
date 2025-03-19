/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces/model/ModifyAccountRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::WorkSpaces::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String ModifyAccountRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_dedicatedTenancySupportHasBeenSet)
  {
   payload.WithString("DedicatedTenancySupport", DedicatedTenancySupportEnumMapper::GetNameForDedicatedTenancySupportEnum(m_dedicatedTenancySupport));
  }

  if(m_dedicatedTenancyManagementCidrRangeHasBeenSet)
  {
   payload.WithString("DedicatedTenancyManagementCidrRange", m_dedicatedTenancyManagementCidrRange);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ModifyAccountRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "WorkspacesService.ModifyAccount"));
  return headers;

}




