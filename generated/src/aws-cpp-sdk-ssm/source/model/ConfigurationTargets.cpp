/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/ssm/model/ConfigurationTargets.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SSM {
namespace Model {

ConfigurationTargets::ConfigurationTargets(JsonView jsonValue) { *this = jsonValue; }

ConfigurationTargets& ConfigurationTargets::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Subscriptions")) {
    Aws::Utils::Array<JsonView> subscriptionsJsonList = jsonValue.GetArray("Subscriptions");
    for (unsigned subscriptionsIndex = 0; subscriptionsIndex < subscriptionsJsonList.GetLength(); ++subscriptionsIndex) {
      m_subscriptions.push_back(subscriptionsJsonList[subscriptionsIndex].AsObject());
    }
    m_subscriptionsHasBeenSet = true;
  }
  return *this;
}

JsonValue ConfigurationTargets::Jsonize() const {
  JsonValue payload;

  if (m_subscriptionsHasBeenSet) {
    Aws::Utils::Array<JsonValue> subscriptionsJsonList(m_subscriptions.size());
    for (unsigned subscriptionsIndex = 0; subscriptionsIndex < subscriptionsJsonList.GetLength(); ++subscriptionsIndex) {
      subscriptionsJsonList[subscriptionsIndex].AsObject(m_subscriptions[subscriptionsIndex].Jsonize());
    }
    payload.WithArray("Subscriptions", std::move(subscriptionsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace SSM
}  // namespace Aws
