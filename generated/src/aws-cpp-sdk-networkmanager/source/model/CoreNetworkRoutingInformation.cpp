/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/networkmanager/model/CoreNetworkRoutingInformation.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace NetworkManager {
namespace Model {

CoreNetworkRoutingInformation::CoreNetworkRoutingInformation(JsonView jsonValue) { *this = jsonValue; }

CoreNetworkRoutingInformation& CoreNetworkRoutingInformation::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Prefix")) {
    m_prefix = jsonValue.GetString("Prefix");
    m_prefixHasBeenSet = true;
  }
  if (jsonValue.ValueExists("NextHop")) {
    m_nextHop = jsonValue.GetObject("NextHop");
    m_nextHopHasBeenSet = true;
  }
  if (jsonValue.ValueExists("LocalPreference")) {
    m_localPreference = jsonValue.GetString("LocalPreference");
    m_localPreferenceHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Med")) {
    m_med = jsonValue.GetString("Med");
    m_medHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AsPath")) {
    Aws::Utils::Array<JsonView> asPathJsonList = jsonValue.GetArray("AsPath");
    for (unsigned asPathIndex = 0; asPathIndex < asPathJsonList.GetLength(); ++asPathIndex) {
      m_asPath.push_back(asPathJsonList[asPathIndex].AsString());
    }
    m_asPathHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Communities")) {
    Aws::Utils::Array<JsonView> communitiesJsonList = jsonValue.GetArray("Communities");
    for (unsigned communitiesIndex = 0; communitiesIndex < communitiesJsonList.GetLength(); ++communitiesIndex) {
      m_communities.push_back(communitiesJsonList[communitiesIndex].AsString());
    }
    m_communitiesHasBeenSet = true;
  }
  return *this;
}

JsonValue CoreNetworkRoutingInformation::Jsonize() const {
  JsonValue payload;

  if (m_prefixHasBeenSet) {
    payload.WithString("Prefix", m_prefix);
  }

  if (m_nextHopHasBeenSet) {
    payload.WithObject("NextHop", m_nextHop.Jsonize());
  }

  if (m_localPreferenceHasBeenSet) {
    payload.WithString("LocalPreference", m_localPreference);
  }

  if (m_medHasBeenSet) {
    payload.WithString("Med", m_med);
  }

  if (m_asPathHasBeenSet) {
    Aws::Utils::Array<JsonValue> asPathJsonList(m_asPath.size());
    for (unsigned asPathIndex = 0; asPathIndex < asPathJsonList.GetLength(); ++asPathIndex) {
      asPathJsonList[asPathIndex].AsString(m_asPath[asPathIndex]);
    }
    payload.WithArray("AsPath", std::move(asPathJsonList));
  }

  if (m_communitiesHasBeenSet) {
    Aws::Utils::Array<JsonValue> communitiesJsonList(m_communities.size());
    for (unsigned communitiesIndex = 0; communitiesIndex < communitiesJsonList.GetLength(); ++communitiesIndex) {
      communitiesJsonList[communitiesIndex].AsString(m_communities[communitiesIndex]);
    }
    payload.WithArray("Communities", std::move(communitiesJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace NetworkManager
}  // namespace Aws
