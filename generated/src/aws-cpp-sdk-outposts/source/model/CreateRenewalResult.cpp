/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/outposts/model/CreateRenewalResult.h>

#include <utility>

using namespace Aws::Outposts::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreateRenewalResult::CreateRenewalResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

CreateRenewalResult& CreateRenewalResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("PaymentOption")) {
    m_paymentOption = PaymentOptionMapper::GetPaymentOptionForName(jsonValue.GetString("PaymentOption"));
    m_paymentOptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("PaymentTerm")) {
    m_paymentTerm = PaymentTermMapper::GetPaymentTermForName(jsonValue.GetString("PaymentTerm"));
    m_paymentTermHasBeenSet = true;
  }
  if (jsonValue.ValueExists("OutpostId")) {
    m_outpostId = jsonValue.GetString("OutpostId");
    m_outpostIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("UpfrontPrice")) {
    m_upfrontPrice = jsonValue.GetDouble("UpfrontPrice");
    m_upfrontPriceHasBeenSet = true;
  }
  if (jsonValue.ValueExists("MonthlyRecurringPrice")) {
    m_monthlyRecurringPrice = jsonValue.GetDouble("MonthlyRecurringPrice");
    m_monthlyRecurringPriceHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
