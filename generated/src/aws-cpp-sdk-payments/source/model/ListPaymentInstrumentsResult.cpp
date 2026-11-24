/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/payments/model/ListPaymentInstrumentsResult.h>

#include <utility>

using namespace Aws::Payments::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListPaymentInstrumentsResult::ListPaymentInstrumentsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

ListPaymentInstrumentsResult& ListPaymentInstrumentsResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("paymentInstrumentSummaries")) {
    Aws::Utils::Array<JsonView> paymentInstrumentSummariesJsonList = jsonValue.GetArray("paymentInstrumentSummaries");
    for (unsigned paymentInstrumentSummariesIndex = 0; paymentInstrumentSummariesIndex < paymentInstrumentSummariesJsonList.GetLength();
         ++paymentInstrumentSummariesIndex) {
      m_paymentInstrumentSummaries.push_back(paymentInstrumentSummariesJsonList[paymentInstrumentSummariesIndex].AsObject());
    }
    m_paymentInstrumentSummariesHasBeenSet = true;
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
