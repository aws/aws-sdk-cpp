/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/signin/model/GetSessionResult.h>

#include <utility>

using namespace Aws::Signin::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetSessionResult::GetSessionResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

GetSessionResult& GetSessionResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("sessionArn")) {
    m_sessionArn = jsonValue.GetString("sessionArn");
    m_sessionArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("principalArn")) {
    m_principalArn = jsonValue.GetString("principalArn");
    m_principalArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("role")) {
    m_role = jsonValue.GetString("role");
    m_roleHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = SessionStatusMapper::GetSessionStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("clientId")) {
    m_clientId = jsonValue.GetString("clientId");
    m_clientIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("clientType")) {
    m_clientType = ClientTypeMapper::GetClientTypeForName(jsonValue.GetString("clientType"));
    m_clientTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("resource")) {
    m_resource = jsonValue.GetString("resource");
    m_resourceHasBeenSet = true;
  }
  if (jsonValue.ValueExists("issuedAt")) {
    m_issuedAt = jsonValue.GetInt64("issuedAt");
    m_issuedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("expiresAt")) {
    m_expiresAt = jsonValue.GetInt64("expiresAt");
    m_expiresAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("lastUsedAt")) {
    m_lastUsedAt = jsonValue.GetInt64("lastUsedAt");
    m_lastUsedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("issuedInRegion")) {
    m_issuedInRegion = jsonValue.GetString("issuedInRegion");
    m_issuedInRegionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("originSessionArn")) {
    m_originSessionArn = jsonValue.GetString("originSessionArn");
    m_originSessionArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("userAgent")) {
    m_userAgent = jsonValue.GetString("userAgent");
    m_userAgentHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
