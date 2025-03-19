/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mgn/model/CreateLaunchConfigurationTemplateRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::mgn::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateLaunchConfigurationTemplateRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_associatePublicIpAddressHasBeenSet)
  {
   payload.WithBool("associatePublicIpAddress", m_associatePublicIpAddress);

  }

  if(m_bootModeHasBeenSet)
  {
   payload.WithString("bootMode", BootModeMapper::GetNameForBootMode(m_bootMode));
  }

  if(m_copyPrivateIpHasBeenSet)
  {
   payload.WithBool("copyPrivateIp", m_copyPrivateIp);

  }

  if(m_copyTagsHasBeenSet)
  {
   payload.WithBool("copyTags", m_copyTags);

  }

  if(m_enableMapAutoTaggingHasBeenSet)
  {
   payload.WithBool("enableMapAutoTagging", m_enableMapAutoTagging);

  }

  if(m_largeVolumeConfHasBeenSet)
  {
   payload.WithObject("largeVolumeConf", m_largeVolumeConf.Jsonize());

  }

  if(m_launchDispositionHasBeenSet)
  {
   payload.WithString("launchDisposition", LaunchDispositionMapper::GetNameForLaunchDisposition(m_launchDisposition));
  }

  if(m_licensingHasBeenSet)
  {
   payload.WithObject("licensing", m_licensing.Jsonize());

  }

  if(m_mapAutoTaggingMpeIDHasBeenSet)
  {
   payload.WithString("mapAutoTaggingMpeID", m_mapAutoTaggingMpeID);

  }

  if(m_postLaunchActionsHasBeenSet)
  {
   payload.WithObject("postLaunchActions", m_postLaunchActions.Jsonize());

  }

  if(m_smallVolumeConfHasBeenSet)
  {
   payload.WithObject("smallVolumeConf", m_smallVolumeConf.Jsonize());

  }

  if(m_smallVolumeMaxSizeHasBeenSet)
  {
   payload.WithInt64("smallVolumeMaxSize", m_smallVolumeMaxSize);

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

  if(m_targetInstanceTypeRightSizingMethodHasBeenSet)
  {
   payload.WithString("targetInstanceTypeRightSizingMethod", TargetInstanceTypeRightSizingMethodMapper::GetNameForTargetInstanceTypeRightSizingMethod(m_targetInstanceTypeRightSizingMethod));
  }

  return payload.View().WriteReadable();
}




