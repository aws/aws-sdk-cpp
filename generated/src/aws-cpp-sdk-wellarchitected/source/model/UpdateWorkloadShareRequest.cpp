/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wellarchitected/model/UpdateWorkloadShareRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::WellArchitected::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateWorkloadShareRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_permissionTypeHasBeenSet)
  {
   payload.WithString("PermissionType", PermissionTypeMapper::GetNameForPermissionType(m_permissionType));
  }

  return payload.View().WriteReadable();
}




