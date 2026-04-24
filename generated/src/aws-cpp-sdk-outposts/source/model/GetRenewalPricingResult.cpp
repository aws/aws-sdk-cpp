/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/outposts/model/GetRenewalPricingResult.h>

#include <utility>

using namespace Aws::Outposts::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetRenewalPricingResult::GetRenewalPricingResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

GetRenewalPricingResult& GetRenewalPricingResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("PricingResult")) {
    m_pricingResult = PricingResultMapper::GetPricingResultForName(jsonValue.GetString("PricingResult"));
    m_pricingResultHasBeenSet = true;
  }
  if (jsonValue.ValueExists("PricingOptions")) {
    Aws::Utils::Array<JsonView> pricingOptionsJsonList = jsonValue.GetArray("PricingOptions");
    for (unsigned pricingOptionsIndex = 0; pricingOptionsIndex < pricingOptionsJsonList.GetLength(); ++pricingOptionsIndex) {
      m_pricingOptions.push_back(pricingOptionsJsonList[pricingOptionsIndex].AsObject());
    }
    m_pricingOptionsHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
