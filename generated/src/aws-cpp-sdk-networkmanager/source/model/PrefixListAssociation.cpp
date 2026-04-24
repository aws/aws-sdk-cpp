/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/networkmanager/model/PrefixListAssociation.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace NetworkManager {
namespace Model {

PrefixListAssociation::PrefixListAssociation(JsonView jsonValue) { *this = jsonValue; }

PrefixListAssociation& PrefixListAssociation::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("CoreNetworkId")) {
    m_coreNetworkId = jsonValue.GetString("CoreNetworkId");
    m_coreNetworkIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("PrefixListArn")) {
    m_prefixListArn = jsonValue.GetString("PrefixListArn");
    m_prefixListArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("PrefixListAlias")) {
    m_prefixListAlias = jsonValue.GetString("PrefixListAlias");
    m_prefixListAliasHasBeenSet = true;
  }
  return *this;
}

JsonValue PrefixListAssociation::Jsonize() const {
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

  return payload;
}

}  // namespace Model
}  // namespace NetworkManager
}  // namespace Aws
