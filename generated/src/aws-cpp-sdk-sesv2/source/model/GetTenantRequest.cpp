/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sesv2/model/GetTenantRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SESV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String GetTenantRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_tenantNameHasBeenSet)
  {
   payload.WithString("TenantName", m_tenantName);

  }

  return payload.View().WriteReadable();
}




