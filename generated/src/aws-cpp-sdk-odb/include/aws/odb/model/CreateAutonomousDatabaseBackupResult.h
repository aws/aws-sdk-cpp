/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/odb/Odb_EXPORTS.h>
#include <aws/odb/model/ResourceStatus.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace odb {
namespace Model {
class CreateAutonomousDatabaseBackupResult {
 public:
  AWS_ODB_API CreateAutonomousDatabaseBackupResult() = default;
  AWS_ODB_API CreateAutonomousDatabaseBackupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_ODB_API CreateAutonomousDatabaseBackupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The user-friendly name of the Autonomous Database backup that was
   * created.</p>
   */
  inline const Aws::String& GetDisplayName() const { return m_displayName; }
  template <typename DisplayNameT = Aws::String>
  void SetDisplayName(DisplayNameT&& value) {
    m_displayNameHasBeenSet = true;
    m_displayName = std::forward<DisplayNameT>(value);
  }
  template <typename DisplayNameT = Aws::String>
  CreateAutonomousDatabaseBackupResult& WithDisplayName(DisplayNameT&& value) {
    SetDisplayName(std::forward<DisplayNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the Autonomous Database backup.</p>
   */
  inline ResourceStatus GetStatus() const { return m_status; }
  inline void SetStatus(ResourceStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline CreateAutonomousDatabaseBackupResult& WithStatus(ResourceStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Additional information about the current status of the Autonomous Database
   * backup, if applicable.</p>
   */
  inline const Aws::String& GetStatusReason() const { return m_statusReason; }
  template <typename StatusReasonT = Aws::String>
  void SetStatusReason(StatusReasonT&& value) {
    m_statusReasonHasBeenSet = true;
    m_statusReason = std::forward<StatusReasonT>(value);
  }
  template <typename StatusReasonT = Aws::String>
  CreateAutonomousDatabaseBackupResult& WithStatusReason(StatusReasonT&& value) {
    SetStatusReason(std::forward<StatusReasonT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the Autonomous Database backup that was created.</p>
   */
  inline const Aws::String& GetAutonomousDatabaseBackupId() const { return m_autonomousDatabaseBackupId; }
  template <typename AutonomousDatabaseBackupIdT = Aws::String>
  void SetAutonomousDatabaseBackupId(AutonomousDatabaseBackupIdT&& value) {
    m_autonomousDatabaseBackupIdHasBeenSet = true;
    m_autonomousDatabaseBackupId = std::forward<AutonomousDatabaseBackupIdT>(value);
  }
  template <typename AutonomousDatabaseBackupIdT = Aws::String>
  CreateAutonomousDatabaseBackupResult& WithAutonomousDatabaseBackupId(AutonomousDatabaseBackupIdT&& value) {
    SetAutonomousDatabaseBackupId(std::forward<AutonomousDatabaseBackupIdT>(value));
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
  CreateAutonomousDatabaseBackupResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_displayName;

  ResourceStatus m_status{ResourceStatus::NOT_SET};

  Aws::String m_statusReason;

  Aws::String m_autonomousDatabaseBackupId;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_displayNameHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_statusReasonHasBeenSet = false;
  bool m_autonomousDatabaseBackupIdHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace odb
}  // namespace Aws
