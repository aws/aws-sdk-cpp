/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Document.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mwaa-serverless/MWAAServerless_EXPORTS.h>
#include <aws/mwaa-serverless/model/RunType.h>
#include <aws/mwaa-serverless/model/WorkflowRunDetail.h>

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
class GetWorkflowRunResult {
 public:
  AWS_MWAASERVERLESS_API GetWorkflowRunResult() = default;
  AWS_MWAASERVERLESS_API GetWorkflowRunResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_MWAASERVERLESS_API GetWorkflowRunResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the workflow that contains this run.</p>
   */
  inline const Aws::String& GetWorkflowArn() const { return m_workflowArn; }
  template <typename WorkflowArnT = Aws::String>
  void SetWorkflowArn(WorkflowArnT&& value) {
    m_workflowArnHasBeenSet = true;
    m_workflowArn = std::forward<WorkflowArnT>(value);
  }
  template <typename WorkflowArnT = Aws::String>
  GetWorkflowRunResult& WithWorkflowArn(WorkflowArnT&& value) {
    SetWorkflowArn(std::forward<WorkflowArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The version of the workflow that is used for this run.</p>
   */
  inline const Aws::String& GetWorkflowVersion() const { return m_workflowVersion; }
  template <typename WorkflowVersionT = Aws::String>
  void SetWorkflowVersion(WorkflowVersionT&& value) {
    m_workflowVersionHasBeenSet = true;
    m_workflowVersion = std::forward<WorkflowVersionT>(value);
  }
  template <typename WorkflowVersionT = Aws::String>
  GetWorkflowRunResult& WithWorkflowVersion(WorkflowVersionT&& value) {
    SetWorkflowVersion(std::forward<WorkflowVersionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of this workflow run.</p>
   */
  inline const Aws::String& GetRunId() const { return m_runId; }
  template <typename RunIdT = Aws::String>
  void SetRunId(RunIdT&& value) {
    m_runIdHasBeenSet = true;
    m_runId = std::forward<RunIdT>(value);
  }
  template <typename RunIdT = Aws::String>
  GetWorkflowRunResult& WithRunId(RunIdT&& value) {
    SetRunId(std::forward<RunIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of workflow run. Values are <code>ON_DEMAND</code> (manually
   * triggered) or <code>SCHEDULED</code> (automatically triggered by schedule).</p>
   */
  inline RunType GetRunType() const { return m_runType; }
  inline void SetRunType(RunType value) {
    m_runTypeHasBeenSet = true;
    m_runType = value;
  }
  inline GetWorkflowRunResult& WithRunType(RunType value) {
    SetRunType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Parameters that were overridden for this specific workflow run.</p>
   */
  inline const Aws::Map<Aws::String, Aws::Utils::Document>& GetOverrideParameters() const { return m_overrideParameters; }
  template <typename OverrideParametersT = Aws::Map<Aws::String, Aws::Utils::Document>>
  void SetOverrideParameters(OverrideParametersT&& value) {
    m_overrideParametersHasBeenSet = true;
    m_overrideParameters = std::forward<OverrideParametersT>(value);
  }
  template <typename OverrideParametersT = Aws::Map<Aws::String, Aws::Utils::Document>>
  GetWorkflowRunResult& WithOverrideParameters(OverrideParametersT&& value) {
    SetOverrideParameters(std::forward<OverrideParametersT>(value));
    return *this;
  }
  template <typename OverrideParametersKeyT = Aws::String, typename OverrideParametersValueT = Aws::Utils::Document>
  GetWorkflowRunResult& AddOverrideParameters(OverrideParametersKeyT&& key, OverrideParametersValueT&& value) {
    m_overrideParametersHasBeenSet = true;
    m_overrideParameters.emplace(std::forward<OverrideParametersKeyT>(key), std::forward<OverrideParametersValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Detailed information about the workflow run execution, including timing,
   * status, and task instances.</p>
   */
  inline const WorkflowRunDetail& GetRunDetail() const { return m_runDetail; }
  template <typename RunDetailT = WorkflowRunDetail>
  void SetRunDetail(RunDetailT&& value) {
    m_runDetailHasBeenSet = true;
    m_runDetail = std::forward<RunDetailT>(value);
  }
  template <typename RunDetailT = WorkflowRunDetail>
  GetWorkflowRunResult& WithRunDetail(RunDetailT&& value) {
    SetRunDetail(std::forward<RunDetailT>(value));
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
  GetWorkflowRunResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_workflowArn;

  Aws::String m_workflowVersion;

  Aws::String m_runId;

  RunType m_runType{RunType::NOT_SET};

  Aws::Map<Aws::String, Aws::Utils::Document> m_overrideParameters;

  WorkflowRunDetail m_runDetail;

  Aws::String m_requestId;
  bool m_workflowArnHasBeenSet = false;
  bool m_workflowVersionHasBeenSet = false;
  bool m_runIdHasBeenSet = false;
  bool m_runTypeHasBeenSet = false;
  bool m_overrideParametersHasBeenSet = false;
  bool m_runDetailHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace MWAAServerless
}  // namespace Aws
