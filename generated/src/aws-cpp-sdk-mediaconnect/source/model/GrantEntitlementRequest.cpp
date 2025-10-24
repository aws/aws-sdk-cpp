﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mediaconnect/model/GrantEntitlementRequest.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MediaConnect {
namespace Model {

GrantEntitlementRequest::GrantEntitlementRequest(JsonView jsonValue) { *this = jsonValue; }

GrantEntitlementRequest& GrantEntitlementRequest::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("dataTransferSubscriberFeePercent")) {
    m_dataTransferSubscriberFeePercent = jsonValue.GetInteger("dataTransferSubscriberFeePercent");
    m_dataTransferSubscriberFeePercentHasBeenSet = true;
  }
  if (jsonValue.ValueExists("description")) {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("encryption")) {
    m_encryption = jsonValue.GetObject("encryption");
    m_encryptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("entitlementStatus")) {
    m_entitlementStatus = EntitlementStatusMapper::GetEntitlementStatusForName(jsonValue.GetString("entitlementStatus"));
    m_entitlementStatusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("name")) {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("subscribers")) {
    Aws::Utils::Array<JsonView> subscribersJsonList = jsonValue.GetArray("subscribers");
    for (unsigned subscribersIndex = 0; subscribersIndex < subscribersJsonList.GetLength(); ++subscribersIndex) {
      m_subscribers.push_back(subscribersJsonList[subscribersIndex].AsString());
    }
    m_subscribersHasBeenSet = true;
  }
  if (jsonValue.ValueExists("entitlementTags")) {
    Aws::Map<Aws::String, JsonView> entitlementTagsJsonMap = jsonValue.GetObject("entitlementTags").GetAllObjects();
    for (auto& entitlementTagsItem : entitlementTagsJsonMap) {
      m_entitlementTags[entitlementTagsItem.first] = entitlementTagsItem.second.AsString();
    }
    m_entitlementTagsHasBeenSet = true;
  }
  return *this;
}

JsonValue GrantEntitlementRequest::Jsonize() const {
  JsonValue payload;

  if (m_dataTransferSubscriberFeePercentHasBeenSet) {
    payload.WithInteger("dataTransferSubscriberFeePercent", m_dataTransferSubscriberFeePercent);
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("description", m_description);
  }

  if (m_encryptionHasBeenSet) {
    payload.WithObject("encryption", m_encryption.Jsonize());
  }

  if (m_entitlementStatusHasBeenSet) {
    payload.WithString("entitlementStatus", EntitlementStatusMapper::GetNameForEntitlementStatus(m_entitlementStatus));
  }

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  if (m_subscribersHasBeenSet) {
    Aws::Utils::Array<JsonValue> subscribersJsonList(m_subscribers.size());
    for (unsigned subscribersIndex = 0; subscribersIndex < subscribersJsonList.GetLength(); ++subscribersIndex) {
      subscribersJsonList[subscribersIndex].AsString(m_subscribers[subscribersIndex]);
    }
    payload.WithArray("subscribers", std::move(subscribersJsonList));
  }

  if (m_entitlementTagsHasBeenSet) {
    JsonValue entitlementTagsJsonMap;
    for (auto& entitlementTagsItem : m_entitlementTags) {
      entitlementTagsJsonMap.WithString(entitlementTagsItem.first, entitlementTagsItem.second);
    }
    payload.WithObject("entitlementTags", std::move(entitlementTagsJsonMap));
  }

  return payload;
}

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
