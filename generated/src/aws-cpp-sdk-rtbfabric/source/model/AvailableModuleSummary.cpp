/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/rtbfabric/model/AvailableModuleSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace RTBFabric {
namespace Model {

AvailableModuleSummary::AvailableModuleSummary(JsonView jsonValue) { *this = jsonValue; }

AvailableModuleSummary& AvailableModuleSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("moduleId")) {
    m_moduleId = jsonValue.GetString("moduleId");
    m_moduleIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("moduleArn")) {
    m_moduleArn = jsonValue.GetString("moduleArn");
    m_moduleArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("moduleName")) {
    m_moduleName = jsonValue.GetString("moduleName");
    m_moduleNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("subscriptionType")) {
    m_subscriptionType = SubscriptionTypeMapper::GetSubscriptionTypeForName(jsonValue.GetString("subscriptionType"));
    m_subscriptionTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("subscriptionStatus")) {
    m_subscriptionStatus = SubscriptionStatusMapper::GetSubscriptionStatusForName(jsonValue.GetString("subscriptionStatus"));
    m_subscriptionStatusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("marketplaceProductId")) {
    m_marketplaceProductId = jsonValue.GetString("marketplaceProductId");
    m_marketplaceProductIdHasBeenSet = true;
  }
  return *this;
}

JsonValue AvailableModuleSummary::Jsonize() const {
  JsonValue payload;

  if (m_moduleIdHasBeenSet) {
    payload.WithString("moduleId", m_moduleId);
  }

  if (m_moduleArnHasBeenSet) {
    payload.WithString("moduleArn", m_moduleArn);
  }

  if (m_moduleNameHasBeenSet) {
    payload.WithString("moduleName", m_moduleName);
  }

  if (m_subscriptionTypeHasBeenSet) {
    payload.WithString("subscriptionType", SubscriptionTypeMapper::GetNameForSubscriptionType(m_subscriptionType));
  }

  if (m_subscriptionStatusHasBeenSet) {
    payload.WithString("subscriptionStatus", SubscriptionStatusMapper::GetNameForSubscriptionStatus(m_subscriptionStatus));
  }

  if (m_marketplaceProductIdHasBeenSet) {
    payload.WithString("marketplaceProductId", m_marketplaceProductId);
  }

  return payload;
}

}  // namespace Model
}  // namespace RTBFabric
}  // namespace Aws
