/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/nova-act/NovaAct_EXPORTS.h>
#include <aws/nova-act/model/WorkflowDefinitionStatus.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace NovaAct {
namespace Model {
class DeleteWorkflowDefinitionResult {
 public:
  AWS_NOVAACT_API DeleteWorkflowDefinitionResult() = default;
  AWS_NOVAACT_API DeleteWorkflowDefinitionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_NOVAACT_API DeleteWorkflowDefinitionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The status of the workflow definition after deletion request.</p>
   */
  inline WorkflowDefinitionStatus GetStatus() const { return m_status; }
  inline void SetStatus(WorkflowDefinitionStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline DeleteWorkflowDefinitionResult& WithStatus(WorkflowDefinitionStatus value) {
    SetStatus(value);
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
  DeleteWorkflowDefinitionResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  WorkflowDefinitionStatus m_status{WorkflowDefinitionStatus::NOT_SET};
  bool m_statusHasBeenSet = false;

  Aws::String m_requestId;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace NovaAct
}  // namespace Aws
