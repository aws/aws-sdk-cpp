/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mgn/model/UpdateLaunchConfigurationTemplateResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::mgn::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

UpdateLaunchConfigurationTemplateResult::UpdateLaunchConfigurationTemplateResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

UpdateLaunchConfigurationTemplateResult& UpdateLaunchConfigurationTemplateResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
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

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }


  return *this;
}
