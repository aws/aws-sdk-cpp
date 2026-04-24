/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/timestream-influxdb/TimestreamInfluxDBRequest.h>
#include <aws/timestream-influxdb/TimestreamInfluxDB_EXPORTS.h>

#include <utility>

namespace Aws {
namespace TimestreamInfluxDB {
namespace Model {

/**
 */
class RebootDbClusterRequest : public TimestreamInfluxDBRequest {
 public:
  AWS_TIMESTREAMINFLUXDB_API RebootDbClusterRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "RebootDbCluster"; }

  AWS_TIMESTREAMINFLUXDB_API Aws::String SerializePayload() const override;

  AWS_TIMESTREAMINFLUXDB_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>Service-generated unique identifier of the DB cluster to reboot.</p>
   */
  inline const Aws::String& GetDbClusterId() const { return m_dbClusterId; }
  inline bool DbClusterIdHasBeenSet() const { return m_dbClusterIdHasBeenSet; }
  template <typename DbClusterIdT = Aws::String>
  void SetDbClusterId(DbClusterIdT&& value) {
    m_dbClusterIdHasBeenSet = true;
    m_dbClusterId = std::forward<DbClusterIdT>(value);
  }
  template <typename DbClusterIdT = Aws::String>
  RebootDbClusterRequest& WithDbClusterId(DbClusterIdT&& value) {
    SetDbClusterId(std::forward<DbClusterIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of service-generated unique DB Instance Ids belonging to the DB
   * Cluster to reboot.</p>
   */
  inline const Aws::Vector<Aws::String>& GetInstanceIds() const { return m_instanceIds; }
  inline bool InstanceIdsHasBeenSet() const { return m_instanceIdsHasBeenSet; }
  template <typename InstanceIdsT = Aws::Vector<Aws::String>>
  void SetInstanceIds(InstanceIdsT&& value) {
    m_instanceIdsHasBeenSet = true;
    m_instanceIds = std::forward<InstanceIdsT>(value);
  }
  template <typename InstanceIdsT = Aws::Vector<Aws::String>>
  RebootDbClusterRequest& WithInstanceIds(InstanceIdsT&& value) {
    SetInstanceIds(std::forward<InstanceIdsT>(value));
    return *this;
  }
  template <typename InstanceIdsT = Aws::String>
  RebootDbClusterRequest& AddInstanceIds(InstanceIdsT&& value) {
    m_instanceIdsHasBeenSet = true;
    m_instanceIds.emplace_back(std::forward<InstanceIdsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_dbClusterId;

  Aws::Vector<Aws::String> m_instanceIds;
  bool m_dbClusterIdHasBeenSet = false;
  bool m_instanceIdsHasBeenSet = false;
};

}  // namespace Model
}  // namespace TimestreamInfluxDB
}  // namespace Aws
