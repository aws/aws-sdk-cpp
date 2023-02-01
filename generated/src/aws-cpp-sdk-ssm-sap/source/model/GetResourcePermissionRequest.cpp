/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm-sap/model/GetResourcePermissionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SsmSap::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetResourcePermissionRequest::GetResourcePermissionRequest() : 
    m_actionType(PermissionActionType::NOT_SET),
    m_actionTypeHasBeenSet(false),
    m_resourceArnHasBeenSet(false)
{
}

Aws::String GetResourcePermissionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_actionTypeHasBeenSet)
  {
   payload.WithString("ActionType", PermissionActionTypeMapper::GetNameForPermissionActionType(m_actionType));
  }

  if(m_resourceArnHasBeenSet)
  {
   payload.WithString("ResourceArn", m_resourceArn);

  }

  return payload.View().WriteReadable();
}




