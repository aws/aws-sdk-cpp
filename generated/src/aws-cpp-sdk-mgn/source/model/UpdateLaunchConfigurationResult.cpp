/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mgn/model/UpdateLaunchConfigurationResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::mgn::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

UpdateLaunchConfigurationResult::UpdateLaunchConfigurationResult() : 
    m_bootMode(BootMode::NOT_SET),
    m_copyPrivateIp(false),
    m_copyTags(false),
    m_enableMapAutoTagging(false),
    m_launchDisposition(LaunchDisposition::NOT_SET),
    m_targetInstanceTypeRightSizingMethod(TargetInstanceTypeRightSizingMethod::NOT_SET)
{
}

UpdateLaunchConfigurationResult::UpdateLaunchConfigurationResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_bootMode(BootMode::NOT_SET),
    m_copyPrivateIp(false),
    m_copyTags(false),
    m_enableMapAutoTagging(false),
    m_launchDisposition(LaunchDisposition::NOT_SET),
    m_targetInstanceTypeRightSizingMethod(TargetInstanceTypeRightSizingMethod::NOT_SET)
{
  *this = result;
}

UpdateLaunchConfigurationResult& UpdateLaunchConfigurationResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("bootMode"))
  {
    m_bootMode = BootModeMapper::GetBootModeForName(jsonValue.GetString("bootMode"));

  }

  if(jsonValue.ValueExists("copyPrivateIp"))
  {
    m_copyPrivateIp = jsonValue.GetBool("copyPrivateIp");

  }

  if(jsonValue.ValueExists("copyTags"))
  {
    m_copyTags = jsonValue.GetBool("copyTags");

  }

  if(jsonValue.ValueExists("ec2LaunchTemplateID"))
  {
    m_ec2LaunchTemplateID = jsonValue.GetString("ec2LaunchTemplateID");

  }

  if(jsonValue.ValueExists("enableMapAutoTagging"))
  {
    m_enableMapAutoTagging = jsonValue.GetBool("enableMapAutoTagging");

  }

  if(jsonValue.ValueExists("launchDisposition"))
  {
    m_launchDisposition = LaunchDispositionMapper::GetLaunchDispositionForName(jsonValue.GetString("launchDisposition"));

  }

  if(jsonValue.ValueExists("licensing"))
  {
    m_licensing = jsonValue.GetObject("licensing");

  }

  if(jsonValue.ValueExists("mapAutoTaggingMpeID"))
  {
    m_mapAutoTaggingMpeID = jsonValue.GetString("mapAutoTaggingMpeID");

  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

  }

  if(jsonValue.ValueExists("postLaunchActions"))
  {
    m_postLaunchActions = jsonValue.GetObject("postLaunchActions");

  }

  if(jsonValue.ValueExists("sourceServerID"))
  {
    m_sourceServerID = jsonValue.GetString("sourceServerID");

  }

  if(jsonValue.ValueExists("targetInstanceTypeRightSizingMethod"))
  {
    m_targetInstanceTypeRightSizingMethod = TargetInstanceTypeRightSizingMethodMapper::GetTargetInstanceTypeRightSizingMethodForName(jsonValue.GetString("targetInstanceTypeRightSizingMethod"));

  }



  return *this;
}
