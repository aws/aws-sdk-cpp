/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/observabilityadmin/model/AzureEventHubSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ObservabilityAdmin {
namespace Model {

AzureEventHubSummary::AzureEventHubSummary(JsonView jsonValue) { *this = jsonValue; }

AzureEventHubSummary& AzureEventHubSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ResourceId")) {
    m_resourceId = jsonValue.GetString("ResourceId");
    m_resourceIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("EventHubName")) {
    m_eventHubName = jsonValue.GetString("EventHubName");
    m_eventHubNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("NamespaceName")) {
    m_namespaceName = jsonValue.GetString("NamespaceName");
    m_namespaceNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("FullyQualifiedNamespace")) {
    m_fullyQualifiedNamespace = jsonValue.GetString("FullyQualifiedNamespace");
    m_fullyQualifiedNamespaceHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Region")) {
    m_region = jsonValue.GetString("Region");
    m_regionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("SubscriptionId")) {
    m_subscriptionId = jsonValue.GetString("SubscriptionId");
    m_subscriptionIdHasBeenSet = true;
  }
  return *this;
}

JsonValue AzureEventHubSummary::Jsonize() const {
  JsonValue payload;

  if (m_resourceIdHasBeenSet) {
    payload.WithString("ResourceId", m_resourceId);
  }

  if (m_eventHubNameHasBeenSet) {
    payload.WithString("EventHubName", m_eventHubName);
  }

  if (m_namespaceNameHasBeenSet) {
    payload.WithString("NamespaceName", m_namespaceName);
  }

  if (m_fullyQualifiedNamespaceHasBeenSet) {
    payload.WithString("FullyQualifiedNamespace", m_fullyQualifiedNamespace);
  }

  if (m_regionHasBeenSet) {
    payload.WithString("Region", m_region);
  }

  if (m_subscriptionIdHasBeenSet) {
    payload.WithString("SubscriptionId", m_subscriptionId);
  }

  return payload;
}

}  // namespace Model
}  // namespace ObservabilityAdmin
}  // namespace Aws
