/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ram/model/ReplacePermissionAssociationsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::RAM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ReplacePermissionAssociationsRequest::ReplacePermissionAssociationsRequest() : 
    m_fromPermissionArnHasBeenSet(false),
    m_fromPermissionVersion(0),
    m_fromPermissionVersionHasBeenSet(false),
    m_toPermissionArnHasBeenSet(false),
    m_clientTokenHasBeenSet(false)
{
}

Aws::String ReplacePermissionAssociationsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_fromPermissionArnHasBeenSet)
  {
   payload.WithString("fromPermissionArn", m_fromPermissionArn);

  }

  if(m_fromPermissionVersionHasBeenSet)
  {
   payload.WithInteger("fromPermissionVersion", m_fromPermissionVersion);

  }

  if(m_toPermissionArnHasBeenSet)
  {
   payload.WithString("toPermissionArn", m_toPermissionArn);

  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  return payload.View().WriteReadable();
}




