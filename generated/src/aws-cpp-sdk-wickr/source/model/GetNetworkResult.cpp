/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/wickr/model/GetNetworkResult.h>

#include <utility>

using namespace Aws::Wickr::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetNetworkResult::GetNetworkResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

GetNetworkResult& GetNetworkResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("networkId")) {
    m_networkId = jsonValue.GetString("networkId");
    m_networkIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("networkName")) {
    m_networkName = jsonValue.GetString("networkName");
    m_networkNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("accessLevel")) {
    m_accessLevel = AccessLevelMapper::GetAccessLevelForName(jsonValue.GetString("accessLevel"));
    m_accessLevelHasBeenSet = true;
  }
  if (jsonValue.ValueExists("awsAccountId")) {
    m_awsAccountId = jsonValue.GetString("awsAccountId");
    m_awsAccountIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("networkArn")) {
    m_networkArn = jsonValue.GetString("networkArn");
    m_networkArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("standing")) {
    m_standing = jsonValue.GetInteger("standing");
    m_standingHasBeenSet = true;
  }
  if (jsonValue.ValueExists("freeTrialExpiration")) {
    m_freeTrialExpiration = jsonValue.GetString("freeTrialExpiration");
    m_freeTrialExpirationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("migrationState")) {
    m_migrationState = jsonValue.GetInteger("migrationState");
    m_migrationStateHasBeenSet = true;
  }
  if (jsonValue.ValueExists("encryptionKeyArn")) {
    m_encryptionKeyArn = jsonValue.GetString("encryptionKeyArn");
    m_encryptionKeyArnHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
