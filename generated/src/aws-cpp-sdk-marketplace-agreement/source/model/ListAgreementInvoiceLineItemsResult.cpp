/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/marketplace-agreement/model/ListAgreementInvoiceLineItemsResult.h>

#include <utility>

using namespace Aws::AgreementService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListAgreementInvoiceLineItemsResult::ListAgreementInvoiceLineItemsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  *this = result;
}

ListAgreementInvoiceLineItemsResult& ListAgreementInvoiceLineItemsResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("agreementInvoiceLineItemGroupSummaries")) {
    Aws::Utils::Array<JsonView> agreementInvoiceLineItemGroupSummariesJsonList =
        jsonValue.GetArray("agreementInvoiceLineItemGroupSummaries");
    for (unsigned agreementInvoiceLineItemGroupSummariesIndex = 0;
         agreementInvoiceLineItemGroupSummariesIndex < agreementInvoiceLineItemGroupSummariesJsonList.GetLength();
         ++agreementInvoiceLineItemGroupSummariesIndex) {
      m_agreementInvoiceLineItemGroupSummaries.push_back(
          agreementInvoiceLineItemGroupSummariesJsonList[agreementInvoiceLineItemGroupSummariesIndex].AsObject());
    }
    m_agreementInvoiceLineItemGroupSummariesHasBeenSet = true;
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
