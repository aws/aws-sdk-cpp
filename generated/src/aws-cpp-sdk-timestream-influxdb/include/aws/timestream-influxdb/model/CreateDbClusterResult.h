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
    AWS_TIMESTREAMINFLUXDB_API CreateDbClusterResult();
    AWS_TIMESTREAMINFLUXDB_API CreateDbClusterResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TIMESTREAMINFLUXDB_API CreateDbClusterResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A service-generated unique identifier.</p>
     */
    inline const Aws::String& GetDbClusterId() const{ return m_dbClusterId; }
    inline void SetDbClusterId(const Aws::String& value) { m_dbClusterId = value; }
    inline void SetDbClusterId(Aws::String&& value) { m_dbClusterId = std::move(value); }
    inline void SetDbClusterId(const char* value) { m_dbClusterId.assign(value); }
    inline CreateDbClusterResult& WithDbClusterId(const Aws::String& value) { SetDbClusterId(value); return *this;}
    inline CreateDbClusterResult& WithDbClusterId(Aws::String&& value) { SetDbClusterId(std::move(value)); return *this;}
    inline CreateDbClusterResult& WithDbClusterId(const char* value) { SetDbClusterId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the DB cluster.</p>
     */
    inline const ClusterStatus& GetDbClusterStatus() const{ return m_dbClusterStatus; }
    inline void SetDbClusterStatus(const ClusterStatus& value) { m_dbClusterStatus = value; }
    inline void SetDbClusterStatus(ClusterStatus&& value) { m_dbClusterStatus = std::move(value); }
    inline CreateDbClusterResult& WithDbClusterStatus(const ClusterStatus& value) { SetDbClusterStatus(value); return *this;}
    inline CreateDbClusterResult& WithDbClusterStatus(ClusterStatus&& value) { SetDbClusterStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateDbClusterResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateDbClusterResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateDbClusterResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_dbClusterId;

    ClusterStatus m_dbClusterStatus;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace TimestreamInfluxDB
} // namespace Aws
