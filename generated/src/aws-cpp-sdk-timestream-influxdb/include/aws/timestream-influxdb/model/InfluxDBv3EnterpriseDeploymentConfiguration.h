/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/timestream-influxdb/TimestreamInfluxDB_EXPORTS.h>
#include <aws/timestream-influxdb/model/NodeGroup.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace TimestreamInfluxDB {
namespace Model {

/**
 * <p>The compute topology for an InfluxDB 3 Enterprise cluster, expressed as a
 * list of node groups.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-influxdb-2023-01-27/InfluxDBv3EnterpriseDeploymentConfiguration">AWS
 * API Reference</a></p>
 */
class InfluxDBv3EnterpriseDeploymentConfiguration {
 public:
  AWS_TIMESTREAMINFLUXDB_API InfluxDBv3EnterpriseDeploymentConfiguration() = default;
  AWS_TIMESTREAMINFLUXDB_API InfluxDBv3EnterpriseDeploymentConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_TIMESTREAMINFLUXDB_API InfluxDBv3EnterpriseDeploymentConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_TIMESTREAMINFLUXDB_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The node groups that make up the cluster. Across all node groups, the cluster
   * must include 1 to 4 nodes with the INGEST mode, 0 to 14 nodes with the QUERY
   * mode, and exactly one node with the COMPACT mode.</p>
   */
  inline const Aws::Vector<NodeGroup>& GetNodeGroups() const { return m_nodeGroups; }
  inline bool NodeGroupsHasBeenSet() const { return m_nodeGroupsHasBeenSet; }
  template <typename NodeGroupsT = Aws::Vector<NodeGroup>>
  void SetNodeGroups(NodeGroupsT&& value) {
    m_nodeGroupsHasBeenSet = true;
    m_nodeGroups = std::forward<NodeGroupsT>(value);
  }
  template <typename NodeGroupsT = Aws::Vector<NodeGroup>>
  InfluxDBv3EnterpriseDeploymentConfiguration& WithNodeGroups(NodeGroupsT&& value) {
    SetNodeGroups(std::forward<NodeGroupsT>(value));
    return *this;
  }
  template <typename NodeGroupsT = NodeGroup>
  InfluxDBv3EnterpriseDeploymentConfiguration& AddNodeGroups(NodeGroupsT&& value) {
    m_nodeGroupsHasBeenSet = true;
    m_nodeGroups.emplace_back(std::forward<NodeGroupsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<NodeGroup> m_nodeGroups;
  bool m_nodeGroupsHasBeenSet = false;
};

}  // namespace Model
}  // namespace TimestreamInfluxDB
}  // namespace Aws
