/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ListHubContentsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListHubContentsResult::ListHubContentsResult()
{
}

ListHubContentsResult::ListHubContentsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListHubContentsResult& ListHubContentsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("HubContentSummaries"))
  {
    Aws::Utils::Array<JsonView> hubContentSummariesJsonList = jsonValue.GetArray("HubContentSummaries");
    for(unsigned hubContentSummariesIndex = 0; hubContentSummariesIndex < hubContentSummariesJsonList.GetLength(); ++hubContentSummariesIndex)
    {
      m_hubContentSummaries.push_back(hubContentSummariesJsonList[hubContentSummariesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
