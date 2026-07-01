/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/supportauthz/model/ListSupportPermitRequestsResult.h>

#include <utility>

using namespace Aws::SupportAuthZ::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListSupportPermitRequestsResult::ListSupportPermitRequestsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

ListSupportPermitRequestsResult& ListSupportPermitRequestsResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("supportPermitRequests")) {
    Aws::Utils::Array<JsonView> supportPermitRequestsJsonList = jsonValue.GetArray("supportPermitRequests");
    for (unsigned supportPermitRequestsIndex = 0; supportPermitRequestsIndex < supportPermitRequestsJsonList.GetLength();
         ++supportPermitRequestsIndex) {
      m_supportPermitRequests.push_back(supportPermitRequestsJsonList[supportPermitRequestsIndex].AsObject());
    }
    m_supportPermitRequestsHasBeenSet = true;
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
