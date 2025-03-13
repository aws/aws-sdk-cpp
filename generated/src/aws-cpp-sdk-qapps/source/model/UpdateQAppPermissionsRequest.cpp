/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qapps/model/UpdateQAppPermissionsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::QApps::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateQAppPermissionsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_appIdHasBeenSet)
  {
   payload.WithString("appId", m_appId);

  }

  if(m_grantPermissionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> grantPermissionsJsonList(m_grantPermissions.size());
   for(unsigned grantPermissionsIndex = 0; grantPermissionsIndex < grantPermissionsJsonList.GetLength(); ++grantPermissionsIndex)
   {
     grantPermissionsJsonList[grantPermissionsIndex].AsObject(m_grantPermissions[grantPermissionsIndex].Jsonize());
   }
   payload.WithArray("grantPermissions", std::move(grantPermissionsJsonList));

  }

  if(m_revokePermissionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> revokePermissionsJsonList(m_revokePermissions.size());
   for(unsigned revokePermissionsIndex = 0; revokePermissionsIndex < revokePermissionsJsonList.GetLength(); ++revokePermissionsIndex)
   {
     revokePermissionsJsonList[revokePermissionsIndex].AsObject(m_revokePermissions[revokePermissionsIndex].Jsonize());
   }
   payload.WithArray("revokePermissions", std::move(revokePermissionsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateQAppPermissionsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  Aws::StringStream ss;
  if(m_instanceIdHasBeenSet)
  {
    ss << m_instanceId;
    headers.emplace("instance-id",  ss.str());
    ss.str("");
  }

  return headers;

}




