/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ListClustersResult.h>
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

ListClustersResult::ListClustersResult()
{
}

ListClustersResult::ListClustersResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListClustersResult& ListClustersResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }

  if(jsonValue.ValueExists("ClusterSummaries"))
  {
    Aws::Utils::Array<JsonView> clusterSummariesJsonList = jsonValue.GetArray("ClusterSummaries");
    for(unsigned clusterSummariesIndex = 0; clusterSummariesIndex < clusterSummariesJsonList.GetLength(); ++clusterSummariesIndex)
    {
      m_clusterSummaries.push_back(clusterSummariesJsonList[clusterSummariesIndex].AsObject());
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
