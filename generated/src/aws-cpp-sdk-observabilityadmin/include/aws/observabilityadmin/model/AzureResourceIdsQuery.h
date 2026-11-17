/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/observabilityadmin/ObservabilityAdmin_EXPORTS.h>
#include <aws/observabilityadmin/model/AzureQueryScope.h>
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
 * <p>A query that lists Azure resources.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/observabilityadmin-2018-05-10/AzureResourceIdsQuery">AWS
 * API Reference</a></p>
 */
class AzureResourceIdsQuery {
 public:
  AWS_OBSERVABILITYADMIN_API AzureResourceIdsQuery() = default;
  AWS_OBSERVABILITYADMIN_API AzureResourceIdsQuery(Aws::Utils::Json::JsonView jsonValue);
  AWS_OBSERVABILITYADMIN_API AzureResourceIdsQuery& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_OBSERVABILITYADMIN_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Limits the query to a management group or to specific subscriptions.</p>
   */
  inline const AzureQueryScope& GetScope() const { return m_scope; }
  inline bool ScopeHasBeenSet() const { return m_scopeHasBeenSet; }
  template <typename ScopeT = AzureQueryScope>
  void SetScope(ScopeT&& value) {
    m_scopeHasBeenSet = true;
    m_scope = std::forward<ScopeT>(value);
  }
  template <typename ScopeT = AzureQueryScope>
  AzureResourceIdsQuery& WithScope(ScopeT&& value) {
    SetScope(std::forward<ScopeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Limits the results to one Azure resource type, for example
   * <code>Microsoft.Compute/virtualMachines</code>.</p>
   */
  inline const Aws::String& GetResourceType() const { return m_resourceType; }
  inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
  template <typename ResourceTypeT = Aws::String>
  void SetResourceType(ResourceTypeT&& value) {
    m_resourceTypeHasBeenSet = true;
    m_resourceType = std::forward<ResourceTypeT>(value);
  }
  template <typename ResourceTypeT = Aws::String>
  AzureResourceIdsQuery& WithResourceType(ResourceTypeT&& value) {
    SetResourceType(std::forward<ResourceTypeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Limits the results to one Azure Region, for example <code>eastus</code>.</p>
   */
  inline const Aws::String& GetRegion() const { return m_region; }
  inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }
  template <typename RegionT = Aws::String>
  void SetRegion(RegionT&& value) {
    m_regionHasBeenSet = true;
    m_region = std::forward<RegionT>(value);
  }
  template <typename RegionT = Aws::String>
  AzureResourceIdsQuery& WithRegion(RegionT&& value) {
    SetRegion(std::forward<RegionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Limits the results to resources that have these tags. A resource must match
   * the filters for all tag keys, and any of the values for each key. The service
   * matches tag keys and values case-insensitively, as Azure does.</p>
   */
  inline const Aws::Vector<TagFilter>& GetTagFilters() const { return m_tagFilters; }
  inline bool TagFiltersHasBeenSet() const { return m_tagFiltersHasBeenSet; }
  template <typename TagFiltersT = Aws::Vector<TagFilter>>
  void SetTagFilters(TagFiltersT&& value) {
    m_tagFiltersHasBeenSet = true;
    m_tagFilters = std::forward<TagFiltersT>(value);
  }
  template <typename TagFiltersT = Aws::Vector<TagFilter>>
  AzureResourceIdsQuery& WithTagFilters(TagFiltersT&& value) {
    SetTagFilters(std::forward<TagFiltersT>(value));
    return *this;
  }
  template <typename TagFiltersT = TagFilter>
  AzureResourceIdsQuery& AddTagFilters(TagFiltersT&& value) {
    m_tagFiltersHasBeenSet = true;
    m_tagFilters.emplace_back(std::forward<TagFiltersT>(value));
    return *this;
  }
  ///@}
 private:
  AzureQueryScope m_scope;

  Aws::String m_resourceType;

  Aws::String m_region;

  Aws::Vector<TagFilter> m_tagFilters;
  bool m_scopeHasBeenSet = false;
  bool m_resourceTypeHasBeenSet = false;
  bool m_regionHasBeenSet = false;
  bool m_tagFiltersHasBeenSet = false;
};

}  // namespace Model
}  // namespace ObservabilityAdmin
}  // namespace Aws
