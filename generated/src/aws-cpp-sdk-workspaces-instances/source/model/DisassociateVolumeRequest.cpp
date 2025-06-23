/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces-instances/model/DisassociateVolumeRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::WorkspacesInstances::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String DisassociateVolumeRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_workspaceInstanceIdHasBeenSet)
  {
   payload.WithString("WorkspaceInstanceId", m_workspaceInstanceId);

  }

  if(m_volumeIdHasBeenSet)
  {
   payload.WithString("VolumeId", m_volumeId);

  }

  if(m_deviceHasBeenSet)
  {
   payload.WithString("Device", m_device);

  }

  if(m_disassociateModeHasBeenSet)
  {
   payload.WithString("DisassociateMode", DisassociateModeEnumMapper::GetNameForDisassociateModeEnum(m_disassociateMode));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DisassociateVolumeRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "EUCMIFrontendAPIService.DisassociateVolume"));
  return headers;

}




