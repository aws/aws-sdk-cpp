/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mq/model/UpdateUserRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MQ::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateUserRequest::UpdateUserRequest() : 
    m_brokerIdHasBeenSet(false),
    m_consoleAccess(false),
    m_consoleAccessHasBeenSet(false),
    m_groupsHasBeenSet(false),
    m_passwordHasBeenSet(false),
    m_usernameHasBeenSet(false)
{
}

Aws::String UpdateUserRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_consoleAccessHasBeenSet)
  {
   payload.WithBool("consoleAccess", m_consoleAccess);

  }

  if(m_groupsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> groupsJsonList(m_groups.size());
   for(unsigned groupsIndex = 0; groupsIndex < groupsJsonList.GetLength(); ++groupsIndex)
   {
     groupsJsonList[groupsIndex].AsString(m_groups[groupsIndex]);
   }
   payload.WithArray("groups", std::move(groupsJsonList));

  }

  if(m_passwordHasBeenSet)
  {
   payload.WithString("password", m_password);

  }

  return payload.View().WriteReadable();
}




