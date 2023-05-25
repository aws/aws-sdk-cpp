/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opsworks/model/StopInstanceRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::OpsWorks::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StopInstanceRequest::StopInstanceRequest() : 
    m_instanceIdHasBeenSet(false),
    m_force(false),
    m_forceHasBeenSet(false)
{
}

Aws::String StopInstanceRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_instanceIdHasBeenSet)
  {
   payload.WithString("InstanceId", m_instanceId);

  }

  if(m_forceHasBeenSet)
  {
   payload.WithBool("Force", m_force);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection StopInstanceRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "OpsWorks_20130218.StopInstance"));
  return headers;

}




