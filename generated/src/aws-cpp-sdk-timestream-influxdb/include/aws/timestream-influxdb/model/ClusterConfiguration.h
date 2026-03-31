/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/timestream-influxdb/TimestreamInfluxDB_EXPORTS.h>

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
 * <p>Configuration for node modes in the DbCluster.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-influxdb-2023-01-27/ClusterConfiguration">AWS
 * API Reference</a></p>
 */
class ClusterConfiguration {
 public:
  AWS_TIMESTREAMINFLUXDB_API ClusterConfiguration() = default;
  AWS_TIMESTREAMINFLUXDB_API ClusterConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_TIMESTREAMINFLUXDB_API ClusterConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_TIMESTREAMINFLUXDB_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The number of instances in the DbCluster which can both ingest and query.</p>
   */
  inline int GetIngestQueryInstances() const { return m_ingestQueryInstances; }
  inline bool IngestQueryInstancesHasBeenSet() const { return m_ingestQueryInstancesHasBeenSet; }
  inline void SetIngestQueryInstances(int value) {
    m_ingestQueryInstancesHasBeenSet = true;
    m_ingestQueryInstances = value;
  }
  inline ClusterConfiguration& WithIngestQueryInstances(int value) {
    SetIngestQueryInstances(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of instances in the DbCluster which can only query.</p>
   */
  inline int GetQueryOnlyInstances() const { return m_queryOnlyInstances; }
  inline bool QueryOnlyInstancesHasBeenSet() const { return m_queryOnlyInstancesHasBeenSet; }
  inline void SetQueryOnlyInstances(int value) {
    m_queryOnlyInstancesHasBeenSet = true;
    m_queryOnlyInstances = value;
  }
  inline ClusterConfiguration& WithQueryOnlyInstances(int value) {
    SetQueryOnlyInstances(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates if the compactor instance is a standalone instance or not.</p>
   */
  inline bool GetDedicatedCompactor() const { return m_dedicatedCompactor; }
  inline bool DedicatedCompactorHasBeenSet() const { return m_dedicatedCompactorHasBeenSet; }
  inline void SetDedicatedCompactor(bool value) {
    m_dedicatedCompactorHasBeenSet = true;
    m_dedicatedCompactor = value;
  }
  inline ClusterConfiguration& WithDedicatedCompactor(bool value) {
    SetDedicatedCompactor(value);
    return *this;
  }
  ///@}
 private:
  int m_ingestQueryInstances{0};

  int m_queryOnlyInstances{0};

  bool m_dedicatedCompactor{false};
  bool m_ingestQueryInstancesHasBeenSet = false;
  bool m_queryOnlyInstancesHasBeenSet = false;
  bool m_dedicatedCompactorHasBeenSet = false;
};

}  // namespace Model
}  // namespace TimestreamInfluxDB
}  // namespace Aws
