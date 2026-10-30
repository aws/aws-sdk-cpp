/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/timestream-influxdb/TimestreamInfluxDB_EXPORTS.h>
#include <aws/timestream-influxdb/model/DbInstanceType.h>
#include <aws/timestream-influxdb/model/InstanceMode.h>

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
 * <p>A group of one or more nodes in a Timestream for InfluxDB cluster that share
 * the same instance modes and instance type. A cluster's compute topology is
 * defined as a list of node groups.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-influxdb-2023-01-27/NodeGroup">AWS
 * API Reference</a></p>
 */
class NodeGroup {
 public:
  AWS_TIMESTREAMINFLUXDB_API NodeGroup() = default;
  AWS_TIMESTREAMINFLUXDB_API NodeGroup(Aws::Utils::Json::JsonView jsonValue);
  AWS_TIMESTREAMINFLUXDB_API NodeGroup& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_TIMESTREAMINFLUXDB_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The functions that the nodes in this group perform. Provide from 1 to 4
   * unique modes. Valid modes:</p> <ul> <li> <p>INGEST – Nodes in this mode ingest
   * data. Across all node groups, INGEST nodes must total between 1 and 4.</p> </li>
   * <li> <p>QUERY – Nodes in this mode query data. Across all node groups, QUERY
   * nodes must total between 0 and 14.</p> </li> <li> <p>COMPACT – Nodes in this
   * mode compact data. Exactly one node across all node groups must have this mode.
   * If the cluster has more than three non-compaction nodes, place the COMPACT node
   * in its own dedicated node group.</p> </li> <li> <p>PROCESS – Nodes in this mode
   * process data with the processing engine.</p> </li> </ul>
   */
  inline const Aws::Vector<InstanceMode>& GetInstanceModes() const { return m_instanceModes; }
  inline bool InstanceModesHasBeenSet() const { return m_instanceModesHasBeenSet; }
  template <typename InstanceModesT = Aws::Vector<InstanceMode>>
  void SetInstanceModes(InstanceModesT&& value) {
    m_instanceModesHasBeenSet = true;
    m_instanceModes = std::forward<InstanceModesT>(value);
  }
  template <typename InstanceModesT = Aws::Vector<InstanceMode>>
  NodeGroup& WithInstanceModes(InstanceModesT&& value) {
    SetInstanceModes(std::forward<InstanceModesT>(value));
    return *this;
  }
  inline NodeGroup& AddInstanceModes(InstanceMode value) {
    m_instanceModesHasBeenSet = true;
    m_instanceModes.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Timestream for InfluxDB DB instance type to run InfluxDB on for the nodes
   * in this group.</p>
   */
  inline DbInstanceType GetInstanceType() const { return m_instanceType; }
  inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }
  inline void SetInstanceType(DbInstanceType value) {
    m_instanceTypeHasBeenSet = true;
    m_instanceType = value;
  }
  inline NodeGroup& WithInstanceType(DbInstanceType value) {
    SetInstanceType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of nodes in this group. Valid values are 1 to 13.</p>
   */
  inline int GetCount() const { return m_count; }
  inline bool CountHasBeenSet() const { return m_countHasBeenSet; }
  inline void SetCount(int value) {
    m_countHasBeenSet = true;
    m_count = value;
  }
  inline NodeGroup& WithCount(int value) {
    SetCount(value);
    return *this;
  }
  ///@}
 private:
  Aws::Vector<InstanceMode> m_instanceModes;

  DbInstanceType m_instanceType{DbInstanceType::NOT_SET};

  int m_count{0};
  bool m_instanceModesHasBeenSet = false;
  bool m_instanceTypeHasBeenSet = false;
  bool m_countHasBeenSet = false;
};

}  // namespace Model
}  // namespace TimestreamInfluxDB
}  // namespace Aws
