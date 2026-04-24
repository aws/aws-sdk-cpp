/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/wickr/model/Bot.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Wickr {
namespace Model {

Bot::Bot(JsonView jsonValue) { *this = jsonValue; }

Bot& Bot::operator=(JsonView jsonValue) {
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
  return *this;
}

JsonValue Bot::Jsonize() const {
  JsonValue payload;

  if (m_botIdHasBeenSet) {
    payload.WithString("botId", m_botId);
  }

  if (m_displayNameHasBeenSet) {
    payload.WithString("displayName", m_displayName);
  }

  if (m_usernameHasBeenSet) {
    payload.WithString("username", m_username);
  }

  if (m_unameHasBeenSet) {
    payload.WithString("uname", m_uname);
  }

  if (m_pubkeyHasBeenSet) {
    payload.WithString("pubkey", m_pubkey);
  }

  if (m_statusHasBeenSet) {
    payload.WithInteger("status", m_status);
  }

  if (m_groupIdHasBeenSet) {
    payload.WithString("groupId", m_groupId);
  }

  if (m_hasChallengeHasBeenSet) {
    payload.WithBool("hasChallenge", m_hasChallenge);
  }

  if (m_suspendedHasBeenSet) {
    payload.WithBool("suspended", m_suspended);
  }

  if (m_lastLoginHasBeenSet) {
    payload.WithString("lastLogin", m_lastLogin);
  }

  return payload;
}

}  // namespace Model
}  // namespace Wickr
}  // namespace Aws
