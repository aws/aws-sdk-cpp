﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
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
class UpdateCloudExadataInfrastructureResult {
 public:
  AWS_ODB_API UpdateCloudExadataInfrastructureResult() = default;
  AWS_ODB_API UpdateCloudExadataInfrastructureResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_ODB_API UpdateCloudExadataInfrastructureResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The user-friendly name of the updated Exadata infrastructure.</p>
   */
  inline const Aws::String& GetDisplayName() const { return m_displayName; }
  template <typename DisplayNameT = Aws::String>
  void SetDisplayName(DisplayNameT&& value) {
    m_displayNameHasBeenSet = true;
    m_displayName = std::forward<DisplayNameT>(value);
  }
  template <typename DisplayNameT = Aws::String>
  UpdateCloudExadataInfrastructureResult& WithDisplayName(DisplayNameT&& value) {
    SetDisplayName(std::forward<DisplayNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the Exadata infrastructure after the update
   * operation.</p>
   */
  inline ResourceStatus GetStatus() const { return m_status; }
  inline void SetStatus(ResourceStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline UpdateCloudExadataInfrastructureResult& WithStatus(ResourceStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Additional information about the status of the Exadata infrastructure after
   * the update operation.</p>
   */
  inline const Aws::String& GetStatusReason() const { return m_statusReason; }
  template <typename StatusReasonT = Aws::String>
  void SetStatusReason(StatusReasonT&& value) {
    m_statusReasonHasBeenSet = true;
    m_statusReason = std::forward<StatusReasonT>(value);
  }
  template <typename StatusReasonT = Aws::String>
  UpdateCloudExadataInfrastructureResult& WithStatusReason(StatusReasonT&& value) {
    SetStatusReason(std::forward<StatusReasonT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the updated Exadata infrastructure.</p>
   */
  inline const Aws::String& GetCloudExadataInfrastructureId() const { return m_cloudExadataInfrastructureId; }
  template <typename CloudExadataInfrastructureIdT = Aws::String>
  void SetCloudExadataInfrastructureId(CloudExadataInfrastructureIdT&& value) {
    m_cloudExadataInfrastructureIdHasBeenSet = true;
    m_cloudExadataInfrastructureId = std::forward<CloudExadataInfrastructureIdT>(value);
  }
  template <typename CloudExadataInfrastructureIdT = Aws::String>
  UpdateCloudExadataInfrastructureResult& WithCloudExadataInfrastructureId(CloudExadataInfrastructureIdT&& value) {
    SetCloudExadataInfrastructureId(std::forward<CloudExadataInfrastructureIdT>(value));
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
  UpdateCloudExadataInfrastructureResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_displayName;
  bool m_displayNameHasBeenSet = false;

  ResourceStatus m_status{ResourceStatus::NOT_SET};
  bool m_statusHasBeenSet = false;

  Aws::String m_statusReason;
  bool m_statusReasonHasBeenSet = false;

  Aws::String m_cloudExadataInfrastructureId;
  bool m_cloudExadataInfrastructureIdHasBeenSet = false;

  Aws::String m_requestId;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace odb
}  // namespace Aws
