/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mgn/model/LaunchConfigurationTemplate.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace mgn
{
namespace Model
{

LaunchConfigurationTemplate::LaunchConfigurationTemplate() : 
    m_arnHasBeenSet(false),
    m_associatePublicIpAddress(false),
    m_associatePublicIpAddressHasBeenSet(false),
    m_bootMode(BootMode::NOT_SET),
    m_bootModeHasBeenSet(false),
    m_copyPrivateIp(false),
    m_copyPrivateIpHasBeenSet(false),
    m_copyTags(false),
    m_copyTagsHasBeenSet(false),
    m_ec2LaunchTemplateIDHasBeenSet(false),
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
    m_tagsHasBeenSet(false),
    m_targetInstanceTypeRightSizingMethod(TargetInstanceTypeRightSizingMethod::NOT_SET),
    m_targetInstanceTypeRightSizingMethodHasBeenSet(false)
{
}

LaunchConfigurationTemplate::LaunchConfigurationTemplate(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_associatePublicIpAddress(false),
    m_associatePublicIpAddressHasBeenSet(false),
    m_bootMode(BootMode::NOT_SET),
    m_bootModeHasBeenSet(false),
    m_copyPrivateIp(false),
    m_copyPrivateIpHasBeenSet(false),
    m_copyTags(false),
    m_copyTagsHasBeenSet(false),
    m_ec2LaunchTemplateIDHasBeenSet(false),
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
    m_tagsHasBeenSet(false),
    m_targetInstanceTypeRightSizingMethod(TargetInstanceTypeRightSizingMethod::NOT_SET),
    m_targetInstanceTypeRightSizingMethodHasBeenSet(false)
{
  *this = jsonValue;
}

LaunchConfigurationTemplate& LaunchConfigurationTemplate::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("associatePublicIpAddress"))
  {
    m_associatePublicIpAddress = jsonValue.GetBool("associatePublicIpAddress");

    m_associatePublicIpAddressHasBeenSet = true;
  }

  if(jsonValue.ValueExists("bootMode"))
  {
    m_bootMode = BootModeMapper::GetBootModeForName(jsonValue.GetString("bootMode"));

    m_bootModeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("copyPrivateIp"))
  {
    m_copyPrivateIp = jsonValue.GetBool("copyPrivateIp");

    m_copyPrivateIpHasBeenSet = true;
  }

  if(jsonValue.ValueExists("copyTags"))
  {
    m_copyTags = jsonValue.GetBool("copyTags");

    m_copyTagsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ec2LaunchTemplateID"))
  {
    m_ec2LaunchTemplateID = jsonValue.GetString("ec2LaunchTemplateID");

    m_ec2LaunchTemplateIDHasBeenSet = true;
  }

  if(jsonValue.ValueExists("enableMapAutoTagging"))
  {
    m_enableMapAutoTagging = jsonValue.GetBool("enableMapAutoTagging");

    m_enableMapAutoTaggingHasBeenSet = true;
  }

  if(jsonValue.ValueExists("largeVolumeConf"))
  {
    m_largeVolumeConf = jsonValue.GetObject("largeVolumeConf");

    m_largeVolumeConfHasBeenSet = true;
  }

  if(jsonValue.ValueExists("launchConfigurationTemplateID"))
  {
    m_launchConfigurationTemplateID = jsonValue.GetString("launchConfigurationTemplateID");

    m_launchConfigurationTemplateIDHasBeenSet = true;
  }

  if(jsonValue.ValueExists("launchDisposition"))
  {
    m_launchDisposition = LaunchDispositionMapper::GetLaunchDispositionForName(jsonValue.GetString("launchDisposition"));

    m_launchDispositionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("licensing"))
  {
    m_licensing = jsonValue.GetObject("licensing");

    m_licensingHasBeenSet = true;
  }

  if(jsonValue.ValueExists("mapAutoTaggingMpeID"))
  {
    m_mapAutoTaggingMpeID = jsonValue.GetString("mapAutoTaggingMpeID");

    m_mapAutoTaggingMpeIDHasBeenSet = true;
  }

  if(jsonValue.ValueExists("postLaunchActions"))
  {
    m_postLaunchActions = jsonValue.GetObject("postLaunchActions");

    m_postLaunchActionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("smallVolumeConf"))
  {
    m_smallVolumeConf = jsonValue.GetObject("smallVolumeConf");

    m_smallVolumeConfHasBeenSet = true;
  }

  if(jsonValue.ValueExists("smallVolumeMaxSize"))
  {
    m_smallVolumeMaxSize = jsonValue.GetInt64("smallVolumeMaxSize");

    m_smallVolumeMaxSizeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("targetInstanceTypeRightSizingMethod"))
  {
    m_targetInstanceTypeRightSizingMethod = TargetInstanceTypeRightSizingMethodMapper::GetTargetInstanceTypeRightSizingMethodForName(jsonValue.GetString("targetInstanceTypeRightSizingMethod"));

    m_targetInstanceTypeRightSizingMethodHasBeenSet = true;
  }

  return *this;
}

JsonValue LaunchConfigurationTemplate::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

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

  if(m_ec2LaunchTemplateIDHasBeenSet)
  {
   payload.WithString("ec2LaunchTemplateID", m_ec2LaunchTemplateID);

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

  return payload;
}

} // namespace Model
} // namespace mgn
} // namespace Aws
