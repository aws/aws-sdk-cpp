/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/GetCommandInvocationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SSM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetCommandInvocationRequest::GetCommandInvocationRequest() : 
    m_commandIdHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_pluginNameHasBeenSet(false)
{
}

Aws::String GetCommandInvocationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_commandIdHasBeenSet)
  {
   payload.WithString("CommandId", m_commandId);

  }

  if(m_instanceIdHasBeenSet)
  {
   payload.WithString("InstanceId", m_instanceId);

  }

  if(m_pluginNameHasBeenSet)
  {
   payload.WithString("PluginName", m_pluginName);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetCommandInvocationRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonSSM.GetCommandInvocation"));
  return headers;

}




