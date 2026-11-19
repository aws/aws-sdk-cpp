/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/partnercentral-selling/model/GetCustomerAccountStatisticsResult.h>

#include <utility>

using namespace Aws::PartnerCentralSelling::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetCustomerAccountStatisticsResult::GetCustomerAccountStatisticsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  *this = result;
}

GetCustomerAccountStatisticsResult& GetCustomerAccountStatisticsResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("TotalCount")) {
    m_totalCount = jsonValue.GetInteger("TotalCount");
    m_totalCountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Aggregations")) {
    Aws::Utils::Array<JsonView> aggregationsJsonList = jsonValue.GetArray("Aggregations");
    for (unsigned aggregationsIndex = 0; aggregationsIndex < aggregationsJsonList.GetLength(); ++aggregationsIndex) {
      m_aggregations.push_back(aggregationsJsonList[aggregationsIndex].AsObject());
    }
    m_aggregationsHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
