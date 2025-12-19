/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/wickr/model/GetBotResult.h>

#include <utility>

using namespace Aws::Wickr::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetBotResult::GetBotResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

GetBotResult& GetBotResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("botId")) {
    m_botId = jsonValue.GetString("botId");
    m_botIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("displayName")) {
    m_displayName = jsonValue.GetString("displayName");
    m_displayNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("username")) {
    m_username = jsonValue.GetString("username");
    m_usernameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("uname")) {
    m_uname = jsonValue.GetString("uname");
    m_unameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("pubkey")) {
    m_pubkey = jsonValue.GetString("pubkey");
    m_pubkeyHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = jsonValue.GetInteger("status");
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("groupId")) {
    m_groupId = jsonValue.GetString("groupId");
    m_groupIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("hasChallenge")) {
    m_hasChallenge = jsonValue.GetBool("hasChallenge");
    m_hasChallengeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("suspended")) {
    m_suspended = jsonValue.GetBool("suspended");
    m_suspendedHasBeenSet = true;
  }
  if (jsonValue.ValueExists("lastLogin")) {
    m_lastLogin = jsonValue.GetString("lastLogin");
    m_lastLoginHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
