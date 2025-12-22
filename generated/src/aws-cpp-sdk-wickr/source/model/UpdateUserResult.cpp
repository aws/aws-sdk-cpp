/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/wickr/model/UpdateUserResult.h>

#include <utility>

using namespace Aws::Wickr::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

UpdateUserResult::UpdateUserResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

UpdateUserResult& UpdateUserResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("userId")) {
    m_userId = jsonValue.GetString("userId");
    m_userIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("networkId")) {
    m_networkId = jsonValue.GetString("networkId");
    m_networkIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("securityGroupIds")) {
    Aws::Utils::Array<JsonView> securityGroupIdsJsonList = jsonValue.GetArray("securityGroupIds");
    for (unsigned securityGroupIdsIndex = 0; securityGroupIdsIndex < securityGroupIdsJsonList.GetLength(); ++securityGroupIdsIndex) {
      m_securityGroupIds.push_back(securityGroupIdsJsonList[securityGroupIdsIndex].AsString());
    }
    m_securityGroupIdsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("firstName")) {
    m_firstName = jsonValue.GetString("firstName");
    m_firstNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("lastName")) {
    m_lastName = jsonValue.GetString("lastName");
    m_lastNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("middleName")) {
    m_middleName = jsonValue.GetString("middleName");
    m_middleNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("suspended")) {
    m_suspended = jsonValue.GetBool("suspended");
    m_suspendedHasBeenSet = true;
  }
  if (jsonValue.ValueExists("modified")) {
    m_modified = jsonValue.GetInteger("modified");
    m_modifiedHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = jsonValue.GetInteger("status");
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("inviteCode")) {
    m_inviteCode = jsonValue.GetString("inviteCode");
    m_inviteCodeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("inviteExpiration")) {
    m_inviteExpiration = jsonValue.GetInteger("inviteExpiration");
    m_inviteExpirationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("codeValidation")) {
    m_codeValidation = jsonValue.GetBool("codeValidation");
    m_codeValidationHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
