/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/sagemaker/model/ListClusterOperationsResult.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListClusterOperationsResult::ListClusterOperationsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

ListClusterOperationsResult& ListClusterOperationsResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("NextToken")) {
    m_nextToken = jsonValue.GetString("NextToken");
    m_nextTokenHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ClusterOperationSummaries")) {
    Aws::Utils::Array<JsonView> clusterOperationSummariesJsonList = jsonValue.GetArray("ClusterOperationSummaries");
    for (unsigned clusterOperationSummariesIndex = 0; clusterOperationSummariesIndex < clusterOperationSummariesJsonList.GetLength();
         ++clusterOperationSummariesIndex) {
      m_clusterOperationSummaries.push_back(clusterOperationSummariesJsonList[clusterOperationSummariesIndex].AsObject());
    }
    m_clusterOperationSummariesHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
