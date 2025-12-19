/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/wickr/model/UpdateUserDetails.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Wickr {
namespace Model {

UpdateUserDetails::UpdateUserDetails(JsonView jsonValue) { *this = jsonValue; }

UpdateUserDetails& UpdateUserDetails::operator=(JsonView jsonValue) {
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
  if (jsonValue.ValueExists("securityGroupIds")) {
    Aws::Utils::Array<JsonView> securityGroupIdsJsonList = jsonValue.GetArray("securityGroupIds");
    for (unsigned securityGroupIdsIndex = 0; securityGroupIdsIndex < securityGroupIdsJsonList.GetLength(); ++securityGroupIdsIndex) {
      m_securityGroupIds.push_back(securityGroupIdsJsonList[securityGroupIdsIndex].AsString());
    }
    m_securityGroupIdsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("inviteCode")) {
    m_inviteCode = jsonValue.GetString("inviteCode");
    m_inviteCodeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("inviteCodeTtl")) {
    m_inviteCodeTtl = jsonValue.GetInteger("inviteCodeTtl");
    m_inviteCodeTtlHasBeenSet = true;
  }
  if (jsonValue.ValueExists("codeValidation")) {
    m_codeValidation = jsonValue.GetBool("codeValidation");
    m_codeValidationHasBeenSet = true;
  }
  return *this;
}

JsonValue UpdateUserDetails::Jsonize() const {
  JsonValue payload;

  if (m_firstNameHasBeenSet) {
    payload.WithString("firstName", m_firstName);
  }

  if (m_lastNameHasBeenSet) {
    payload.WithString("lastName", m_lastName);
  }

  if (m_usernameHasBeenSet) {
    payload.WithString("username", m_username);
  }

  if (m_securityGroupIdsHasBeenSet) {
    Aws::Utils::Array<JsonValue> securityGroupIdsJsonList(m_securityGroupIds.size());
    for (unsigned securityGroupIdsIndex = 0; securityGroupIdsIndex < securityGroupIdsJsonList.GetLength(); ++securityGroupIdsIndex) {
      securityGroupIdsJsonList[securityGroupIdsIndex].AsString(m_securityGroupIds[securityGroupIdsIndex]);
    }
    payload.WithArray("securityGroupIds", std::move(securityGroupIdsJsonList));
  }

  if (m_inviteCodeHasBeenSet) {
    payload.WithString("inviteCode", m_inviteCode);
  }

  if (m_inviteCodeTtlHasBeenSet) {
    payload.WithInteger("inviteCodeTtl", m_inviteCodeTtl);
  }

  if (m_codeValidationHasBeenSet) {
    payload.WithBool("codeValidation", m_codeValidation);
  }

  return payload;
}

}  // namespace Model
}  // namespace Wickr
}  // namespace Aws
