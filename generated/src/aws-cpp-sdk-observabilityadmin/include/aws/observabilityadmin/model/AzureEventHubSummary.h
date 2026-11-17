/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/observabilityadmin/ObservabilityAdmin_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ObservabilityAdmin {
namespace Model {

/**
 * <p>Information about an Azure Event Hub.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/observabilityadmin-2018-05-10/AzureEventHubSummary">AWS
 * API Reference</a></p>
 */
class AzureEventHubSummary {
 public:
  AWS_OBSERVABILITYADMIN_API AzureEventHubSummary() = default;
  AWS_OBSERVABILITYADMIN_API AzureEventHubSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_OBSERVABILITYADMIN_API AzureEventHubSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_OBSERVABILITYADMIN_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Azure Resource Manager ID of the Event Hub.</p>
   */
  inline const Aws::String& GetResourceId() const { return m_resourceId; }
  inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }
  template <typename ResourceIdT = Aws::String>
  void SetResourceId(ResourceIdT&& value) {
    m_resourceIdHasBeenSet = true;
    m_resourceId = std::forward<ResourceIdT>(value);
  }
  template <typename ResourceIdT = Aws::String>
  AzureEventHubSummary& WithResourceId(ResourceIdT&& value) {
    SetResourceId(std::forward<ResourceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the Event Hub.</p>
   */
  inline const Aws::String& GetEventHubName() const { return m_eventHubName; }
  inline bool EventHubNameHasBeenSet() const { return m_eventHubNameHasBeenSet; }
  template <typename EventHubNameT = Aws::String>
  void SetEventHubName(EventHubNameT&& value) {
    m_eventHubNameHasBeenSet = true;
    m_eventHubName = std::forward<EventHubNameT>(value);
  }
  template <typename EventHubNameT = Aws::String>
  AzureEventHubSummary& WithEventHubName(EventHubNameT&& value) {
    SetEventHubName(std::forward<EventHubNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the Event Hubs namespace that contains the Event Hub.</p>
   */
  inline const Aws::String& GetNamespaceName() const { return m_namespaceName; }
  inline bool NamespaceNameHasBeenSet() const { return m_namespaceNameHasBeenSet; }
  template <typename NamespaceNameT = Aws::String>
  void SetNamespaceName(NamespaceNameT&& value) {
    m_namespaceNameHasBeenSet = true;
    m_namespaceName = std::forward<NamespaceNameT>(value);
  }
  template <typename NamespaceNameT = Aws::String>
  AzureEventHubSummary& WithNamespaceName(NamespaceNameT&& value) {
    SetNamespaceName(std::forward<NamespaceNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The fully qualified host name of the Event Hubs namespace, for example
   * <code>&lt;namespace&gt;.servicebus.windows.net</code>. The suffix differs in
   * sovereign clouds.</p>
   */
  inline const Aws::String& GetFullyQualifiedNamespace() const { return m_fullyQualifiedNamespace; }
  inline bool FullyQualifiedNamespaceHasBeenSet() const { return m_fullyQualifiedNamespaceHasBeenSet; }
  template <typename FullyQualifiedNamespaceT = Aws::String>
  void SetFullyQualifiedNamespace(FullyQualifiedNamespaceT&& value) {
    m_fullyQualifiedNamespaceHasBeenSet = true;
    m_fullyQualifiedNamespace = std::forward<FullyQualifiedNamespaceT>(value);
  }
  template <typename FullyQualifiedNamespaceT = Aws::String>
  AzureEventHubSummary& WithFullyQualifiedNamespace(FullyQualifiedNamespaceT&& value) {
    SetFullyQualifiedNamespace(std::forward<FullyQualifiedNamespaceT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Azure Region of the Event Hub, for example <code>eastus</code>.</p>
   */
  inline const Aws::String& GetRegion() const { return m_region; }
  inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }
  template <typename RegionT = Aws::String>
  void SetRegion(RegionT&& value) {
    m_regionHasBeenSet = true;
    m_region = std::forward<RegionT>(value);
  }
  template <typename RegionT = Aws::String>
  AzureEventHubSummary& WithRegion(RegionT&& value) {
    SetRegion(std::forward<RegionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Azure subscription that contains the Event Hub.</p>
   */
  inline const Aws::String& GetSubscriptionId() const { return m_subscriptionId; }
  inline bool SubscriptionIdHasBeenSet() const { return m_subscriptionIdHasBeenSet; }
  template <typename SubscriptionIdT = Aws::String>
  void SetSubscriptionId(SubscriptionIdT&& value) {
    m_subscriptionIdHasBeenSet = true;
    m_subscriptionId = std::forward<SubscriptionIdT>(value);
  }
  template <typename SubscriptionIdT = Aws::String>
  AzureEventHubSummary& WithSubscriptionId(SubscriptionIdT&& value) {
    SetSubscriptionId(std::forward<SubscriptionIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_resourceId;

  Aws::String m_eventHubName;

  Aws::String m_namespaceName;

  Aws::String m_fullyQualifiedNamespace;

  Aws::String m_region;

  Aws::String m_subscriptionId;
  bool m_resourceIdHasBeenSet = false;
  bool m_eventHubNameHasBeenSet = false;
  bool m_namespaceNameHasBeenSet = false;
  bool m_fullyQualifiedNamespaceHasBeenSet = false;
  bool m_regionHasBeenSet = false;
  bool m_subscriptionIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace ObservabilityAdmin
}  // namespace Aws
