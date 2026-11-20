/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/payments/model/ListFinancialRecordsResult.h>

#include <utility>

using namespace Aws::Payments::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListFinancialRecordsResult::ListFinancialRecordsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

ListFinancialRecordsResult& ListFinancialRecordsResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("financialRecordSummaries")) {
    Aws::Utils::Array<JsonView> financialRecordSummariesJsonList = jsonValue.GetArray("financialRecordSummaries");
    for (unsigned financialRecordSummariesIndex = 0; financialRecordSummariesIndex < financialRecordSummariesJsonList.GetLength();
         ++financialRecordSummariesIndex) {
      m_financialRecordSummaries.push_back(financialRecordSummariesJsonList[financialRecordSummariesIndex].AsObject());
    }
    m_financialRecordSummariesHasBeenSet = true;
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
