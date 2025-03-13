/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/timestream-influxdb/TimestreamInfluxDB_EXPORTS.h>
#include <aws/timestream-influxdb/TimestreamInfluxDBRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace TimestreamInfluxDB
{
namespace Model
{

  /**
   */
  class GetDbClusterRequest : public TimestreamInfluxDBRequest
  {
  public:
    AWS_TIMESTREAMINFLUXDB_API GetDbClusterRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetDbCluster"; }

    AWS_TIMESTREAMINFLUXDB_API Aws::String SerializePayload() const override;

    AWS_TIMESTREAMINFLUXDB_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Service-generated unique identifier of the DB cluster to retrieve.</p>
     */
    inline const Aws::String& GetDbClusterId() const { return m_dbClusterId; }
    inline bool DbClusterIdHasBeenSet() const { return m_dbClusterIdHasBeenSet; }
    template<typename DbClusterIdT = Aws::String>
    void SetDbClusterId(DbClusterIdT&& value) { m_dbClusterIdHasBeenSet = true; m_dbClusterId = std::forward<DbClusterIdT>(value); }
    template<typename DbClusterIdT = Aws::String>
    GetDbClusterRequest& WithDbClusterId(DbClusterIdT&& value) { SetDbClusterId(std::forward<DbClusterIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_dbClusterId;
    bool m_dbClusterIdHasBeenSet = false;
  };

} // namespace Model
} // namespace TimestreamInfluxDB
} // namespace Aws
