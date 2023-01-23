/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rekognition/model/GetContentModerationResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Rekognition::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetContentModerationResult::GetContentModerationResult() : 
    m_jobStatus(VideoJobStatus::NOT_SET)
{
}

GetContentModerationResult::GetContentModerationResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_jobStatus(VideoJobStatus::NOT_SET)
{
  *this = result;
}

GetContentModerationResult& GetContentModerationResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("JobStatus"))
  {
    m_jobStatus = VideoJobStatusMapper::GetVideoJobStatusForName(jsonValue.GetString("JobStatus"));

  }

  if(jsonValue.ValueExists("StatusMessage"))
  {
    m_statusMessage = jsonValue.GetString("StatusMessage");

  }

  if(jsonValue.ValueExists("VideoMetadata"))
  {
    m_videoMetadata = jsonValue.GetObject("VideoMetadata");

  }

  if(jsonValue.ValueExists("ModerationLabels"))
  {
    Aws::Utils::Array<JsonView> moderationLabelsJsonList = jsonValue.GetArray("ModerationLabels");
    for(unsigned moderationLabelsIndex = 0; moderationLabelsIndex < moderationLabelsJsonList.GetLength(); ++moderationLabelsIndex)
    {
      m_moderationLabels.push_back(moderationLabelsJsonList[moderationLabelsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }

  if(jsonValue.ValueExists("ModerationModelVersion"))
  {
    m_moderationModelVersion = jsonValue.GetString("ModerationModelVersion");

  }



  return *this;
}
