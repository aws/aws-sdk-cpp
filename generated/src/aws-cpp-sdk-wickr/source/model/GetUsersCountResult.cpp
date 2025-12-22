/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/wickr/model/GetUsersCountResult.h>

#include <utility>

using namespace Aws::Wickr::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetUsersCountResult::GetUsersCountResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

GetUsersCountResult& GetUsersCountResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("pending")) {
    m_pending = jsonValue.GetInteger("pending");
    m_pendingHasBeenSet = true;
  }
  if (jsonValue.ValueExists("active")) {
    m_active = jsonValue.GetInteger("active");
    m_activeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("rejected")) {
    m_rejected = jsonValue.GetInteger("rejected");
    m_rejectedHasBeenSet = true;
  }
  if (jsonValue.ValueExists("remaining")) {
    m_remaining = jsonValue.GetInteger("remaining");
    m_remainingHasBeenSet = true;
  }
  if (jsonValue.ValueExists("total")) {
    m_total = jsonValue.GetInteger("total");
    m_totalHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
