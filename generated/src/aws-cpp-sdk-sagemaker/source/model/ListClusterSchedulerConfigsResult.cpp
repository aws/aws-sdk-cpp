/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ListClusterSchedulerConfigsResult.h>
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

ListClusterSchedulerConfigsResult::ListClusterSchedulerConfigsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListClusterSchedulerConfigsResult& ListClusterSchedulerConfigsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ClusterSchedulerConfigSummaries"))
  {
    Aws::Utils::Array<JsonView> clusterSchedulerConfigSummariesJsonList = jsonValue.GetArray("ClusterSchedulerConfigSummaries");
    for(unsigned clusterSchedulerConfigSummariesIndex = 0; clusterSchedulerConfigSummariesIndex < clusterSchedulerConfigSummariesJsonList.GetLength(); ++clusterSchedulerConfigSummariesIndex)
    {
      m_clusterSchedulerConfigSummaries.push_back(clusterSchedulerConfigSummariesJsonList[clusterSchedulerConfigSummariesIndex].AsObject());
    }
    m_clusterSchedulerConfigSummariesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");
    m_nextTokenHasBeenSet = true;
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
