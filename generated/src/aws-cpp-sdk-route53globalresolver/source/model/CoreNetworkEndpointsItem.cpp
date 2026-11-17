/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/route53globalresolver/model/CoreNetworkEndpointsItem.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Route53GlobalResolver {
namespace Model {

CoreNetworkEndpointsItem::CoreNetworkEndpointsItem(JsonView jsonValue) { *this = jsonValue; }

CoreNetworkEndpointsItem& CoreNetworkEndpointsItem::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("arn")) {
    m_arn = jsonValue.GetString("arn");
    m_arnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("availableRegions")) {
    Aws::Utils::Array<JsonView> availableRegionsJsonList = jsonValue.GetArray("availableRegions");
    for (unsigned availableRegionsIndex = 0; availableRegionsIndex < availableRegionsJsonList.GetLength(); ++availableRegionsIndex) {
      m_availableRegions.push_back(availableRegionsJsonList[availableRegionsIndex].AsString());
    }
    m_availableRegionsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("coreNetworkArn")) {
    m_coreNetworkArn = jsonValue.GetString("coreNetworkArn");
    m_coreNetworkArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createdAt")) {
    m_createdAt = jsonValue.GetString("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("globalResolverId")) {
    m_globalResolverId = jsonValue.GetString("globalResolverId");
    m_globalResolverIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("id")) {
    m_id = jsonValue.GetString("id");
    m_idHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ipAddresses")) {
    Aws::Utils::Array<JsonView> ipAddressesJsonList = jsonValue.GetArray("ipAddresses");
    for (unsigned ipAddressesIndex = 0; ipAddressesIndex < ipAddressesJsonList.GetLength(); ++ipAddressesIndex) {
      m_ipAddresses.push_back(ipAddressesJsonList[ipAddressesIndex].AsObject());
    }
    m_ipAddressesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("name")) {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = CRResourceStatusMapper::GetCRResourceStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("updatedAt")) {
    m_updatedAt = jsonValue.GetString("updatedAt");
    m_updatedAtHasBeenSet = true;
  }
  return *this;
}

JsonValue CoreNetworkEndpointsItem::Jsonize() const {
  JsonValue payload;

  if (m_arnHasBeenSet) {
    payload.WithString("arn", m_arn);
  }

  if (m_availableRegionsHasBeenSet) {
    Aws::Utils::Array<JsonValue> availableRegionsJsonList(m_availableRegions.size());
    for (unsigned availableRegionsIndex = 0; availableRegionsIndex < availableRegionsJsonList.GetLength(); ++availableRegionsIndex) {
      availableRegionsJsonList[availableRegionsIndex].AsString(m_availableRegions[availableRegionsIndex]);
    }
    payload.WithArray("availableRegions", std::move(availableRegionsJsonList));
  }

  if (m_coreNetworkArnHasBeenSet) {
    payload.WithString("coreNetworkArn", m_coreNetworkArn);
  }

  if (m_createdAtHasBeenSet) {
    payload.WithString("createdAt", m_createdAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_globalResolverIdHasBeenSet) {
    payload.WithString("globalResolverId", m_globalResolverId);
  }

  if (m_idHasBeenSet) {
    payload.WithString("id", m_id);
  }

  if (m_ipAddressesHasBeenSet) {
    Aws::Utils::Array<JsonValue> ipAddressesJsonList(m_ipAddresses.size());
    for (unsigned ipAddressesIndex = 0; ipAddressesIndex < ipAddressesJsonList.GetLength(); ++ipAddressesIndex) {
      ipAddressesJsonList[ipAddressesIndex].AsObject(m_ipAddresses[ipAddressesIndex].Jsonize());
    }
    payload.WithArray("ipAddresses", std::move(ipAddressesJsonList));
  }

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", CRResourceStatusMapper::GetNameForCRResourceStatus(m_status));
  }

  if (m_updatedAtHasBeenSet) {
    payload.WithString("updatedAt", m_updatedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  return payload;
}

}  // namespace Model
}  // namespace Route53GlobalResolver
}  // namespace Aws
