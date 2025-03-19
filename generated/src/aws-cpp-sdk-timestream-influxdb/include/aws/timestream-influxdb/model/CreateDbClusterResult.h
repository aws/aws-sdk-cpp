/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/timestream-influxdb/TimestreamInfluxDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/timestream-influxdb/model/ClusterStatus.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace TimestreamInfluxDB
{
namespace Model
{
  class CreateDbClusterResult
  {
  public:
    AWS_TIMESTREAMINFLUXDB_API CreateDbClusterResult() = default;
    AWS_TIMESTREAMINFLUXDB_API CreateDbClusterResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TIMESTREAMINFLUXDB_API CreateDbClusterResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A service-generated unique identifier.</p>
     */
    inline const Aws::String& GetDbClusterId() const { return m_dbClusterId; }
    template<typename DbClusterIdT = Aws::String>
    void SetDbClusterId(DbClusterIdT&& value) { m_dbClusterIdHasBeenSet = true; m_dbClusterId = std::forward<DbClusterIdT>(value); }
    template<typename DbClusterIdT = Aws::String>
    CreateDbClusterResult& WithDbClusterId(DbClusterIdT&& value) { SetDbClusterId(std::forward<DbClusterIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the DB cluster.</p>
     */
    inline ClusterStatus GetDbClusterStatus() const { return m_dbClusterStatus; }
    inline void SetDbClusterStatus(ClusterStatus value) { m_dbClusterStatusHasBeenSet = true; m_dbClusterStatus = value; }
    inline CreateDbClusterResult& WithDbClusterStatus(ClusterStatus value) { SetDbClusterStatus(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateDbClusterResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_dbClusterId;
    bool m_dbClusterIdHasBeenSet = false;

    ClusterStatus m_dbClusterStatus{ClusterStatus::NOT_SET};
    bool m_dbClusterStatusHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace TimestreamInfluxDB
} // namespace Aws
