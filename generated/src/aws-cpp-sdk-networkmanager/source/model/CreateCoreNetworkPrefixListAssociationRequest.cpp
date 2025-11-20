/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/networkmanager/model/CreateCoreNetworkPrefixListAssociationRequest.h>

#include <utility>

using namespace Aws::NetworkManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateCoreNetworkPrefixListAssociationRequest::SerializePayload() const {
  JsonValue payload;

  if (m_coreNetworkIdHasBeenSet) {
    payload.WithString("CoreNetworkId", m_coreNetworkId);
  }

  if (m_prefixListArnHasBeenSet) {
    payload.WithString("PrefixListArn", m_prefixListArn);
  }

  if (m_prefixListAliasHasBeenSet) {
    payload.WithString("PrefixListAlias", m_prefixListAlias);
  }

  if (m_clientTokenHasBeenSet) {
    payload.WithString("ClientToken", m_clientToken);
  }

  return payload.View().WriteReadable();
}
