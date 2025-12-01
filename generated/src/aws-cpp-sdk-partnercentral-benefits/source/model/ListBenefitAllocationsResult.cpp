/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/partnercentral-benefits/model/ListBenefitAllocationsResult.h>

#include <utility>

using namespace Aws::PartnerCentralBenefits::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListBenefitAllocationsResult::ListBenefitAllocationsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

ListBenefitAllocationsResult& ListBenefitAllocationsResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("BenefitAllocationSummaries")) {
    Aws::Utils::Array<JsonView> benefitAllocationSummariesJsonList = jsonValue.GetArray("BenefitAllocationSummaries");
    for (unsigned benefitAllocationSummariesIndex = 0; benefitAllocationSummariesIndex < benefitAllocationSummariesJsonList.GetLength();
         ++benefitAllocationSummariesIndex) {
      m_benefitAllocationSummaries.push_back(benefitAllocationSummariesJsonList[benefitAllocationSummariesIndex].AsObject());
    }
    m_benefitAllocationSummariesHasBeenSet = true;
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
