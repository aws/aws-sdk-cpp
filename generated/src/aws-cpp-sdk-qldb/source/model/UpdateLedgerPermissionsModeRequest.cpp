/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qldb/model/UpdateLedgerPermissionsModeRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::QLDB::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateLedgerPermissionsModeRequest::UpdateLedgerPermissionsModeRequest() : 
    m_nameHasBeenSet(false),
    m_permissionsMode(PermissionsMode::NOT_SET),
    m_permissionsModeHasBeenSet(false)
{
}

Aws::String UpdateLedgerPermissionsModeRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_permissionsModeHasBeenSet)
  {
   payload.WithString("PermissionsMode", PermissionsModeMapper::GetNameForPermissionsMode(m_permissionsMode));
  }

  return payload.View().WriteReadable();
}




