/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/observabilityadmin/ObservabilityAdmin_EXPORTS.h>
#include <aws/observabilityadmin/model/AzureResourceIdScope.h>
#include <aws/observabilityadmin/model/AzureSubscriptionScope.h>
#include <aws/observabilityadmin/model/TagFilter.h>

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
 * <p>The Azure resources to collect telemetry from. These are the resources found
 * by <code>Subscriptions</code>, <code>Regions</code>, and
 * <code>ResourceTypes</code>, optionally narrowed by <code>TagFilters</code>, plus
 * any resources listed in <code>Resources</code>. You can specify:</p> <ul> <li>
 * <p> <code>Subscriptions</code>, <code>Regions</code>, and
 * <code>ResourceTypes</code> together</p> </li> <li> <p> <code>Resources</code>
 * </p> </li> <li> <p>Both</p> </li> </ul><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/observabilityadmin-2018-05-10/AzureScope">AWS
 * API Reference</a></p>
 */
class AzureScope {
 public:
  AWS_OBSERVABILITYADMIN_API AzureScope() = default;
  AWS_OBSERVABILITYADMIN_API AzureScope(Aws::Utils::Json::JsonView jsonValue);
  AWS_OBSERVABILITYADMIN_API AzureScope& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_OBSERVABILITYADMIN_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The subscriptions to find resources in: all subscriptions that the connector
   * can read, or a list of subscriptions. Required when you use <code>Regions</code>
   * and <code>ResourceTypes</code>.</p>
   */
  inline const AzureSubscriptionScope& GetSubscriptions() const { return m_subscriptions; }
  inline bool SubscriptionsHasBeenSet() const { return m_subscriptionsHasBeenSet; }
  template <typename SubscriptionsT = AzureSubscriptionScope>
  void SetSubscriptions(SubscriptionsT&& value) {
    m_subscriptionsHasBeenSet = true;
    m_subscriptions = std::forward<SubscriptionsT>(value);
  }
  template <typename SubscriptionsT = AzureSubscriptionScope>
  AzureScope& WithSubscriptions(SubscriptionsT&& value) {
    SetSubscriptions(std::forward<SubscriptionsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Azure Regions to find resources in. Required when you use
   * <code>Subscriptions</code> and <code>ResourceTypes</code>.</p>
   */
  inline const Aws::Vector<Aws::String>& GetRegions() const { return m_regions; }
  inline bool RegionsHasBeenSet() const { return m_regionsHasBeenSet; }
  template <typename RegionsT = Aws::Vector<Aws::String>>
  void SetRegions(RegionsT&& value) {
    m_regionsHasBeenSet = true;
    m_regions = std::forward<RegionsT>(value);
  }
  template <typename RegionsT = Aws::Vector<Aws::String>>
  AzureScope& WithRegions(RegionsT&& value) {
    SetRegions(std::forward<RegionsT>(value));
    return *this;
  }
  template <typename RegionsT = Aws::String>
  AzureScope& AddRegions(RegionsT&& value) {
    m_regionsHasBeenSet = true;
    m_regions.emplace_back(std::forward<RegionsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Azure resource types to find. Required when you use
   * <code>Subscriptions</code> and <code>Regions</code>.</p>
   */
  inline const Aws::Vector<Aws::String>& GetResourceTypes() const { return m_resourceTypes; }
  inline bool ResourceTypesHasBeenSet() const { return m_resourceTypesHasBeenSet; }
  template <typename ResourceTypesT = Aws::Vector<Aws::String>>
  void SetResourceTypes(ResourceTypesT&& value) {
    m_resourceTypesHasBeenSet = true;
    m_resourceTypes = std::forward<ResourceTypesT>(value);
  }
  template <typename ResourceTypesT = Aws::Vector<Aws::String>>
  AzureScope& WithResourceTypes(ResourceTypesT&& value) {
    SetResourceTypes(std::forward<ResourceTypesT>(value));
    return *this;
  }
  template <typename ResourceTypesT = Aws::String>
  AzureScope& AddResourceTypes(ResourceTypesT&& value) {
    m_resourceTypesHasBeenSet = true;
    m_resourceTypes.emplace_back(std::forward<ResourceTypesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Limits the resources found by <code>Subscriptions</code>,
   * <code>Regions</code>, and <code>ResourceTypes</code> to those that have these
   * tags. You can specify up to 50 filters.</p>
   */
  inline const Aws::Vector<TagFilter>& GetTagFilters() const { return m_tagFilters; }
  inline bool TagFiltersHasBeenSet() const { return m_tagFiltersHasBeenSet; }
  template <typename TagFiltersT = Aws::Vector<TagFilter>>
  void SetTagFilters(TagFiltersT&& value) {
    m_tagFiltersHasBeenSet = true;
    m_tagFilters = std::forward<TagFiltersT>(value);
  }
  template <typename TagFiltersT = Aws::Vector<TagFilter>>
  AzureScope& WithTagFilters(TagFiltersT&& value) {
    SetTagFilters(std::forward<TagFiltersT>(value));
    return *this;
  }
  template <typename TagFiltersT = TagFilter>
  AzureScope& AddTagFilters(TagFiltersT&& value) {
    m_tagFiltersHasBeenSet = true;
    m_tagFilters.emplace_back(std::forward<TagFiltersT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specific Azure resources, listed by Azure Region.</p>
   */
  inline const Aws::Vector<AzureResourceIdScope>& GetResources() const { return m_resources; }
  inline bool ResourcesHasBeenSet() const { return m_resourcesHasBeenSet; }
  template <typename ResourcesT = Aws::Vector<AzureResourceIdScope>>
  void SetResources(ResourcesT&& value) {
    m_resourcesHasBeenSet = true;
    m_resources = std::forward<ResourcesT>(value);
  }
  template <typename ResourcesT = Aws::Vector<AzureResourceIdScope>>
  AzureScope& WithResources(ResourcesT&& value) {
    SetResources(std::forward<ResourcesT>(value));
    return *this;
  }
  template <typename ResourcesT = AzureResourceIdScope>
  AzureScope& AddResources(ResourcesT&& value) {
    m_resourcesHasBeenSet = true;
    m_resources.emplace_back(std::forward<ResourcesT>(value));
    return *this;
  }
  ///@}
 private:
  AzureSubscriptionScope m_subscriptions;

  Aws::Vector<Aws::String> m_regions;

  Aws::Vector<Aws::String> m_resourceTypes;

  Aws::Vector<TagFilter> m_tagFilters;

  Aws::Vector<AzureResourceIdScope> m_resources;
  bool m_subscriptionsHasBeenSet = false;
  bool m_regionsHasBeenSet = false;
  bool m_resourceTypesHasBeenSet = false;
  bool m_tagFiltersHasBeenSet = false;
  bool m_resourcesHasBeenSet = false;
};

}  // namespace Model
}  // namespace ObservabilityAdmin
}  // namespace Aws
