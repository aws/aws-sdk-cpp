/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/observabilityadmin/ObservabilityAdmin_EXPORTS.h>
#include <aws/observabilityadmin/model/AzureQueryScope.h>

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
 * <p>A query that lists Azure Event Hubs.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/observabilityadmin-2018-05-10/AzureEventHubsQuery">AWS
 * API Reference</a></p>
 */
class AzureEventHubsQuery {
 public:
  AWS_OBSERVABILITYADMIN_API AzureEventHubsQuery() = default;
  AWS_OBSERVABILITYADMIN_API AzureEventHubsQuery(Aws::Utils::Json::JsonView jsonValue);
  AWS_OBSERVABILITYADMIN_API AzureEventHubsQuery& operator=(Aws::Utils::Json::JsonView jsonValue);
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
  AzureEventHubsQuery& WithScope(ScopeT&& value) {
    SetScope(std::forward<ScopeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Limits the results to Event Hubs in this namespace.</p>
   */
  inline const Aws::String& GetNamespaceName() const { return m_namespaceName; }
  inline bool NamespaceNameHasBeenSet() const { return m_namespaceNameHasBeenSet; }
  template <typename NamespaceNameT = Aws::String>
  void SetNamespaceName(NamespaceNameT&& value) {
    m_namespaceNameHasBeenSet = true;
    m_namespaceName = std::forward<NamespaceNameT>(value);
  }
  template <typename NamespaceNameT = Aws::String>
  AzureEventHubsQuery& WithNamespaceName(NamespaceNameT&& value) {
    SetNamespaceName(std::forward<NamespaceNameT>(value));
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
  AzureEventHubsQuery& WithRegion(RegionT&& value) {
    SetRegion(std::forward<RegionT>(value));
    return *this;
  }
  ///@}
 private:
  AzureQueryScope m_scope;

  Aws::String m_namespaceName;

  Aws::String m_region;
  bool m_scopeHasBeenSet = false;
  bool m_namespaceNameHasBeenSet = false;
  bool m_regionHasBeenSet = false;
};

}  // namespace Model
}  // namespace ObservabilityAdmin
}  // namespace Aws
