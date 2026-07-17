/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/odb/model/CreateAutonomousDatabaseWalletRequest.h>

#include <utility>

using namespace Aws::odb::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateAutonomousDatabaseWalletRequest::SerializePayload() const {
  JsonValue payload;

  if (m_autonomousDatabaseIdHasBeenSet) {
    payload.WithString("autonomousDatabaseId", m_autonomousDatabaseId);
  }

  if (m_walletTypeHasBeenSet) {
    payload.WithString("walletType", WalletTypeMapper::GetNameForWalletType(m_walletType));
  }

  if (m_passwordHasBeenSet) {
    payload.WithString("password", m_password);
  }

  if (m_passwordSourceHasBeenSet) {
    payload.WithString("passwordSource", WalletPasswordSourceMapper::GetNameForWalletPasswordSource(m_passwordSource));
  }

  if (m_passwordSourceConfigurationHasBeenSet) {
    payload.WithObject("passwordSourceConfiguration", m_passwordSourceConfiguration.Jsonize());
  }

  if (m_clientTokenHasBeenSet) {
    payload.WithString("clientToken", m_clientToken);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateAutonomousDatabaseWalletRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Odb.CreateAutonomousDatabaseWallet"));
  return headers;
}
