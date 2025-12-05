/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mwaa-serverless/MWAAServerless_EXPORTS.h>
#include <aws/mwaa-serverless/model/RunDetailSummary.h>
#include <aws/mwaa-serverless/model/RunType.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace MWAAServerless {
namespace Model {

/**
 * <p>Summary information about a workflow run, including basic identification and
 * status information.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mwaa-serverless-2024-07-26/WorkflowRunSummary">AWS
 * API Reference</a></p>
 */
class WorkflowRunSummary {
 public:
  AWS_MWAASERVERLESS_API WorkflowRunSummary() = default;
  AWS_MWAASERVERLESS_API WorkflowRunSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_MWAASERVERLESS_API WorkflowRunSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MWAASERVERLESS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique identifier of the workflow run.</p>
   */
  inline const Aws::String& GetRunId() const { return m_runId; }
  inline bool RunIdHasBeenSet() const { return m_runIdHasBeenSet; }
  template <typename RunIdT = Aws::String>
  void SetRunId(RunIdT&& value) {
    m_runIdHasBeenSet = true;
    m_runId = std::forward<RunIdT>(value);
  }
  template <typename RunIdT = Aws::String>
  WorkflowRunSummary& WithRunId(RunIdT&& value) {
    SetRunId(std::forward<RunIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the workflow that contains this run.</p>
   */
  inline const Aws::String& GetWorkflowArn() const { return m_workflowArn; }
  inline bool WorkflowArnHasBeenSet() const { return m_workflowArnHasBeenSet; }
  template <typename WorkflowArnT = Aws::String>
  void SetWorkflowArn(WorkflowArnT&& value) {
    m_workflowArnHasBeenSet = true;
    m_workflowArn = std::forward<WorkflowArnT>(value);
  }
  template <typename WorkflowArnT = Aws::String>
  WorkflowRunSummary& WithWorkflowArn(WorkflowArnT&& value) {
    SetWorkflowArn(std::forward<WorkflowArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The version of the workflow used for this run.</p>
   */
  inline const Aws::String& GetWorkflowVersion() const { return m_workflowVersion; }
  inline bool WorkflowVersionHasBeenSet() const { return m_workflowVersionHasBeenSet; }
  template <typename WorkflowVersionT = Aws::String>
  void SetWorkflowVersion(WorkflowVersionT&& value) {
    m_workflowVersionHasBeenSet = true;
    m_workflowVersion = std::forward<WorkflowVersionT>(value);
  }
  template <typename WorkflowVersionT = Aws::String>
  WorkflowRunSummary& WithWorkflowVersion(WorkflowVersionT&& value) {
    SetWorkflowVersion(std::forward<WorkflowVersionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of workflow run.</p>
   */
  inline RunType GetRunType() const { return m_runType; }
  inline bool RunTypeHasBeenSet() const { return m_runTypeHasBeenSet; }
  inline void SetRunType(RunType value) {
    m_runTypeHasBeenSet = true;
    m_runType = value;
  }
  inline WorkflowRunSummary& WithRunType(RunType value) {
    SetRunType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Summary details about the workflow run execution.</p>
   */
  inline const RunDetailSummary& GetRunDetailSummary() const { return m_runDetailSummary; }
  inline bool RunDetailSummaryHasBeenSet() const { return m_runDetailSummaryHasBeenSet; }
  template <typename RunDetailSummaryT = RunDetailSummary>
  void SetRunDetailSummary(RunDetailSummaryT&& value) {
    m_runDetailSummaryHasBeenSet = true;
    m_runDetailSummary = std::forward<RunDetailSummaryT>(value);
  }
  template <typename RunDetailSummaryT = RunDetailSummary>
  WorkflowRunSummary& WithRunDetailSummary(RunDetailSummaryT&& value) {
    SetRunDetailSummary(std::forward<RunDetailSummaryT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_runId;

  Aws::String m_workflowArn;

  Aws::String m_workflowVersion;

  RunType m_runType{RunType::NOT_SET};

  RunDetailSummary m_runDetailSummary;
  bool m_runIdHasBeenSet = false;
  bool m_workflowArnHasBeenSet = false;
  bool m_workflowVersionHasBeenSet = false;
  bool m_runTypeHasBeenSet = false;
  bool m_runDetailSummaryHasBeenSet = false;
};

}  // namespace Model
}  // namespace MWAAServerless
}  // namespace Aws
