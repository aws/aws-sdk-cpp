/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ListClusterNodesResult.h>
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

ListClusterNodesResult::ListClusterNodesResult()
{
}

ListClusterNodesResult::ListClusterNodesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListClusterNodesResult& ListClusterNodesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }

  if(jsonValue.ValueExists("ClusterNodeSummaries"))
  {
    Aws::Utils::Array<JsonView> clusterNodeSummariesJsonList = jsonValue.GetArray("ClusterNodeSummaries");
    for(unsigned clusterNodeSummariesIndex = 0; clusterNodeSummariesIndex < clusterNodeSummariesJsonList.GetLength(); ++clusterNodeSummariesIndex)
    {
      m_clusterNodeSummaries.push_back(clusterNodeSummariesJsonList[clusterNodeSummariesIndex].AsObject());
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
