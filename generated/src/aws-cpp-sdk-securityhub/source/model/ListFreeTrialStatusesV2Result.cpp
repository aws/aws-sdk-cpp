/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/securityhub/model/ListFreeTrialStatusesV2Result.h>

#include <utility>

using namespace Aws::SecurityHub::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListFreeTrialStatusesV2Result::ListFreeTrialStatusesV2Result(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

ListFreeTrialStatusesV2Result& ListFreeTrialStatusesV2Result::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("AccountFreeTrialStatuses")) {
    Aws::Utils::Array<JsonView> accountFreeTrialStatusesJsonList = jsonValue.GetArray("AccountFreeTrialStatuses");
    for (unsigned accountFreeTrialStatusesIndex = 0; accountFreeTrialStatusesIndex < accountFreeTrialStatusesJsonList.GetLength();
         ++accountFreeTrialStatusesIndex) {
      m_accountFreeTrialStatuses.push_back(accountFreeTrialStatusesJsonList[accountFreeTrialStatusesIndex].AsObject());
    }
    m_accountFreeTrialStatusesHasBeenSet = true;
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
