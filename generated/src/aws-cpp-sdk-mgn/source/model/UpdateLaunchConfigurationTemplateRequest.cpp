/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mgn/model/UpdateLaunchConfigurationTemplateRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::mgn::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateLaunchConfigurationTemplateRequest::UpdateLaunchConfigurationTemplateRequest() : 
    m_associatePublicIpAddress(false),
    m_associatePublicIpAddressHasBeenSet(false),
    m_bootMode(BootMode::NOT_SET),
    m_bootModeHasBeenSet(false),
    m_copyPrivateIp(false),
    m_copyPrivateIpHasBeenSet(false),
    m_copyTags(false),
    m_copyTagsHasBeenSet(false),
    m_enableMapAutoTagging(false),
    m_enableMapAutoTaggingHasBeenSet(false),
    m_largeVolumeConfHasBeenSet(false),
    m_launchConfigurationTemplateIDHasBeenSet(false),
    m_launchDisposition(LaunchDisposition::NOT_SET),
    m_launchDispositionHasBeenSet(false),
    m_licensingHasBeenSet(false),
    m_mapAutoTaggingMpeIDHasBeenSet(false),
    m_postLaunchActionsHasBeenSet(false),
    m_smallVolumeConfHasBeenSet(false),
    m_smallVolumeMaxSize(0),
    m_smallVolumeMaxSizeHasBeenSet(false),
    m_targetInstanceTypeRightSizingMethod(TargetInstanceTypeRightSizingMethod::NOT_SET),
    m_targetInstanceTypeRightSizingMethodHasBeenSet(false)
{
}

Aws::String UpdateLaunchConfigurationTemplateRequest::SerializePayload() const
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

  if(m_launchConfigurationTemplateIDHasBeenSet)
  {
   payload.WithString("launchConfigurationTemplateID", m_launchConfigurationTemplateID);

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

  if(m_targetInstanceTypeRightSizingMethodHasBeenSet)
  {
   payload.WithString("targetInstanceTypeRightSizingMethod", TargetInstanceTypeRightSizingMethodMapper::GetNameForTargetInstanceTypeRightSizingMethod(m_targetInstanceTypeRightSizingMethod));
  }

  return payload.View().WriteReadable();
}




