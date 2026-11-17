/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/observabilityadmin/ObservabilityAdmin_EXPORTS.h>
#include <aws/observabilityadmin/model/AzureEventHubSummary.h>
#include <aws/observabilityadmin/model/AzureManagementGroupSummary.h>
#include <aws/observabilityadmin/model/AzureResourceIdentifierSummary.h>
#include <aws/observabilityadmin/model/AzureSubscriptionSummary.h>

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
 * <p>The results of an Azure discovery query. The populated member matches the
 * member of the query.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/observabilityadmin-2018-05-10/AzureConnectorQueryResults">AWS
 * API Reference</a></p>
 */
class AzureConnectorQueryResults {
 public:
  AWS_OBSERVABILITYADMIN_API AzureConnectorQueryResults() = default;
  AWS_OBSERVABILITYADMIN_API AzureConnectorQueryResults(Aws::Utils::Json::JsonView jsonValue);
  AWS_OBSERVABILITYADMIN_API AzureConnectorQueryResults& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_OBSERVABILITYADMIN_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Azure management groups.</p>
   */
  inline const Aws::Vector<AzureManagementGroupSummary>& GetManagementGroups() const { return m_managementGroups; }
  inline bool ManagementGroupsHasBeenSet() const { return m_managementGroupsHasBeenSet; }
  template <typename ManagementGroupsT = Aws::Vector<AzureManagementGroupSummary>>
  void SetManagementGroups(ManagementGroupsT&& value) {
    m_managementGroupsHasBeenSet = true;
    m_managementGroups = std::forward<ManagementGroupsT>(value);
  }
  template <typename ManagementGroupsT = Aws::Vector<AzureManagementGroupSummary>>
  AzureConnectorQueryResults& WithManagementGroups(ManagementGroupsT&& value) {
    SetManagementGroups(std::forward<ManagementGroupsT>(value));
    return *this;
  }
  template <typename ManagementGroupsT = AzureManagementGroupSummary>
  AzureConnectorQueryResults& AddManagementGroups(ManagementGroupsT&& value) {
    m_managementGroupsHasBeenSet = true;
    m_managementGroups.emplace_back(std::forward<ManagementGroupsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Azure subscriptions.</p>
   */
  inline const Aws::Vector<AzureSubscriptionSummary>& GetSubscriptions() const { return m_subscriptions; }
  inline bool SubscriptionsHasBeenSet() const { return m_subscriptionsHasBeenSet; }
  template <typename SubscriptionsT = Aws::Vector<AzureSubscriptionSummary>>
  void SetSubscriptions(SubscriptionsT&& value) {
    m_subscriptionsHasBeenSet = true;
    m_subscriptions = std::forward<SubscriptionsT>(value);
  }
  template <typename SubscriptionsT = Aws::Vector<AzureSubscriptionSummary>>
  AzureConnectorQueryResults& WithSubscriptions(SubscriptionsT&& value) {
    SetSubscriptions(std::forward<SubscriptionsT>(value));
    return *this;
  }
  template <typename SubscriptionsT = AzureSubscriptionSummary>
  AzureConnectorQueryResults& AddSubscriptions(SubscriptionsT&& value) {
    m_subscriptionsHasBeenSet = true;
    m_subscriptions.emplace_back(std::forward<SubscriptionsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Azure resource types.</p>
   */
  inline const Aws::Vector<Aws::String>& GetResourceTypes() const { return m_resourceTypes; }
  inline bool ResourceTypesHasBeenSet() const { return m_resourceTypesHasBeenSet; }
  template <typename ResourceTypesT = Aws::Vector<Aws::String>>
  void SetResourceTypes(ResourceTypesT&& value) {
    m_resourceTypesHasBeenSet = true;
    m_resourceTypes = std::forward<ResourceTypesT>(value);
  }
  template <typename ResourceTypesT = Aws::Vector<Aws::String>>
  AzureConnectorQueryResults& WithResourceTypes(ResourceTypesT&& value) {
    SetResourceTypes(std::forward<ResourceTypesT>(value));
    return *this;
  }
  template <typename ResourceTypesT = Aws::String>
  AzureConnectorQueryResults& AddResourceTypes(ResourceTypesT&& value) {
    m_resourceTypesHasBeenSet = true;
    m_resourceTypes.emplace_back(std::forward<ResourceTypesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Azure Regions.</p>
   */
  inline const Aws::Vector<Aws::String>& GetRegions() const { return m_regions; }
  inline bool RegionsHasBeenSet() const { return m_regionsHasBeenSet; }
  template <typename RegionsT = Aws::Vector<Aws::String>>
  void SetRegions(RegionsT&& value) {
    m_regionsHasBeenSet = true;
    m_regions = std::forward<RegionsT>(value);
  }
  template <typename RegionsT = Aws::Vector<Aws::String>>
  AzureConnectorQueryResults& WithRegions(RegionsT&& value) {
    SetRegions(std::forward<RegionsT>(value));
    return *this;
  }
  template <typename RegionsT = Aws::String>
  AzureConnectorQueryResults& AddRegions(RegionsT&& value) {
    m_regionsHasBeenSet = true;
    m_regions.emplace_back(std::forward<RegionsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Azure resources.</p>
   */
  inline const Aws::Vector<AzureResourceIdentifierSummary>& GetResourceIds() const { return m_resourceIds; }
  inline bool ResourceIdsHasBeenSet() const { return m_resourceIdsHasBeenSet; }
  template <typename ResourceIdsT = Aws::Vector<AzureResourceIdentifierSummary>>
  void SetResourceIds(ResourceIdsT&& value) {
    m_resourceIdsHasBeenSet = true;
    m_resourceIds = std::forward<ResourceIdsT>(value);
  }
  template <typename ResourceIdsT = Aws::Vector<AzureResourceIdentifierSummary>>
  AzureConnectorQueryResults& WithResourceIds(ResourceIdsT&& value) {
    SetResourceIds(std::forward<ResourceIdsT>(value));
    return *this;
  }
  template <typename ResourceIdsT = AzureResourceIdentifierSummary>
  AzureConnectorQueryResults& AddResourceIds(ResourceIdsT&& value) {
    m_resourceIdsHasBeenSet = true;
    m_resourceIds.emplace_back(std::forward<ResourceIdsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Azure Event Hubs.</p>
   */
  inline const Aws::Vector<AzureEventHubSummary>& GetEventHubs() const { return m_eventHubs; }
  inline bool EventHubsHasBeenSet() const { return m_eventHubsHasBeenSet; }
  template <typename EventHubsT = Aws::Vector<AzureEventHubSummary>>
  void SetEventHubs(EventHubsT&& value) {
    m_eventHubsHasBeenSet = true;
    m_eventHubs = std::forward<EventHubsT>(value);
  }
  template <typename EventHubsT = Aws::Vector<AzureEventHubSummary>>
  AzureConnectorQueryResults& WithEventHubs(EventHubsT&& value) {
    SetEventHubs(std::forward<EventHubsT>(value));
    return *this;
  }
  template <typename EventHubsT = AzureEventHubSummary>
  AzureConnectorQueryResults& AddEventHubs(EventHubsT&& value) {
    m_eventHubsHasBeenSet = true;
    m_eventHubs.emplace_back(std::forward<EventHubsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<AzureManagementGroupSummary> m_managementGroups;

  Aws::Vector<AzureSubscriptionSummary> m_subscriptions;

  Aws::Vector<Aws::String> m_resourceTypes;

  Aws::Vector<Aws::String> m_regions;

  Aws::Vector<AzureResourceIdentifierSummary> m_resourceIds;

  Aws::Vector<AzureEventHubSummary> m_eventHubs;
  bool m_managementGroupsHasBeenSet = false;
  bool m_subscriptionsHasBeenSet = false;
  bool m_resourceTypesHasBeenSet = false;
  bool m_regionsHasBeenSet = false;
  bool m_resourceIdsHasBeenSet = false;
  bool m_eventHubsHasBeenSet = false;
};

}  // namespace Model
}  // namespace ObservabilityAdmin
}  // namespace Aws
