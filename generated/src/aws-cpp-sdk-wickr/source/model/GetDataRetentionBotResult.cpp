/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/wickr/model/GetDataRetentionBotResult.h>

#include <utility>

using namespace Aws::Wickr::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetDataRetentionBotResult::GetDataRetentionBotResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

GetDataRetentionBotResult& GetDataRetentionBotResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("botName")) {
    m_botName = jsonValue.GetString("botName");
    m_botNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("botExists")) {
    m_botExists = jsonValue.GetBool("botExists");
    m_botExistsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("isBotActive")) {
    m_isBotActive = jsonValue.GetBool("isBotActive");
    m_isBotActiveHasBeenSet = true;
  }
  if (jsonValue.ValueExists("isDataRetentionBotRegistered")) {
    m_isDataRetentionBotRegistered = jsonValue.GetBool("isDataRetentionBotRegistered");
    m_isDataRetentionBotRegisteredHasBeenSet = true;
  }
  if (jsonValue.ValueExists("isDataRetentionServiceEnabled")) {
    m_isDataRetentionServiceEnabled = jsonValue.GetBool("isDataRetentionServiceEnabled");
    m_isDataRetentionServiceEnabledHasBeenSet = true;
  }
  if (jsonValue.ValueExists("isPubkeyMsgAcked")) {
    m_isPubkeyMsgAcked = jsonValue.GetBool("isPubkeyMsgAcked");
    m_isPubkeyMsgAckedHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
