/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/model/GetWebExperienceResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::QBusiness::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetWebExperienceResult::GetWebExperienceResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetWebExperienceResult& GetWebExperienceResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("applicationId"))
  {
    m_applicationId = jsonValue.GetString("applicationId");
    m_applicationIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("webExperienceId"))
  {
    m_webExperienceId = jsonValue.GetString("webExperienceId");
    m_webExperienceIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("webExperienceArn"))
  {
    m_webExperienceArn = jsonValue.GetString("webExperienceArn");
    m_webExperienceArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("defaultEndpoint"))
  {
    m_defaultEndpoint = jsonValue.GetString("defaultEndpoint");
    m_defaultEndpointHasBeenSet = true;
  }
  if(jsonValue.ValueExists("status"))
  {
    m_status = WebExperienceStatusMapper::GetWebExperienceStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetDouble("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("updatedAt"))
  {
    m_updatedAt = jsonValue.GetDouble("updatedAt");
    m_updatedAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("title"))
  {
    m_title = jsonValue.GetString("title");
    m_titleHasBeenSet = true;
  }
  if(jsonValue.ValueExists("subtitle"))
  {
    m_subtitle = jsonValue.GetString("subtitle");
    m_subtitleHasBeenSet = true;
  }
  if(jsonValue.ValueExists("welcomeMessage"))
  {
    m_welcomeMessage = jsonValue.GetString("welcomeMessage");
    m_welcomeMessageHasBeenSet = true;
  }
  if(jsonValue.ValueExists("samplePromptsControlMode"))
  {
    m_samplePromptsControlMode = WebExperienceSamplePromptsControlModeMapper::GetWebExperienceSamplePromptsControlModeForName(jsonValue.GetString("samplePromptsControlMode"));
    m_samplePromptsControlModeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("origins"))
  {
    Aws::Utils::Array<JsonView> originsJsonList = jsonValue.GetArray("origins");
    for(unsigned originsIndex = 0; originsIndex < originsJsonList.GetLength(); ++originsIndex)
    {
      m_origins.push_back(originsJsonList[originsIndex].AsString());
    }
    m_originsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("roleArn"))
  {
    m_roleArn = jsonValue.GetString("roleArn");
    m_roleArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("identityProviderConfiguration"))
  {
    m_identityProviderConfiguration = jsonValue.GetObject("identityProviderConfiguration");
    m_identityProviderConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("error"))
  {
    m_error = jsonValue.GetObject("error");
    m_errorHasBeenSet = true;
  }
  if(jsonValue.ValueExists("browserExtensionConfiguration"))
  {
    m_browserExtensionConfiguration = jsonValue.GetObject("browserExtensionConfiguration");
    m_browserExtensionConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("customizationConfiguration"))
  {
    m_customizationConfiguration = jsonValue.GetObject("customizationConfiguration");
    m_customizationConfigurationHasBeenSet = true;
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
