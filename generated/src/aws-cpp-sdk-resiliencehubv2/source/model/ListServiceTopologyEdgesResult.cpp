/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/resiliencehubv2/model/ListServiceTopologyEdgesResult.h>

#include <utility>

using namespace Aws::resiliencehubv2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListServiceTopologyEdgesResult::ListServiceTopologyEdgesResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

ListServiceTopologyEdgesResult& ListServiceTopologyEdgesResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("serviceTopologyEdgeSummaries")) {
    Aws::Utils::Array<JsonView> serviceTopologyEdgeSummariesJsonList = jsonValue.GetArray("serviceTopologyEdgeSummaries");
    for (unsigned serviceTopologyEdgeSummariesIndex = 0;
         serviceTopologyEdgeSummariesIndex < serviceTopologyEdgeSummariesJsonList.GetLength(); ++serviceTopologyEdgeSummariesIndex) {
      m_serviceTopologyEdgeSummaries.push_back(serviceTopologyEdgeSummariesJsonList[serviceTopologyEdgeSummariesIndex].AsObject());
    }
    m_serviceTopologyEdgeSummariesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("nextToken")) {
    m_nextToken = jsonValue.GetString("nextToken");
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
