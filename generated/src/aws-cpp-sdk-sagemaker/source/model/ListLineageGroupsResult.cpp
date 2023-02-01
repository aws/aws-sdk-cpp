/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ListLineageGroupsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListLineageGroupsResult::ListLineageGroupsResult()
{
}

ListLineageGroupsResult::ListLineageGroupsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListLineageGroupsResult& ListLineageGroupsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("LineageGroupSummaries"))
  {
    Aws::Utils::Array<JsonView> lineageGroupSummariesJsonList = jsonValue.GetArray("LineageGroupSummaries");
    for(unsigned lineageGroupSummariesIndex = 0; lineageGroupSummariesIndex < lineageGroupSummariesJsonList.GetLength(); ++lineageGroupSummariesIndex)
    {
      m_lineageGroupSummaries.push_back(lineageGroupSummariesJsonList[lineageGroupSummariesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
