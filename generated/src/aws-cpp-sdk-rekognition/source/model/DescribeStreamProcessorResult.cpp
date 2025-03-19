/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rekognition/model/DescribeStreamProcessorResult.h>
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

DescribeStreamProcessorResult::DescribeStreamProcessorResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeStreamProcessorResult& DescribeStreamProcessorResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("StreamProcessorArn"))
  {
    m_streamProcessorArn = jsonValue.GetString("StreamProcessorArn");
    m_streamProcessorArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Status"))
  {
    m_status = StreamProcessorStatusMapper::GetStreamProcessorStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("StatusMessage"))
  {
    m_statusMessage = jsonValue.GetString("StatusMessage");
    m_statusMessageHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreationTimestamp"))
  {
    m_creationTimestamp = jsonValue.GetDouble("CreationTimestamp");
    m_creationTimestampHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LastUpdateTimestamp"))
  {
    m_lastUpdateTimestamp = jsonValue.GetDouble("LastUpdateTimestamp");
    m_lastUpdateTimestampHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Input"))
  {
    m_input = jsonValue.GetObject("Input");
    m_inputHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Output"))
  {
    m_output = jsonValue.GetObject("Output");
    m_outputHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RoleArn"))
  {
    m_roleArn = jsonValue.GetString("RoleArn");
    m_roleArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Settings"))
  {
    m_settings = jsonValue.GetObject("Settings");
    m_settingsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("NotificationChannel"))
  {
    m_notificationChannel = jsonValue.GetObject("NotificationChannel");
    m_notificationChannelHasBeenSet = true;
  }
  if(jsonValue.ValueExists("KmsKeyId"))
  {
    m_kmsKeyId = jsonValue.GetString("KmsKeyId");
    m_kmsKeyIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RegionsOfInterest"))
  {
    Aws::Utils::Array<JsonView> regionsOfInterestJsonList = jsonValue.GetArray("RegionsOfInterest");
    for(unsigned regionsOfInterestIndex = 0; regionsOfInterestIndex < regionsOfInterestJsonList.GetLength(); ++regionsOfInterestIndex)
    {
      m_regionsOfInterest.push_back(regionsOfInterestJsonList[regionsOfInterestIndex].AsObject());
    }
    m_regionsOfInterestHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DataSharingPreference"))
  {
    m_dataSharingPreference = jsonValue.GetObject("DataSharingPreference");
    m_dataSharingPreferenceHasBeenSet = true;
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
