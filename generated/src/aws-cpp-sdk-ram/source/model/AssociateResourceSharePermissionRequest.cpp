﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ram/model/AssociateResourceSharePermissionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::RAM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

AssociateResourceSharePermissionRequest::AssociateResourceSharePermissionRequest() : 
    m_resourceShareArnHasBeenSet(false),
    m_permissionArnHasBeenSet(false),
    m_replace(false),
    m_replaceHasBeenSet(false),
    m_clientTokenHasBeenSet(false),
    m_permissionVersion(0),
    m_permissionVersionHasBeenSet(false)
{
}

Aws::String AssociateResourceSharePermissionRequest::SerializePayload() const
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

  if(m_replaceHasBeenSet)
  {
   payload.WithBool("replace", m_replace);

  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  if(m_permissionVersionHasBeenSet)
  {
   payload.WithInteger("permissionVersion", m_permissionVersion);

  }

  return payload.View().WriteReadable();
}




