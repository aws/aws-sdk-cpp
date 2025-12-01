/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/partnercentral-account/model/ListPartnersResult.h>

#include <utility>

using namespace Aws::PartnerCentralAccount::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListPartnersResult::ListPartnersResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

ListPartnersResult& ListPartnersResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("PartnerSummaryList")) {
    Aws::Utils::Array<JsonView> partnerSummaryListJsonList = jsonValue.GetArray("PartnerSummaryList");
    for (unsigned partnerSummaryListIndex = 0; partnerSummaryListIndex < partnerSummaryListJsonList.GetLength();
         ++partnerSummaryListIndex) {
      m_partnerSummaryList.push_back(partnerSummaryListJsonList[partnerSummaryListIndex].AsObject());
    }
    m_partnerSummaryListHasBeenSet = true;
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
