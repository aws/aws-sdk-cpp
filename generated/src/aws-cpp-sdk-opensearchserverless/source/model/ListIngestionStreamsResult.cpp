/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/opensearchserverless/model/ListIngestionStreamsResult.h>

#include <utility>

using namespace Aws::OpenSearchServerless::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListIngestionStreamsResult::ListIngestionStreamsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

ListIngestionStreamsResult& ListIngestionStreamsResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("ingestionStreamSummaries")) {
    Aws::Utils::Array<JsonView> ingestionStreamSummariesJsonList = jsonValue.GetArray("ingestionStreamSummaries");
    for (unsigned ingestionStreamSummariesIndex = 0; ingestionStreamSummariesIndex < ingestionStreamSummariesJsonList.GetLength();
         ++ingestionStreamSummariesIndex) {
      m_ingestionStreamSummaries.push_back(ingestionStreamSummariesJsonList[ingestionStreamSummariesIndex].AsObject());
    }
    m_ingestionStreamSummariesHasBeenSet = true;
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
