/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mwaa-serverless/MWAAServerless_EXPORTS.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace MWAAServerless {
namespace Model {
class UpdateWorkflowResult {
 public:
  AWS_MWAASERVERLESS_API UpdateWorkflowResult() = default;
  AWS_MWAASERVERLESS_API UpdateWorkflowResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_MWAASERVERLESS_API UpdateWorkflowResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the updated workflow.</p>
   */
  inline const Aws::String& GetWorkflowArn() const { return m_workflowArn; }
  template <typename WorkflowArnT = Aws::String>
  void SetWorkflowArn(WorkflowArnT&& value) {
    m_workflowArnHasBeenSet = true;
    m_workflowArn = std::forward<WorkflowArnT>(value);
  }
  template <typename WorkflowArnT = Aws::String>
  UpdateWorkflowResult& WithWorkflowArn(WorkflowArnT&& value) {
    SetWorkflowArn(std::forward<WorkflowArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the workflow was last modified, in ISO 8601 date-time
   * format.</p>
   */
  inline const Aws::Utils::DateTime& GetModifiedAt() const { return m_modifiedAt; }
  template <typename ModifiedAtT = Aws::Utils::DateTime>
  void SetModifiedAt(ModifiedAtT&& value) {
    m_modifiedAtHasBeenSet = true;
    m_modifiedAt = std::forward<ModifiedAtT>(value);
  }
  template <typename ModifiedAtT = Aws::Utils::DateTime>
  UpdateWorkflowResult& WithModifiedAt(ModifiedAtT&& value) {
    SetModifiedAt(std::forward<ModifiedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The version identifier of the updated workflow.</p>
   */
  inline const Aws::String& GetWorkflowVersion() const { return m_workflowVersion; }
  template <typename WorkflowVersionT = Aws::String>
  void SetWorkflowVersion(WorkflowVersionT&& value) {
    m_workflowVersionHasBeenSet = true;
    m_workflowVersion = std::forward<WorkflowVersionT>(value);
  }
  template <typename WorkflowVersionT = Aws::String>
  UpdateWorkflowResult& WithWorkflowVersion(WorkflowVersionT&& value) {
    SetWorkflowVersion(std::forward<WorkflowVersionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Warning messages generated during workflow update.</p>
   */
  inline const Aws::Vector<Aws::String>& GetWarnings() const { return m_warnings; }
  template <typename WarningsT = Aws::Vector<Aws::String>>
  void SetWarnings(WarningsT&& value) {
    m_warningsHasBeenSet = true;
    m_warnings = std::forward<WarningsT>(value);
  }
  template <typename WarningsT = Aws::Vector<Aws::String>>
  UpdateWorkflowResult& WithWarnings(WarningsT&& value) {
    SetWarnings(std::forward<WarningsT>(value));
    return *this;
  }
  template <typename WarningsT = Aws::String>
  UpdateWorkflowResult& AddWarnings(WarningsT&& value) {
    m_warningsHasBeenSet = true;
    m_warnings.emplace_back(std::forward<WarningsT>(value));
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
  UpdateWorkflowResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_workflowArn;

  Aws::Utils::DateTime m_modifiedAt{};

  Aws::String m_workflowVersion;

  Aws::Vector<Aws::String> m_warnings;

  Aws::String m_requestId;
  bool m_workflowArnHasBeenSet = false;
  bool m_modifiedAtHasBeenSet = false;
  bool m_workflowVersionHasBeenSet = false;
  bool m_warningsHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace MWAAServerless
}  // namespace Aws
