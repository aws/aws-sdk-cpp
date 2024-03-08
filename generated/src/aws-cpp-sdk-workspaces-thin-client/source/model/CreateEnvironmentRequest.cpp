/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces-thin-client/model/CreateEnvironmentRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::WorkSpacesThinClient::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateEnvironmentRequest::CreateEnvironmentRequest() : 
    m_nameHasBeenSet(false),
    m_desktopArnHasBeenSet(false),
    m_desktopEndpointHasBeenSet(false),
    m_softwareSetUpdateSchedule(SoftwareSetUpdateSchedule::NOT_SET),
    m_softwareSetUpdateScheduleHasBeenSet(false),
    m_maintenanceWindowHasBeenSet(false),
    m_softwareSetUpdateMode(SoftwareSetUpdateMode::NOT_SET),
    m_softwareSetUpdateModeHasBeenSet(false),
    m_desiredSoftwareSetIdHasBeenSet(false),
    m_kmsKeyArnHasBeenSet(false),
    m_clientToken(Aws::Utils::UUID::PseudoRandomUUID()),
    m_clientTokenHasBeenSet(true),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateEnvironmentRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_desktopArnHasBeenSet)
  {
   payload.WithString("desktopArn", m_desktopArn);

  }

  if(m_desktopEndpointHasBeenSet)
  {
   payload.WithString("desktopEndpoint", m_desktopEndpoint);

  }

  if(m_softwareSetUpdateScheduleHasBeenSet)
  {
   payload.WithString("softwareSetUpdateSchedule", SoftwareSetUpdateScheduleMapper::GetNameForSoftwareSetUpdateSchedule(m_softwareSetUpdateSchedule));
  }

  if(m_maintenanceWindowHasBeenSet)
  {
   payload.WithObject("maintenanceWindow", m_maintenanceWindow.Jsonize());

  }

  if(m_softwareSetUpdateModeHasBeenSet)
  {
   payload.WithString("softwareSetUpdateMode", SoftwareSetUpdateModeMapper::GetNameForSoftwareSetUpdateMode(m_softwareSetUpdateMode));
  }

  if(m_desiredSoftwareSetIdHasBeenSet)
  {
   payload.WithString("desiredSoftwareSetId", m_desiredSoftwareSetId);

  }

  if(m_kmsKeyArnHasBeenSet)
  {
   payload.WithString("kmsKeyArn", m_kmsKeyArn);

  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("tags", std::move(tagsJsonMap));

  }

  return payload.View().WriteReadable();
}




