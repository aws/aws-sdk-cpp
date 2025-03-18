/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/DescribeHubResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeHubResult::DescribeHubResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeHubResult& DescribeHubResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("HubName"))
  {
    m_hubName = jsonValue.GetString("HubName");
    m_hubNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("HubArn"))
  {
    m_hubArn = jsonValue.GetString("HubArn");
    m_hubArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("HubDisplayName"))
  {
    m_hubDisplayName = jsonValue.GetString("HubDisplayName");
    m_hubDisplayNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("HubDescription"))
  {
    m_hubDescription = jsonValue.GetString("HubDescription");
    m_hubDescriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("HubSearchKeywords"))
  {
    Aws::Utils::Array<JsonView> hubSearchKeywordsJsonList = jsonValue.GetArray("HubSearchKeywords");
    for(unsigned hubSearchKeywordsIndex = 0; hubSearchKeywordsIndex < hubSearchKeywordsJsonList.GetLength(); ++hubSearchKeywordsIndex)
    {
      m_hubSearchKeywords.push_back(hubSearchKeywordsJsonList[hubSearchKeywordsIndex].AsString());
    }
    m_hubSearchKeywordsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("S3StorageConfig"))
  {
    m_s3StorageConfig = jsonValue.GetObject("S3StorageConfig");
    m_s3StorageConfigHasBeenSet = true;
  }
  if(jsonValue.ValueExists("HubStatus"))
  {
    m_hubStatus = HubStatusMapper::GetHubStatusForName(jsonValue.GetString("HubStatus"));
    m_hubStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("FailureReason"))
  {
    m_failureReason = jsonValue.GetString("FailureReason");
    m_failureReasonHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");
    m_creationTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LastModifiedTime"))
  {
    m_lastModifiedTime = jsonValue.GetDouble("LastModifiedTime");
    m_lastModifiedTimeHasBeenSet = true;
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
