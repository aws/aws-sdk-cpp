/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opsworks/model/UpdateVolumeRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::OpsWorks::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateVolumeRequest::UpdateVolumeRequest() : 
    m_volumeIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_mountPointHasBeenSet(false)
{
}

Aws::String UpdateVolumeRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_volumeIdHasBeenSet)
  {
   payload.WithString("VolumeId", m_volumeId);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_mountPointHasBeenSet)
  {
   payload.WithString("MountPoint", m_mountPoint);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateVolumeRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "OpsWorks_20130218.UpdateVolume"));
  return headers;

}




