/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workdocs/model/AddResourcePermissionsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::WorkDocs::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

AddResourcePermissionsRequest::AddResourcePermissionsRequest() : 
    m_authenticationTokenHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_principalsHasBeenSet(false),
    m_notificationOptionsHasBeenSet(false)
{
}

Aws::String AddResourcePermissionsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_principalsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> principalsJsonList(m_principals.size());
   for(unsigned principalsIndex = 0; principalsIndex < principalsJsonList.GetLength(); ++principalsIndex)
   {
     principalsJsonList[principalsIndex].AsObject(m_principals[principalsIndex].Jsonize());
   }
   payload.WithArray("Principals", std::move(principalsJsonList));

  }

  if(m_notificationOptionsHasBeenSet)
  {
   payload.WithObject("NotificationOptions", m_notificationOptions.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection AddResourcePermissionsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  Aws::StringStream ss;
  if(m_authenticationTokenHasBeenSet)
  {
    ss << m_authenticationToken;
    headers.emplace("authentication",  ss.str());
    ss.str("");
  }

  return headers;

}




