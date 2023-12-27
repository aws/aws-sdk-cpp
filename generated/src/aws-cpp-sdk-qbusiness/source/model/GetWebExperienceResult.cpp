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

GetWebExperienceResult::GetWebExperienceResult() : 
    m_samplePromptsControlMode(WebExperienceSamplePromptsControlMode::NOT_SET),
    m_status(WebExperienceStatus::NOT_SET)
{
}

GetWebExperienceResult::GetWebExperienceResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_samplePromptsControlMode(WebExperienceSamplePromptsControlMode::NOT_SET),
    m_status(WebExperienceStatus::NOT_SET)
{
  *this = result;
}

GetWebExperienceResult& GetWebExperienceResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("applicationId"))
  {
    m_applicationId = jsonValue.GetString("applicationId");

  }

  if(jsonValue.ValueExists("authenticationConfiguration"))
  {
    m_authenticationConfiguration = jsonValue.GetObject("authenticationConfiguration");

  }

  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetDouble("createdAt");

  }

  if(jsonValue.ValueExists("defaultEndpoint"))
  {
    m_defaultEndpoint = jsonValue.GetString("defaultEndpoint");

  }

  if(jsonValue.ValueExists("error"))
  {
    m_error = jsonValue.GetObject("error");

  }

  if(jsonValue.ValueExists("samplePromptsControlMode"))
  {
    m_samplePromptsControlMode = WebExperienceSamplePromptsControlModeMapper::GetWebExperienceSamplePromptsControlModeForName(jsonValue.GetString("samplePromptsControlMode"));

  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = WebExperienceStatusMapper::GetWebExperienceStatusForName(jsonValue.GetString("status"));

  }

  if(jsonValue.ValueExists("subtitle"))
  {
    m_subtitle = jsonValue.GetString("subtitle");

  }

  if(jsonValue.ValueExists("title"))
  {
    m_title = jsonValue.GetString("title");

  }

  if(jsonValue.ValueExists("updatedAt"))
  {
    m_updatedAt = jsonValue.GetDouble("updatedAt");

  }

  if(jsonValue.ValueExists("webExperienceArn"))
  {
    m_webExperienceArn = jsonValue.GetString("webExperienceArn");

  }

  if(jsonValue.ValueExists("webExperienceId"))
  {
    m_webExperienceId = jsonValue.GetString("webExperienceId");

  }

  if(jsonValue.ValueExists("welcomeMessage"))
  {
    m_welcomeMessage = jsonValue.GetString("welcomeMessage");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
