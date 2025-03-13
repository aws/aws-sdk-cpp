/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces-thin-client/model/UpdateDeviceRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::WorkSpacesThinClient::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateDeviceRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_desiredSoftwareSetIdHasBeenSet)
  {
   payload.WithString("desiredSoftwareSetId", m_desiredSoftwareSetId);

  }

  if(m_softwareSetUpdateScheduleHasBeenSet)
  {
   payload.WithString("softwareSetUpdateSchedule", SoftwareSetUpdateScheduleMapper::GetNameForSoftwareSetUpdateSchedule(m_softwareSetUpdateSchedule));
  }

  return payload.View().WriteReadable();
}




