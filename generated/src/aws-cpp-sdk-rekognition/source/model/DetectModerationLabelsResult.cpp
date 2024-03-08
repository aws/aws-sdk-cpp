/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rekognition/model/DetectModerationLabelsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Rekognition::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DetectModerationLabelsResult::DetectModerationLabelsResult()
{
}

DetectModerationLabelsResult::DetectModerationLabelsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DetectModerationLabelsResult& DetectModerationLabelsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ModerationLabels"))
  {
    Aws::Utils::Array<JsonView> moderationLabelsJsonList = jsonValue.GetArray("ModerationLabels");
    for(unsigned moderationLabelsIndex = 0; moderationLabelsIndex < moderationLabelsJsonList.GetLength(); ++moderationLabelsIndex)
    {
      m_moderationLabels.push_back(moderationLabelsJsonList[moderationLabelsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("ModerationModelVersion"))
  {
    m_moderationModelVersion = jsonValue.GetString("ModerationModelVersion");

  }

  if(jsonValue.ValueExists("HumanLoopActivationOutput"))
  {
    m_humanLoopActivationOutput = jsonValue.GetObject("HumanLoopActivationOutput");

  }

  if(jsonValue.ValueExists("ProjectVersion"))
  {
    m_projectVersion = jsonValue.GetString("ProjectVersion");

  }

  if(jsonValue.ValueExists("ContentTypes"))
  {
    Aws::Utils::Array<JsonView> contentTypesJsonList = jsonValue.GetArray("ContentTypes");
    for(unsigned contentTypesIndex = 0; contentTypesIndex < contentTypesJsonList.GetLength(); ++contentTypesIndex)
    {
      m_contentTypes.push_back(contentTypesJsonList[contentTypesIndex].AsObject());
    }
  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
