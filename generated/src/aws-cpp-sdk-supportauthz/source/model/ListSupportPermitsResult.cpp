/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/supportauthz/model/ListSupportPermitsResult.h>

#include <utility>

using namespace Aws::SupportAuthZ::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListSupportPermitsResult::ListSupportPermitsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

ListSupportPermitsResult& ListSupportPermitsResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("supportPermits")) {
    Aws::Utils::Array<JsonView> supportPermitsJsonList = jsonValue.GetArray("supportPermits");
    for (unsigned supportPermitsIndex = 0; supportPermitsIndex < supportPermitsJsonList.GetLength(); ++supportPermitsIndex) {
      m_supportPermits.push_back(supportPermitsJsonList[supportPermitsIndex].AsObject());
    }
    m_supportPermitsHasBeenSet = true;
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
