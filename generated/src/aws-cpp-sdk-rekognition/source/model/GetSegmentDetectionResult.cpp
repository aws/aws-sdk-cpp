/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rekognition/model/GetSegmentDetectionResult.h>
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

GetSegmentDetectionResult::GetSegmentDetectionResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetSegmentDetectionResult& GetSegmentDetectionResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("JobStatus"))
  {
    m_jobStatus = VideoJobStatusMapper::GetVideoJobStatusForName(jsonValue.GetString("JobStatus"));
    m_jobStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("StatusMessage"))
  {
    m_statusMessage = jsonValue.GetString("StatusMessage");
    m_statusMessageHasBeenSet = true;
  }
  if(jsonValue.ValueExists("VideoMetadata"))
  {
    Aws::Utils::Array<JsonView> videoMetadataJsonList = jsonValue.GetArray("VideoMetadata");
    for(unsigned videoMetadataIndex = 0; videoMetadataIndex < videoMetadataJsonList.GetLength(); ++videoMetadataIndex)
    {
      m_videoMetadata.push_back(videoMetadataJsonList[videoMetadataIndex].AsObject());
    }
    m_videoMetadataHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AudioMetadata"))
  {
    Aws::Utils::Array<JsonView> audioMetadataJsonList = jsonValue.GetArray("AudioMetadata");
    for(unsigned audioMetadataIndex = 0; audioMetadataIndex < audioMetadataJsonList.GetLength(); ++audioMetadataIndex)
    {
      m_audioMetadata.push_back(audioMetadataJsonList[audioMetadataIndex].AsObject());
    }
    m_audioMetadataHasBeenSet = true;
  }
  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");
    m_nextTokenHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Segments"))
  {
    Aws::Utils::Array<JsonView> segmentsJsonList = jsonValue.GetArray("Segments");
    for(unsigned segmentsIndex = 0; segmentsIndex < segmentsJsonList.GetLength(); ++segmentsIndex)
    {
      m_segments.push_back(segmentsJsonList[segmentsIndex].AsObject());
    }
    m_segmentsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SelectedSegmentTypes"))
  {
    Aws::Utils::Array<JsonView> selectedSegmentTypesJsonList = jsonValue.GetArray("SelectedSegmentTypes");
    for(unsigned selectedSegmentTypesIndex = 0; selectedSegmentTypesIndex < selectedSegmentTypesJsonList.GetLength(); ++selectedSegmentTypesIndex)
    {
      m_selectedSegmentTypes.push_back(selectedSegmentTypesJsonList[selectedSegmentTypesIndex].AsObject());
    }
    m_selectedSegmentTypesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("JobId"))
  {
    m_jobId = jsonValue.GetString("JobId");
    m_jobIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Video"))
  {
    m_video = jsonValue.GetObject("Video");
    m_videoHasBeenSet = true;
  }
  if(jsonValue.ValueExists("JobTag"))
  {
    m_jobTag = jsonValue.GetString("JobTag");
    m_jobTagHasBeenSet = true;
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
