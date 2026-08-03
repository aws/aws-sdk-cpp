/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/timestream-influxdb/TimestreamInfluxDB_EXPORTS.h>
#include <aws/timestream-influxdb/model/EngineType.h>
#include <aws/timestream-influxdb/model/ResourceDeploymentType.h>
#include <aws/timestream-influxdb/model/ResourceType.h>
#include <aws/timestream-influxdb/model/RestoreStatus.h>

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
class RestoreFromDbBackupResult {
 public:
  AWS_TIMESTREAMINFLUXDB_API RestoreFromDbBackupResult() = default;
  AWS_TIMESTREAMINFLUXDB_API RestoreFromDbBackupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_TIMESTREAMINFLUXDB_API RestoreFromDbBackupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The identifier of the restored DB resource.</p>
   */
  inline const Aws::String& GetRestoredDbResourceId() const { return m_restoredDbResourceId; }
  template <typename RestoredDbResourceIdT = Aws::String>
  void SetRestoredDbResourceId(RestoredDbResourceIdT&& value) {
    m_restoredDbResourceIdHasBeenSet = true;
    m_restoredDbResourceId = std::forward<RestoredDbResourceIdT>(value);
  }
  template <typename RestoredDbResourceIdT = Aws::String>
  RestoreFromDbBackupResult& WithRestoredDbResourceId(RestoredDbResourceIdT&& value) {
    SetRestoredDbResourceId(std::forward<RestoredDbResourceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of the restore operation.</p>
   */
  inline RestoreStatus GetRestoreStatus() const { return m_restoreStatus; }
  inline void SetRestoreStatus(RestoreStatus value) {
    m_restoreStatusHasBeenSet = true;
    m_restoreStatus = value;
  }
  inline RestoreFromDbBackupResult& WithRestoreStatus(RestoreStatus value) {
    SetRestoreStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of the restored resource. Valid values are DB_INSTANCE and
   * DB_CLUSTER.</p>
   */
  inline ResourceType GetResourceType() const { return m_resourceType; }
  inline void SetResourceType(ResourceType value) {
    m_resourceTypeHasBeenSet = true;
    m_resourceType = value;
  }
  inline RestoreFromDbBackupResult& WithResourceType(ResourceType value) {
    SetResourceType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The engine type of the restored resource.</p>
   */
  inline EngineType GetEngineType() const { return m_engineType; }
  inline void SetEngineType(EngineType value) {
    m_engineTypeHasBeenSet = true;
    m_engineType = value;
  }
  inline RestoreFromDbBackupResult& WithEngineType(EngineType value) {
    SetEngineType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The deployment type of the restored resource.</p>
   */
  inline ResourceDeploymentType GetDeploymentType() const { return m_deploymentType; }
  inline void SetDeploymentType(ResourceDeploymentType value) {
    m_deploymentTypeHasBeenSet = true;
    m_deploymentType = value;
  }
  inline RestoreFromDbBackupResult& WithDeploymentType(ResourceDeploymentType value) {
    SetDeploymentType(value);
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
  RestoreFromDbBackupResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_restoredDbResourceId;

  RestoreStatus m_restoreStatus{RestoreStatus::NOT_SET};

  ResourceType m_resourceType{ResourceType::NOT_SET};

  EngineType m_engineType{EngineType::NOT_SET};

  ResourceDeploymentType m_deploymentType{ResourceDeploymentType::NOT_SET};

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_restoredDbResourceIdHasBeenSet = false;
  bool m_restoreStatusHasBeenSet = false;
  bool m_resourceTypeHasBeenSet = false;
  bool m_engineTypeHasBeenSet = false;
  bool m_deploymentTypeHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace TimestreamInfluxDB
}  // namespace Aws
