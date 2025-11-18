/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mwaa-serverless/MWAAServerless_EXPORTS.h>
#include <aws/mwaa-serverless/model/WorkflowStatus.h>

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
class CreateWorkflowResult {
 public:
  AWS_MWAASERVERLESS_API CreateWorkflowResult() = default;
  AWS_MWAASERVERLESS_API CreateWorkflowResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_MWAASERVERLESS_API CreateWorkflowResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the newly created workflow. This ARN
   * uniquely identifies the workflow resource.</p>
   */
  inline const Aws::String& GetWorkflowArn() const { return m_workflowArn; }
  template <typename WorkflowArnT = Aws::String>
  void SetWorkflowArn(WorkflowArnT&& value) {
    m_workflowArnHasBeenSet = true;
    m_workflowArn = std::forward<WorkflowArnT>(value);
  }
  template <typename WorkflowArnT = Aws::String>
  CreateWorkflowResult& WithWorkflowArn(WorkflowArnT&& value) {
    SetWorkflowArn(std::forward<WorkflowArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the workflow was created, in ISO 8601 date-time
   * format.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  CreateWorkflowResult& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A unique identifier for this revision of the workflow configuration. This ID
   * changes when the workflow is updated and you can use it for optimistic
   * concurrency control in update operations. The revision ID helps prevent
   * conflicting updates and ensures that updates are applied to the expected version
   * of the workflow configuration.</p>
   */
  inline const Aws::String& GetRevisionId() const { return m_revisionId; }
  template <typename RevisionIdT = Aws::String>
  void SetRevisionId(RevisionIdT&& value) {
    m_revisionIdHasBeenSet = true;
    m_revisionId = std::forward<RevisionIdT>(value);
  }
  template <typename RevisionIdT = Aws::String>
  CreateWorkflowResult& WithRevisionId(RevisionIdT&& value) {
    SetRevisionId(std::forward<RevisionIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the workflow. Possible values are <code>READY</code>
   * (workflow is ready to run) and <code>DELETING</code> (workflow is being
   * deleted).</p>
   */
  inline WorkflowStatus GetWorkflowStatus() const { return m_workflowStatus; }
  inline void SetWorkflowStatus(WorkflowStatus value) {
    m_workflowStatusHasBeenSet = true;
    m_workflowStatus = value;
  }
  inline CreateWorkflowResult& WithWorkflowStatus(WorkflowStatus value) {
    SetWorkflowStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The version identifier of the workflow. This is a service-generated
   * alphanumeric string that uniquely identifies this version of the workflow.
   * Amazon Managed Workflows for Apache Airflow Serverless uses a version-first
   * approach where each workflow can have multiple immutable versions, which allows
   * you to maintain different configurations and roll back to previous versions as
   * needed. The version identifier is used in ARNs and API operations to reference
   * specific workflow versions.</p>
   */
  inline const Aws::String& GetWorkflowVersion() const { return m_workflowVersion; }
  template <typename WorkflowVersionT = Aws::String>
  void SetWorkflowVersion(WorkflowVersionT&& value) {
    m_workflowVersionHasBeenSet = true;
    m_workflowVersion = std::forward<WorkflowVersionT>(value);
  }
  template <typename WorkflowVersionT = Aws::String>
  CreateWorkflowResult& WithWorkflowVersion(WorkflowVersionT&& value) {
    SetWorkflowVersion(std::forward<WorkflowVersionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A Boolean flag that indicates whether this workflow version is the latest
   * version of the workflow.</p>
   */
  inline bool GetIsLatestVersion() const { return m_isLatestVersion; }
  inline void SetIsLatestVersion(bool value) {
    m_isLatestVersionHasBeenSet = true;
    m_isLatestVersion = value;
  }
  inline CreateWorkflowResult& WithIsLatestVersion(bool value) {
    SetIsLatestVersion(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Warning messages generated during workflow creation.</p>
   */
  inline const Aws::Vector<Aws::String>& GetWarnings() const { return m_warnings; }
  template <typename WarningsT = Aws::Vector<Aws::String>>
  void SetWarnings(WarningsT&& value) {
    m_warningsHasBeenSet = true;
    m_warnings = std::forward<WarningsT>(value);
  }
  template <typename WarningsT = Aws::Vector<Aws::String>>
  CreateWorkflowResult& WithWarnings(WarningsT&& value) {
    SetWarnings(std::forward<WarningsT>(value));
    return *this;
  }
  template <typename WarningsT = Aws::String>
  CreateWorkflowResult& AddWarnings(WarningsT&& value) {
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
  CreateWorkflowResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_workflowArn;
  bool m_workflowArnHasBeenSet = false;

  Aws::Utils::DateTime m_createdAt{};
  bool m_createdAtHasBeenSet = false;

  Aws::String m_revisionId;
  bool m_revisionIdHasBeenSet = false;

  WorkflowStatus m_workflowStatus{WorkflowStatus::NOT_SET};
  bool m_workflowStatusHasBeenSet = false;

  Aws::String m_workflowVersion;
  bool m_workflowVersionHasBeenSet = false;

  bool m_isLatestVersion{false};
  bool m_isLatestVersionHasBeenSet = false;

  Aws::Vector<Aws::String> m_warnings;
  bool m_warningsHasBeenSet = false;

  Aws::String m_requestId;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace MWAAServerless
}  // namespace Aws
