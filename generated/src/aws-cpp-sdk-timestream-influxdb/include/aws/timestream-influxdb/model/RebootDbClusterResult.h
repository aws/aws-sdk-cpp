/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/timestream-influxdb/TimestreamInfluxDB_EXPORTS.h>
#include <aws/timestream-influxdb/model/ClusterStatus.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace TimestreamInfluxDB {
namespace Model {
class RebootDbClusterResult {
 public:
  AWS_TIMESTREAMINFLUXDB_API RebootDbClusterResult() = default;
  AWS_TIMESTREAMINFLUXDB_API RebootDbClusterResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_TIMESTREAMINFLUXDB_API RebootDbClusterResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The status of the DB Cluster.</p>
   */
  inline ClusterStatus GetDbClusterStatus() const { return m_dbClusterStatus; }
  inline void SetDbClusterStatus(ClusterStatus value) {
    m_dbClusterStatusHasBeenSet = true;
    m_dbClusterStatus = value;
  }
  inline RebootDbClusterResult& WithDbClusterStatus(ClusterStatus value) {
    SetDbClusterStatus(value);
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  RebootDbClusterResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  ClusterStatus m_dbClusterStatus{ClusterStatus::NOT_SET};

  Aws::String m_requestId;
  bool m_dbClusterStatusHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace TimestreamInfluxDB
}  // namespace Aws
