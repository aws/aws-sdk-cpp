/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/wickr/model/Network.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Wickr {
namespace Model {

Network::Network(JsonView jsonValue) { *this = jsonValue; }

Network& Network::operator=(JsonView jsonValue) {
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
  return *this;
}

JsonValue Network::Jsonize() const {
  JsonValue payload;

  if (m_networkIdHasBeenSet) {
    payload.WithString("networkId", m_networkId);
  }

  if (m_networkNameHasBeenSet) {
    payload.WithString("networkName", m_networkName);
  }

  if (m_accessLevelHasBeenSet) {
    payload.WithString("accessLevel", AccessLevelMapper::GetNameForAccessLevel(m_accessLevel));
  }

  if (m_awsAccountIdHasBeenSet) {
    payload.WithString("awsAccountId", m_awsAccountId);
  }

  if (m_networkArnHasBeenSet) {
    payload.WithString("networkArn", m_networkArn);
  }

  if (m_standingHasBeenSet) {
    payload.WithInteger("standing", m_standing);
  }

  if (m_freeTrialExpirationHasBeenSet) {
    payload.WithString("freeTrialExpiration", m_freeTrialExpiration);
  }

  if (m_migrationStateHasBeenSet) {
    payload.WithInteger("migrationState", m_migrationState);
  }

  if (m_encryptionKeyArnHasBeenSet) {
    payload.WithString("encryptionKeyArn", m_encryptionKeyArn);
  }

  return payload;
}

}  // namespace Model
}  // namespace Wickr
}  // namespace Aws
