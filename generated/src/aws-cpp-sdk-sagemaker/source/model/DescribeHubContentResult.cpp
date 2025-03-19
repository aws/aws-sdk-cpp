/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/DescribeHubContentResult.h>
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

DescribeHubContentResult::DescribeHubContentResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeHubContentResult& DescribeHubContentResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("HubContentName"))
  {
    m_hubContentName = jsonValue.GetString("HubContentName");
    m_hubContentNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("HubContentArn"))
  {
    m_hubContentArn = jsonValue.GetString("HubContentArn");
    m_hubContentArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("HubContentVersion"))
  {
    m_hubContentVersion = jsonValue.GetString("HubContentVersion");
    m_hubContentVersionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("HubContentType"))
  {
    m_hubContentType = HubContentTypeMapper::GetHubContentTypeForName(jsonValue.GetString("HubContentType"));
    m_hubContentTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DocumentSchemaVersion"))
  {
    m_documentSchemaVersion = jsonValue.GetString("DocumentSchemaVersion");
    m_documentSchemaVersionHasBeenSet = true;
  }
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
  if(jsonValue.ValueExists("HubContentDisplayName"))
  {
    m_hubContentDisplayName = jsonValue.GetString("HubContentDisplayName");
    m_hubContentDisplayNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("HubContentDescription"))
  {
    m_hubContentDescription = jsonValue.GetString("HubContentDescription");
    m_hubContentDescriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("HubContentMarkdown"))
  {
    m_hubContentMarkdown = jsonValue.GetString("HubContentMarkdown");
    m_hubContentMarkdownHasBeenSet = true;
  }
  if(jsonValue.ValueExists("HubContentDocument"))
  {
    m_hubContentDocument = jsonValue.GetString("HubContentDocument");
    m_hubContentDocumentHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SageMakerPublicHubContentArn"))
  {
    m_sageMakerPublicHubContentArn = jsonValue.GetString("SageMakerPublicHubContentArn");
    m_sageMakerPublicHubContentArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ReferenceMinVersion"))
  {
    m_referenceMinVersion = jsonValue.GetString("ReferenceMinVersion");
    m_referenceMinVersionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SupportStatus"))
  {
    m_supportStatus = HubContentSupportStatusMapper::GetHubContentSupportStatusForName(jsonValue.GetString("SupportStatus"));
    m_supportStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("HubContentSearchKeywords"))
  {
    Aws::Utils::Array<JsonView> hubContentSearchKeywordsJsonList = jsonValue.GetArray("HubContentSearchKeywords");
    for(unsigned hubContentSearchKeywordsIndex = 0; hubContentSearchKeywordsIndex < hubContentSearchKeywordsJsonList.GetLength(); ++hubContentSearchKeywordsIndex)
    {
      m_hubContentSearchKeywords.push_back(hubContentSearchKeywordsJsonList[hubContentSearchKeywordsIndex].AsString());
    }
    m_hubContentSearchKeywordsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("HubContentDependencies"))
  {
    Aws::Utils::Array<JsonView> hubContentDependenciesJsonList = jsonValue.GetArray("HubContentDependencies");
    for(unsigned hubContentDependenciesIndex = 0; hubContentDependenciesIndex < hubContentDependenciesJsonList.GetLength(); ++hubContentDependenciesIndex)
    {
      m_hubContentDependencies.push_back(hubContentDependenciesJsonList[hubContentDependenciesIndex].AsObject());
    }
    m_hubContentDependenciesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("HubContentStatus"))
  {
    m_hubContentStatus = HubContentStatusMapper::GetHubContentStatusForName(jsonValue.GetString("HubContentStatus"));
    m_hubContentStatusHasBeenSet = true;
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
