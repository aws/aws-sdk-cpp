/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/Permission.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace QuickSight {
namespace Model {
class UpdateFlowPermissionsResult {
 public:
  AWS_QUICKSIGHT_API UpdateFlowPermissionsResult() = default;
  AWS_QUICKSIGHT_API UpdateFlowPermissionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_QUICKSIGHT_API UpdateFlowPermissionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The HTTP status of the request.</p>
   */
  inline int GetStatus() const { return m_status; }
  inline void SetStatus(int value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline UpdateFlowPermissionsResult& WithStatus(int value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the flow you are updating permissions
   * against.</p>
   */
  inline const Aws::String& GetArn() const { return m_arn; }
  template <typename ArnT = Aws::String>
  void SetArn(ArnT&& value) {
    m_arnHasBeenSet = true;
    m_arn = std::forward<ArnT>(value);
  }
  template <typename ArnT = Aws::String>
  UpdateFlowPermissionsResult& WithArn(ArnT&& value) {
    SetArn(std::forward<ArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The permissions on the flow after they are updated.</p>
   */
  inline const Aws::Vector<Permission>& GetPermissions() const { return m_permissions; }
  template <typename PermissionsT = Aws::Vector<Permission>>
  void SetPermissions(PermissionsT&& value) {
    m_permissionsHasBeenSet = true;
    m_permissions = std::forward<PermissionsT>(value);
  }
  template <typename PermissionsT = Aws::Vector<Permission>>
  UpdateFlowPermissionsResult& WithPermissions(PermissionsT&& value) {
    SetPermissions(std::forward<PermissionsT>(value));
    return *this;
  }
  template <typename PermissionsT = Permission>
  UpdateFlowPermissionsResult& AddPermissions(PermissionsT&& value) {
    m_permissionsHasBeenSet = true;
    m_permissions.emplace_back(std::forward<PermissionsT>(value));
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
  UpdateFlowPermissionsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the flow with updated permissions.</p>
   */
  inline const Aws::String& GetFlowId() const { return m_flowId; }
  template <typename FlowIdT = Aws::String>
  void SetFlowId(FlowIdT&& value) {
    m_flowIdHasBeenSet = true;
    m_flowId = std::forward<FlowIdT>(value);
  }
  template <typename FlowIdT = Aws::String>
  UpdateFlowPermissionsResult& WithFlowId(FlowIdT&& value) {
    SetFlowId(std::forward<FlowIdT>(value));
    return *this;
  }
  ///@}
 private:
  int m_status{0};
  bool m_statusHasBeenSet = false;

  Aws::String m_arn;
  bool m_arnHasBeenSet = false;

  Aws::Vector<Permission> m_permissions;
  bool m_permissionsHasBeenSet = false;

  Aws::String m_requestId;
  bool m_requestIdHasBeenSet = false;

  Aws::String m_flowId;
  bool m_flowIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
