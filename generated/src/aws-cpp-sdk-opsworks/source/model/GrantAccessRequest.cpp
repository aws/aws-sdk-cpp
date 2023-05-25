/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opsworks/model/GrantAccessRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::OpsWorks::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GrantAccessRequest::GrantAccessRequest() : 
    m_instanceIdHasBeenSet(false),
    m_validForInMinutes(0),
    m_validForInMinutesHasBeenSet(false)
{
}

Aws::String GrantAccessRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_instanceIdHasBeenSet)
  {
   payload.WithString("InstanceId", m_instanceId);

  }

  if(m_validForInMinutesHasBeenSet)
  {
   payload.WithInteger("ValidForInMinutes", m_validForInMinutes);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GrantAccessRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "OpsWorks_20130218.GrantAccess"));
  return headers;

}




