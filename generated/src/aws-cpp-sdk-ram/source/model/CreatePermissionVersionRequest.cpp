/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ram/model/CreatePermissionVersionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::RAM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreatePermissionVersionRequest::CreatePermissionVersionRequest() : 
    m_permissionArnHasBeenSet(false),
    m_policyTemplateHasBeenSet(false),
    m_clientTokenHasBeenSet(false)
{
}

Aws::String CreatePermissionVersionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_permissionArnHasBeenSet)
  {
   payload.WithString("permissionArn", m_permissionArn);

  }

  if(m_policyTemplateHasBeenSet)
  {
   payload.WithString("policyTemplate", m_policyTemplate);

  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  return payload.View().WriteReadable();
}




