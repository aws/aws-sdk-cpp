/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ListEdgePackagingJobsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListEdgePackagingJobsResult::ListEdgePackagingJobsResult()
{
}

ListEdgePackagingJobsResult::ListEdgePackagingJobsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListEdgePackagingJobsResult& ListEdgePackagingJobsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("EdgePackagingJobSummaries"))
  {
    Aws::Utils::Array<JsonView> edgePackagingJobSummariesJsonList = jsonValue.GetArray("EdgePackagingJobSummaries");
    for(unsigned edgePackagingJobSummariesIndex = 0; edgePackagingJobSummariesIndex < edgePackagingJobSummariesJsonList.GetLength(); ++edgePackagingJobSummariesIndex)
    {
      m_edgePackagingJobSummaries.push_back(edgePackagingJobSummariesJsonList[edgePackagingJobSummariesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
