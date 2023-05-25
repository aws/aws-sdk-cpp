/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opsworks/model/AssignVolumeRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::OpsWorks::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

AssignVolumeRequest::AssignVolumeRequest() : 
    m_volumeIdHasBeenSet(false),
    m_instanceIdHasBeenSet(false)
{
}

Aws::String AssignVolumeRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_volumeIdHasBeenSet)
  {
   payload.WithString("VolumeId", m_volumeId);

  }

  if(m_instanceIdHasBeenSet)
  {
   payload.WithString("InstanceId", m_instanceId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection AssignVolumeRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "OpsWorks_20130218.AssignVolume"));
  return headers;

}




