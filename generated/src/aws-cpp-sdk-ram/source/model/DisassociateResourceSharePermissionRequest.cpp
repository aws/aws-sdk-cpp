/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ram/model/DisassociateResourceSharePermissionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::RAM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DisassociateResourceSharePermissionRequest::DisassociateResourceSharePermissionRequest() : 
    m_resourceShareArnHasBeenSet(false),
    m_permissionArnHasBeenSet(false),
    m_clientTokenHasBeenSet(false)
{
}

Aws::String DisassociateResourceSharePermissionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_resourceShareArnHasBeenSet)
  {
   payload.WithString("resourceShareArn", m_resourceShareArn);

  }

  if(m_permissionArnHasBeenSet)
  {
   payload.WithString("permissionArn", m_permissionArn);

  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  return payload.View().WriteReadable();
}




