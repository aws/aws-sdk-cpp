/**
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
class UpdateOdbPeeringConnectionResult {
 public:
  AWS_ODB_API UpdateOdbPeeringConnectionResult() = default;
  AWS_ODB_API UpdateOdbPeeringConnectionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_ODB_API UpdateOdbPeeringConnectionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The display name of the peering connection.</p>
   */
  inline const Aws::String& GetDisplayName() const { return m_displayName; }
  template <typename DisplayNameT = Aws::String>
  void SetDisplayName(DisplayNameT&& value) {
    m_displayNameHasBeenSet = true;
    m_displayName = std::forward<DisplayNameT>(value);
  }
  template <typename DisplayNameT = Aws::String>
  UpdateOdbPeeringConnectionResult& WithDisplayName(DisplayNameT&& value) {
    SetDisplayName(std::forward<DisplayNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of the peering connection update operation.</p>
   */
  inline ResourceStatus GetStatus() const { return m_status; }
  inline void SetStatus(ResourceStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline UpdateOdbPeeringConnectionResult& WithStatus(ResourceStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Additional information about the status of the peering connection update
   * operation.</p>
   */
  inline const Aws::String& GetStatusReason() const { return m_statusReason; }
  template <typename StatusReasonT = Aws::String>
  void SetStatusReason(StatusReasonT&& value) {
    m_statusReasonHasBeenSet = true;
    m_statusReason = std::forward<StatusReasonT>(value);
  }
  template <typename StatusReasonT = Aws::String>
  UpdateOdbPeeringConnectionResult& WithStatusReason(StatusReasonT&& value) {
    SetStatusReason(std::forward<StatusReasonT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the Oracle Database@Amazon Web Services peering connection
   * that was updated.</p>
   */
  inline const Aws::String& GetOdbPeeringConnectionId() const { return m_odbPeeringConnectionId; }
  template <typename OdbPeeringConnectionIdT = Aws::String>
  void SetOdbPeeringConnectionId(OdbPeeringConnectionIdT&& value) {
    m_odbPeeringConnectionIdHasBeenSet = true;
    m_odbPeeringConnectionId = std::forward<OdbPeeringConnectionIdT>(value);
  }
  template <typename OdbPeeringConnectionIdT = Aws::String>
  UpdateOdbPeeringConnectionResult& WithOdbPeeringConnectionId(OdbPeeringConnectionIdT&& value) {
    SetOdbPeeringConnectionId(std::forward<OdbPeeringConnectionIdT>(value));
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
  UpdateOdbPeeringConnectionResult& WithRequestId(RequestIdT&& value) {
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

  Aws::String m_odbPeeringConnectionId;
  bool m_odbPeeringConnectionIdHasBeenSet = false;

  Aws::String m_requestId;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace odb
}  // namespace Aws
