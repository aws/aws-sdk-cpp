/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/ResourceStatus.h>

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
class UpdateActionConnectorResult {
 public:
  AWS_QUICKSIGHT_API UpdateActionConnectorResult() = default;
  AWS_QUICKSIGHT_API UpdateActionConnectorResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_QUICKSIGHT_API UpdateActionConnectorResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the updated action connector.</p>
   */
  inline const Aws::String& GetArn() const { return m_arn; }
  template <typename ArnT = Aws::String>
  void SetArn(ArnT&& value) {
    m_arnHasBeenSet = true;
    m_arn = std::forward<ArnT>(value);
  }
  template <typename ArnT = Aws::String>
  UpdateActionConnectorResult& WithArn(ArnT&& value) {
    SetArn(std::forward<ArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the updated action connector.</p>
   */
  inline const Aws::String& GetActionConnectorId() const { return m_actionConnectorId; }
  template <typename ActionConnectorIdT = Aws::String>
  void SetActionConnectorId(ActionConnectorIdT&& value) {
    m_actionConnectorIdHasBeenSet = true;
    m_actionConnectorId = std::forward<ActionConnectorIdT>(value);
  }
  template <typename ActionConnectorIdT = Aws::String>
  UpdateActionConnectorResult& WithActionConnectorId(ActionConnectorIdT&& value) {
    SetActionConnectorId(std::forward<ActionConnectorIdT>(value));
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
  UpdateActionConnectorResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of the update operation.</p>
   */
  inline ResourceStatus GetUpdateStatus() const { return m_updateStatus; }
  inline void SetUpdateStatus(ResourceStatus value) {
    m_updateStatusHasBeenSet = true;
    m_updateStatus = value;
  }
  inline UpdateActionConnectorResult& WithUpdateStatus(ResourceStatus value) {
    SetUpdateStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The HTTP status code of the request.</p>
   */
  inline int GetStatus() const { return m_status; }
  inline void SetStatus(int value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline UpdateActionConnectorResult& WithStatus(int value) {
    SetStatus(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_arn;

  Aws::String m_actionConnectorId;

  Aws::String m_requestId;

  ResourceStatus m_updateStatus{ResourceStatus::NOT_SET};

  int m_status{0};
  bool m_arnHasBeenSet = false;
  bool m_actionConnectorIdHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
  bool m_updateStatusHasBeenSet = false;
  bool m_statusHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
