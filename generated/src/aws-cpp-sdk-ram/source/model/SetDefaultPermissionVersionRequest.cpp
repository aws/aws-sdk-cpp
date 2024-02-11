/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ram/model/SetDefaultPermissionVersionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::RAM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

SetDefaultPermissionVersionRequest::SetDefaultPermissionVersionRequest() : 
    m_permissionArnHasBeenSet(false),
    m_permissionVersion(0),
    m_permissionVersionHasBeenSet(false),
    m_clientTokenHasBeenSet(false)
{
}

Aws::String SetDefaultPermissionVersionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_permissionArnHasBeenSet)
  {
   payload.WithString("permissionArn", m_permissionArn);

  }

  if(m_permissionVersionHasBeenSet)
  {
   payload.WithInteger("permissionVersion", m_permissionVersion);

  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  return payload.View().WriteReadable();
}




