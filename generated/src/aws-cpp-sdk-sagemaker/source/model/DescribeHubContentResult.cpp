/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/DescribeHubContentResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeHubContentResult::DescribeHubContentResult() : 
    m_hubContentType(HubContentType::NOT_SET),
    m_hubContentStatus(HubContentStatus::NOT_SET)
{
}

DescribeHubContentResult::DescribeHubContentResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_hubContentType(HubContentType::NOT_SET),
    m_hubContentStatus(HubContentStatus::NOT_SET)
{
  *this = result;
}

DescribeHubContentResult& DescribeHubContentResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("HubContentName"))
  {
    m_hubContentName = jsonValue.GetString("HubContentName");

  }

  if(jsonValue.ValueExists("HubContentArn"))
  {
    m_hubContentArn = jsonValue.GetString("HubContentArn");

  }

  if(jsonValue.ValueExists("HubContentVersion"))
  {
    m_hubContentVersion = jsonValue.GetString("HubContentVersion");

  }

  if(jsonValue.ValueExists("HubContentType"))
  {
    m_hubContentType = HubContentTypeMapper::GetHubContentTypeForName(jsonValue.GetString("HubContentType"));

  }

  if(jsonValue.ValueExists("DocumentSchemaVersion"))
  {
    m_documentSchemaVersion = jsonValue.GetString("DocumentSchemaVersion");

  }

  if(jsonValue.ValueExists("HubName"))
  {
    m_hubName = jsonValue.GetString("HubName");

  }

  if(jsonValue.ValueExists("HubArn"))
  {
    m_hubArn = jsonValue.GetString("HubArn");

  }

  if(jsonValue.ValueExists("HubContentDisplayName"))
  {
    m_hubContentDisplayName = jsonValue.GetString("HubContentDisplayName");

  }

  if(jsonValue.ValueExists("HubContentDescription"))
  {
    m_hubContentDescription = jsonValue.GetString("HubContentDescription");

  }

  if(jsonValue.ValueExists("HubContentMarkdown"))
  {
    m_hubContentMarkdown = jsonValue.GetString("HubContentMarkdown");

  }

  if(jsonValue.ValueExists("HubContentDocument"))
  {
    m_hubContentDocument = jsonValue.GetString("HubContentDocument");

  }

  if(jsonValue.ValueExists("HubContentSearchKeywords"))
  {
    Aws::Utils::Array<JsonView> hubContentSearchKeywordsJsonList = jsonValue.GetArray("HubContentSearchKeywords");
    for(unsigned hubContentSearchKeywordsIndex = 0; hubContentSearchKeywordsIndex < hubContentSearchKeywordsJsonList.GetLength(); ++hubContentSearchKeywordsIndex)
    {
      m_hubContentSearchKeywords.push_back(hubContentSearchKeywordsJsonList[hubContentSearchKeywordsIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("HubContentDependencies"))
  {
    Aws::Utils::Array<JsonView> hubContentDependenciesJsonList = jsonValue.GetArray("HubContentDependencies");
    for(unsigned hubContentDependenciesIndex = 0; hubContentDependenciesIndex < hubContentDependenciesJsonList.GetLength(); ++hubContentDependenciesIndex)
    {
      m_hubContentDependencies.push_back(hubContentDependenciesJsonList[hubContentDependenciesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("HubContentStatus"))
  {
    m_hubContentStatus = HubContentStatusMapper::GetHubContentStatusForName(jsonValue.GetString("HubContentStatus"));

  }

  if(jsonValue.ValueExists("FailureReason"))
  {
    m_failureReason = jsonValue.GetString("FailureReason");

  }

  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");

  }



  return *this;
}
