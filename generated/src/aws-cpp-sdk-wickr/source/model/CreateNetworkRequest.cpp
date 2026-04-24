/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/wickr/model/CreateNetworkRequest.h>

#include <utility>

using namespace Aws::Wickr::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateNetworkRequest::SerializePayload() const {
  JsonValue payload;

  if (m_networkNameHasBeenSet) {
    payload.WithString("networkName", m_networkName);
  }

  if (m_accessLevelHasBeenSet) {
    payload.WithString("accessLevel", AccessLevelMapper::GetNameForAccessLevel(m_accessLevel));
  }

  if (m_enablePremiumFreeTrialHasBeenSet) {
    payload.WithBool("enablePremiumFreeTrial", m_enablePremiumFreeTrial);
  }

  if (m_encryptionKeyArnHasBeenSet) {
    payload.WithString("encryptionKeyArn", m_encryptionKeyArn);
  }

  return payload.View().WriteReadable();
}
