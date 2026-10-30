/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/timestream-influxdb/TimestreamInfluxDB_EXPORTS.h>
#include <aws/timestream-influxdb/model/InfluxDBv3EnterpriseDeploymentConfiguration.h>

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
 * <p>Defines the compute topology of a Timestream for InfluxDB cluster as a set of
 * node groups for a specific database engine. For InfluxDB 3 Enterprise, use the
 * InfluxDBv3Enterprise member to allocate compute per function: ingest, query,
 * compaction, and processing.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-influxdb-2023-01-27/DeploymentConfiguration">AWS
 * API Reference</a></p>
 */
class DeploymentConfiguration {
 public:
  AWS_TIMESTREAMINFLUXDB_API DeploymentConfiguration() = default;
  AWS_TIMESTREAMINFLUXDB_API DeploymentConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_TIMESTREAMINFLUXDB_API DeploymentConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_TIMESTREAMINFLUXDB_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The deployment configuration for an InfluxDB 3 Enterprise cluster.</p>
   */
  inline const InfluxDBv3EnterpriseDeploymentConfiguration& GetInfluxDBv3Enterprise() const { return m_influxDBv3Enterprise; }
  inline bool InfluxDBv3EnterpriseHasBeenSet() const { return m_influxDBv3EnterpriseHasBeenSet; }
  template <typename InfluxDBv3EnterpriseT = InfluxDBv3EnterpriseDeploymentConfiguration>
  void SetInfluxDBv3Enterprise(InfluxDBv3EnterpriseT&& value) {
    m_influxDBv3EnterpriseHasBeenSet = true;
    m_influxDBv3Enterprise = std::forward<InfluxDBv3EnterpriseT>(value);
  }
  template <typename InfluxDBv3EnterpriseT = InfluxDBv3EnterpriseDeploymentConfiguration>
  DeploymentConfiguration& WithInfluxDBv3Enterprise(InfluxDBv3EnterpriseT&& value) {
    SetInfluxDBv3Enterprise(std::forward<InfluxDBv3EnterpriseT>(value));
    return *this;
  }
  ///@}
 private:
  InfluxDBv3EnterpriseDeploymentConfiguration m_influxDBv3Enterprise;
  bool m_influxDBv3EnterpriseHasBeenSet = false;
};

}  // namespace Model
}  // namespace TimestreamInfluxDB
}  // namespace Aws
