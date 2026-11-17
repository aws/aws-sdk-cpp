/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/observabilityadmin/ObservabilityAdmin_EXPORTS.h>
#include <aws/observabilityadmin/model/AzureEventHubsQuery.h>
#include <aws/observabilityadmin/model/AzureManagementGroupsQuery.h>
#include <aws/observabilityadmin/model/AzureRegionsQuery.h>
#include <aws/observabilityadmin/model/AzureResourceIdsQuery.h>
#include <aws/observabilityadmin/model/AzureResourceTypesQuery.h>
#include <aws/observabilityadmin/model/AzureSubscriptionsQuery.h>

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
 * <p>The type of Azure resource to list. Specify one type.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/observabilityadmin-2018-05-10/AzureConnectorQuery">AWS
 * API Reference</a></p>
 */
class AzureConnectorQuery {
 public:
  AWS_OBSERVABILITYADMIN_API AzureConnectorQuery() = default;
  AWS_OBSERVABILITYADMIN_API AzureConnectorQuery(Aws::Utils::Json::JsonView jsonValue);
  AWS_OBSERVABILITYADMIN_API AzureConnectorQuery& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_OBSERVABILITYADMIN_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Lists Azure management groups.</p>
   */
  inline const AzureManagementGroupsQuery& GetManagementGroups() const { return m_managementGroups; }
  inline bool ManagementGroupsHasBeenSet() const { return m_managementGroupsHasBeenSet; }
  template <typename ManagementGroupsT = AzureManagementGroupsQuery>
  void SetManagementGroups(ManagementGroupsT&& value) {
    m_managementGroupsHasBeenSet = true;
    m_managementGroups = std::forward<ManagementGroupsT>(value);
  }
  template <typename ManagementGroupsT = AzureManagementGroupsQuery>
  AzureConnectorQuery& WithManagementGroups(ManagementGroupsT&& value) {
    SetManagementGroups(std::forward<ManagementGroupsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Lists Azure subscriptions.</p>
   */
  inline const AzureSubscriptionsQuery& GetSubscriptions() const { return m_subscriptions; }
  inline bool SubscriptionsHasBeenSet() const { return m_subscriptionsHasBeenSet; }
  template <typename SubscriptionsT = AzureSubscriptionsQuery>
  void SetSubscriptions(SubscriptionsT&& value) {
    m_subscriptionsHasBeenSet = true;
    m_subscriptions = std::forward<SubscriptionsT>(value);
  }
  template <typename SubscriptionsT = AzureSubscriptionsQuery>
  AzureConnectorQuery& WithSubscriptions(SubscriptionsT&& value) {
    SetSubscriptions(std::forward<SubscriptionsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Lists the Azure resource types that have resources in scope.</p>
   */
  inline const AzureResourceTypesQuery& GetResourceTypes() const { return m_resourceTypes; }
  inline bool ResourceTypesHasBeenSet() const { return m_resourceTypesHasBeenSet; }
  template <typename ResourceTypesT = AzureResourceTypesQuery>
  void SetResourceTypes(ResourceTypesT&& value) {
    m_resourceTypesHasBeenSet = true;
    m_resourceTypes = std::forward<ResourceTypesT>(value);
  }
  template <typename ResourceTypesT = AzureResourceTypesQuery>
  AzureConnectorQuery& WithResourceTypes(ResourceTypesT&& value) {
    SetResourceTypes(std::forward<ResourceTypesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Lists the Azure Regions that have resources in scope.</p>
   */
  inline const AzureRegionsQuery& GetRegions() const { return m_regions; }
  inline bool RegionsHasBeenSet() const { return m_regionsHasBeenSet; }
  template <typename RegionsT = AzureRegionsQuery>
  void SetRegions(RegionsT&& value) {
    m_regionsHasBeenSet = true;
    m_regions = std::forward<RegionsT>(value);
  }
  template <typename RegionsT = AzureRegionsQuery>
  AzureConnectorQuery& WithRegions(RegionsT&& value) {
    SetRegions(std::forward<RegionsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Lists Azure resources.</p>
   */
  inline const AzureResourceIdsQuery& GetResourceIds() const { return m_resourceIds; }
  inline bool ResourceIdsHasBeenSet() const { return m_resourceIdsHasBeenSet; }
  template <typename ResourceIdsT = AzureResourceIdsQuery>
  void SetResourceIds(ResourceIdsT&& value) {
    m_resourceIdsHasBeenSet = true;
    m_resourceIds = std::forward<ResourceIdsT>(value);
  }
  template <typename ResourceIdsT = AzureResourceIdsQuery>
  AzureConnectorQuery& WithResourceIds(ResourceIdsT&& value) {
    SetResourceIds(std::forward<ResourceIdsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Lists Azure Event Hubs.</p>
   */
  inline const AzureEventHubsQuery& GetEventHubs() const { return m_eventHubs; }
  inline bool EventHubsHasBeenSet() const { return m_eventHubsHasBeenSet; }
  template <typename EventHubsT = AzureEventHubsQuery>
  void SetEventHubs(EventHubsT&& value) {
    m_eventHubsHasBeenSet = true;
    m_eventHubs = std::forward<EventHubsT>(value);
  }
  template <typename EventHubsT = AzureEventHubsQuery>
  AzureConnectorQuery& WithEventHubs(EventHubsT&& value) {
    SetEventHubs(std::forward<EventHubsT>(value));
    return *this;
  }
  ///@}
 private:
  AzureManagementGroupsQuery m_managementGroups;

  AzureSubscriptionsQuery m_subscriptions;

  AzureResourceTypesQuery m_resourceTypes;

  AzureRegionsQuery m_regions;

  AzureResourceIdsQuery m_resourceIds;

  AzureEventHubsQuery m_eventHubs;
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
