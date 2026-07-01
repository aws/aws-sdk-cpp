/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>
#include <aws/network-firewall/model/ContainerAttribute.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace NetworkFirewall {
namespace Model {

/**
 * <p>Defines a container cluster to monitor, along with optional attribute filters
 * that narrow the scope of monitored containers within the cluster.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/ContainerMonitoringConfiguration">AWS
 * API Reference</a></p>
 */
class ContainerMonitoringConfiguration {
 public:
  AWS_NETWORKFIREWALL_API ContainerMonitoringConfiguration() = default;
  AWS_NETWORKFIREWALL_API ContainerMonitoringConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_NETWORKFIREWALL_API ContainerMonitoringConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_NETWORKFIREWALL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the container cluster to monitor.</p>
   */
  inline const Aws::String& GetClusterArn() const { return m_clusterArn; }
  inline bool ClusterArnHasBeenSet() const { return m_clusterArnHasBeenSet; }
  template <typename ClusterArnT = Aws::String>
  void SetClusterArn(ClusterArnT&& value) {
    m_clusterArnHasBeenSet = true;
    m_clusterArn = std::forward<ClusterArnT>(value);
  }
  template <typename ClusterArnT = Aws::String>
  ContainerMonitoringConfiguration& WithClusterArn(ClusterArnT&& value) {
    SetClusterArn(std::forward<ClusterArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of key-value pairs that filter which containers within the cluster are
   * monitored. Only containers that match the specified attributes are included.</p>
   */
  inline const Aws::Vector<ContainerAttribute>& GetAttributeFilters() const { return m_attributeFilters; }
  inline bool AttributeFiltersHasBeenSet() const { return m_attributeFiltersHasBeenSet; }
  template <typename AttributeFiltersT = Aws::Vector<ContainerAttribute>>
  void SetAttributeFilters(AttributeFiltersT&& value) {
    m_attributeFiltersHasBeenSet = true;
    m_attributeFilters = std::forward<AttributeFiltersT>(value);
  }
  template <typename AttributeFiltersT = Aws::Vector<ContainerAttribute>>
  ContainerMonitoringConfiguration& WithAttributeFilters(AttributeFiltersT&& value) {
    SetAttributeFilters(std::forward<AttributeFiltersT>(value));
    return *this;
  }
  template <typename AttributeFiltersT = ContainerAttribute>
  ContainerMonitoringConfiguration& AddAttributeFilters(AttributeFiltersT&& value) {
    m_attributeFiltersHasBeenSet = true;
    m_attributeFilters.emplace_back(std::forward<AttributeFiltersT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_clusterArn;

  Aws::Vector<ContainerAttribute> m_attributeFilters;
  bool m_clusterArnHasBeenSet = false;
  bool m_attributeFiltersHasBeenSet = false;
};

}  // namespace Model
}  // namespace NetworkFirewall
}  // namespace Aws
