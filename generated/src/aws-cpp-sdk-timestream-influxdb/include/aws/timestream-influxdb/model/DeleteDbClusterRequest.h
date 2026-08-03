/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/timestream-influxdb/TimestreamInfluxDBRequest.h>
#include <aws/timestream-influxdb/TimestreamInfluxDB_EXPORTS.h>

#include <utility>

namespace Aws {
namespace TimestreamInfluxDB {
namespace Model {

/**
 */
class DeleteDbClusterRequest : public TimestreamInfluxDBRequest {
 public:
  AWS_TIMESTREAMINFLUXDB_API DeleteDbClusterRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "DeleteDbCluster"; }

  AWS_TIMESTREAMINFLUXDB_API Aws::String SerializePayload() const override;

  AWS_TIMESTREAMINFLUXDB_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>Service-generated unique identifier of the DB cluster.</p>
   */
  inline const Aws::String& GetDbClusterId() const { return m_dbClusterId; }
  inline bool DbClusterIdHasBeenSet() const { return m_dbClusterIdHasBeenSet; }
  template <typename DbClusterIdT = Aws::String>
  void SetDbClusterId(DbClusterIdT&& value) {
    m_dbClusterIdHasBeenSet = true;
    m_dbClusterId = std::forward<DbClusterIdT>(value);
  }
  template <typename DbClusterIdT = Aws::String>
  DeleteDbClusterRequest& WithDbClusterId(DbClusterIdT&& value) {
    SetDbClusterId(std::forward<DbClusterIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether to retain automated backups after the DB cluster is
   * deleted. If set to true, automated backups are not deleted and can be restored
   * later.</p>
   */
  inline bool GetRetainAutomatedBackups() const { return m_retainAutomatedBackups; }
  inline bool RetainAutomatedBackupsHasBeenSet() const { return m_retainAutomatedBackupsHasBeenSet; }
  inline void SetRetainAutomatedBackups(bool value) {
    m_retainAutomatedBackupsHasBeenSet = true;
    m_retainAutomatedBackups = value;
  }
  inline DeleteDbClusterRequest& WithRetainAutomatedBackups(bool value) {
    SetRetainAutomatedBackups(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_dbClusterId;

  bool m_retainAutomatedBackups{false};
  bool m_dbClusterIdHasBeenSet = false;
  bool m_retainAutomatedBackupsHasBeenSet = false;
};

}  // namespace Model
}  // namespace TimestreamInfluxDB
}  // namespace Aws
