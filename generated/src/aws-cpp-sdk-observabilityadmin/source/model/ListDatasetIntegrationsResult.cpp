/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/observabilityadmin/model/ListDatasetIntegrationsResult.h>

#include <utility>

using namespace Aws::ObservabilityAdmin::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListDatasetIntegrationsResult::ListDatasetIntegrationsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

ListDatasetIntegrationsResult& ListDatasetIntegrationsResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("DatasetIntegrationSummaries")) {
    Aws::Utils::Array<JsonView> datasetIntegrationSummariesJsonList = jsonValue.GetArray("DatasetIntegrationSummaries");
    for (unsigned datasetIntegrationSummariesIndex = 0; datasetIntegrationSummariesIndex < datasetIntegrationSummariesJsonList.GetLength();
         ++datasetIntegrationSummariesIndex) {
      m_datasetIntegrationSummaries.push_back(datasetIntegrationSummariesJsonList[datasetIntegrationSummariesIndex].AsObject());
    }
    m_datasetIntegrationSummariesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("NextToken")) {
    m_nextToken = jsonValue.GetString("NextToken");
    m_nextTokenHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
