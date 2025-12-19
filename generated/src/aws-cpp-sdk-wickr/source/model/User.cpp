/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/wickr/model/User.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Wickr {
namespace Model {

User::User(JsonView jsonValue) { *this = jsonValue; }

User& User::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("userId")) {
    m_userId = jsonValue.GetString("userId");
    m_userIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("firstName")) {
    m_firstName = jsonValue.GetString("firstName");
    m_firstNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("lastName")) {
    m_lastName = jsonValue.GetString("lastName");
    m_lastNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("username")) {
    m_username = jsonValue.GetString("username");
    m_usernameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("securityGroups")) {
    Aws::Utils::Array<JsonView> securityGroupsJsonList = jsonValue.GetArray("securityGroups");
    for (unsigned securityGroupsIndex = 0; securityGroupsIndex < securityGroupsJsonList.GetLength(); ++securityGroupsIndex) {
      m_securityGroups.push_back(securityGroupsJsonList[securityGroupsIndex].AsString());
    }
    m_securityGroupsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("isAdmin")) {
    m_isAdmin = jsonValue.GetBool("isAdmin");
    m_isAdminHasBeenSet = true;
  }
  if (jsonValue.ValueExists("suspended")) {
    m_suspended = jsonValue.GetBool("suspended");
    m_suspendedHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = jsonValue.GetInteger("status");
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("otpEnabled")) {
    m_otpEnabled = jsonValue.GetBool("otpEnabled");
    m_otpEnabledHasBeenSet = true;
  }
  if (jsonValue.ValueExists("scimId")) {
    m_scimId = jsonValue.GetString("scimId");
    m_scimIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("type")) {
    m_type = jsonValue.GetString("type");
    m_typeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("cell")) {
    m_cell = jsonValue.GetString("cell");
    m_cellHasBeenSet = true;
  }
  if (jsonValue.ValueExists("countryCode")) {
    m_countryCode = jsonValue.GetString("countryCode");
    m_countryCodeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("challengeFailures")) {
    m_challengeFailures = jsonValue.GetInteger("challengeFailures");
    m_challengeFailuresHasBeenSet = true;
  }
  if (jsonValue.ValueExists("isInviteExpired")) {
    m_isInviteExpired = jsonValue.GetBool("isInviteExpired");
    m_isInviteExpiredHasBeenSet = true;
  }
  if (jsonValue.ValueExists("isUser")) {
    m_isUser = jsonValue.GetBool("isUser");
    m_isUserHasBeenSet = true;
  }
  if (jsonValue.ValueExists("inviteCode")) {
    m_inviteCode = jsonValue.GetString("inviteCode");
    m_inviteCodeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("codeValidation")) {
    m_codeValidation = jsonValue.GetBool("codeValidation");
    m_codeValidationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("uname")) {
    m_uname = jsonValue.GetString("uname");
    m_unameHasBeenSet = true;
  }
  return *this;
}

JsonValue User::Jsonize() const {
  JsonValue payload;

  if (m_userIdHasBeenSet) {
    payload.WithString("userId", m_userId);
  }

  if (m_firstNameHasBeenSet) {
    payload.WithString("firstName", m_firstName);
  }

  if (m_lastNameHasBeenSet) {
    payload.WithString("lastName", m_lastName);
  }

  if (m_usernameHasBeenSet) {
    payload.WithString("username", m_username);
  }

  if (m_securityGroupsHasBeenSet) {
    Aws::Utils::Array<JsonValue> securityGroupsJsonList(m_securityGroups.size());
    for (unsigned securityGroupsIndex = 0; securityGroupsIndex < securityGroupsJsonList.GetLength(); ++securityGroupsIndex) {
      securityGroupsJsonList[securityGroupsIndex].AsString(m_securityGroups[securityGroupsIndex]);
    }
    payload.WithArray("securityGroups", std::move(securityGroupsJsonList));
  }

  if (m_isAdminHasBeenSet) {
    payload.WithBool("isAdmin", m_isAdmin);
  }

  if (m_suspendedHasBeenSet) {
    payload.WithBool("suspended", m_suspended);
  }

  if (m_statusHasBeenSet) {
    payload.WithInteger("status", m_status);
  }

  if (m_otpEnabledHasBeenSet) {
    payload.WithBool("otpEnabled", m_otpEnabled);
  }

  if (m_scimIdHasBeenSet) {
    payload.WithString("scimId", m_scimId);
  }

  if (m_typeHasBeenSet) {
    payload.WithString("type", m_type);
  }

  if (m_cellHasBeenSet) {
    payload.WithString("cell", m_cell);
  }

  if (m_countryCodeHasBeenSet) {
    payload.WithString("countryCode", m_countryCode);
  }

  if (m_challengeFailuresHasBeenSet) {
    payload.WithInteger("challengeFailures", m_challengeFailures);
  }

  if (m_isInviteExpiredHasBeenSet) {
    payload.WithBool("isInviteExpired", m_isInviteExpired);
  }

  if (m_isUserHasBeenSet) {
    payload.WithBool("isUser", m_isUser);
  }

  if (m_inviteCodeHasBeenSet) {
    payload.WithString("inviteCode", m_inviteCode);
  }

  if (m_codeValidationHasBeenSet) {
    payload.WithBool("codeValidation", m_codeValidation);
  }

  if (m_unameHasBeenSet) {
    payload.WithString("uname", m_uname);
  }

  return payload;
}

}  // namespace Model
}  // namespace Wickr
}  // namespace Aws
