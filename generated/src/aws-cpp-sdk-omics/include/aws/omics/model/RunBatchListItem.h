/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/omics/Omics_EXPORTS.h>
#include <aws/omics/model/SubmissionStatus.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Omics {
namespace Model {

/**
 * <p>A single run entry returned by <code>ListRunsInBatch</code>.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/RunBatchListItem">AWS
 * API Reference</a></p>
 */
class RunBatchListItem {
 public:
  AWS_OMICS_API RunBatchListItem() = default;
  AWS_OMICS_API RunBatchListItem(Aws::Utils::Json::JsonView jsonValue);
  AWS_OMICS_API RunBatchListItem& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_OMICS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The customer-provided identifier for the run configuration. Use this to
   * correlate results back to the input configuration provided in
   * <code>inlineSettings</code> or <code>s3UriSettings</code>.</p>
   */
  inline const Aws::String& GetRunSettingId() const { return m_runSettingId; }
  inline bool RunSettingIdHasBeenSet() const { return m_runSettingIdHasBeenSet; }
  template <typename RunSettingIdT = Aws::String>
  void SetRunSettingId(RunSettingIdT&& value) {
    m_runSettingIdHasBeenSet = true;
    m_runSettingId = std::forward<RunSettingIdT>(value);
  }
  template <typename RunSettingIdT = Aws::String>
  RunBatchListItem& WithRunSettingId(RunSettingIdT&& value) {
    SetRunSettingId(std::forward<RunSettingIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The HealthOmics-generated identifier for the workflow run. Empty if
   * submission failed.</p>
   */
  inline const Aws::String& GetRunId() const { return m_runId; }
  inline bool RunIdHasBeenSet() const { return m_runIdHasBeenSet; }
  template <typename RunIdT = Aws::String>
  void SetRunId(RunIdT&& value) {
    m_runIdHasBeenSet = true;
    m_runId = std::forward<RunIdT>(value);
  }
  template <typename RunIdT = Aws::String>
  RunBatchListItem& WithRunId(RunIdT&& value) {
    SetRunId(std::forward<RunIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The universally unique identifier (UUID) for the run.</p>
   */
  inline const Aws::String& GetRunInternalUuid() const { return m_runInternalUuid; }
  inline bool RunInternalUuidHasBeenSet() const { return m_runInternalUuidHasBeenSet; }
  template <typename RunInternalUuidT = Aws::String>
  void SetRunInternalUuid(RunInternalUuidT&& value) {
    m_runInternalUuidHasBeenSet = true;
    m_runInternalUuid = std::forward<RunInternalUuidT>(value);
  }
  template <typename RunInternalUuidT = Aws::String>
  RunBatchListItem& WithRunInternalUuid(RunInternalUuidT&& value) {
    SetRunInternalUuid(std::forward<RunInternalUuidT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique ARN of the workflow run.</p>
   */
  inline const Aws::String& GetRunArn() const { return m_runArn; }
  inline bool RunArnHasBeenSet() const { return m_runArnHasBeenSet; }
  template <typename RunArnT = Aws::String>
  void SetRunArn(RunArnT&& value) {
    m_runArnHasBeenSet = true;
    m_runArn = std::forward<RunArnT>(value);
  }
  template <typename RunArnT = Aws::String>
  RunBatchListItem& WithRunArn(RunArnT&& value) {
    SetRunArn(std::forward<RunArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The submission outcome for this run.</p>
   */
  inline SubmissionStatus GetSubmissionStatus() const { return m_submissionStatus; }
  inline bool SubmissionStatusHasBeenSet() const { return m_submissionStatusHasBeenSet; }
  inline void SetSubmissionStatus(SubmissionStatus value) {
    m_submissionStatusHasBeenSet = true;
    m_submissionStatus = value;
  }
  inline RunBatchListItem& WithSubmissionStatus(SubmissionStatus value) {
    SetSubmissionStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The error category for a failed submission. See the run-level failure table
   * in the HealthOmics User Guide for details on each value.</p>
   */
  inline const Aws::String& GetSubmissionFailureReason() const { return m_submissionFailureReason; }
  inline bool SubmissionFailureReasonHasBeenSet() const { return m_submissionFailureReasonHasBeenSet; }
  template <typename SubmissionFailureReasonT = Aws::String>
  void SetSubmissionFailureReason(SubmissionFailureReasonT&& value) {
    m_submissionFailureReasonHasBeenSet = true;
    m_submissionFailureReason = std::forward<SubmissionFailureReasonT>(value);
  }
  template <typename SubmissionFailureReasonT = Aws::String>
  RunBatchListItem& WithSubmissionFailureReason(SubmissionFailureReasonT&& value) {
    SetSubmissionFailureReason(std::forward<SubmissionFailureReasonT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A detailed message describing the submission failure.</p>
   */
  inline const Aws::String& GetSubmissionFailureMessage() const { return m_submissionFailureMessage; }
  inline bool SubmissionFailureMessageHasBeenSet() const { return m_submissionFailureMessageHasBeenSet; }
  template <typename SubmissionFailureMessageT = Aws::String>
  void SetSubmissionFailureMessage(SubmissionFailureMessageT&& value) {
    m_submissionFailureMessageHasBeenSet = true;
    m_submissionFailureMessage = std::forward<SubmissionFailureMessageT>(value);
  }
  template <typename SubmissionFailureMessageT = Aws::String>
  RunBatchListItem& WithSubmissionFailureMessage(SubmissionFailureMessageT&& value) {
    SetSubmissionFailureMessage(std::forward<SubmissionFailureMessageT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_runSettingId;

  Aws::String m_runId;

  Aws::String m_runInternalUuid;

  Aws::String m_runArn;

  SubmissionStatus m_submissionStatus{SubmissionStatus::NOT_SET};

  Aws::String m_submissionFailureReason;

  Aws::String m_submissionFailureMessage;
  bool m_runSettingIdHasBeenSet = false;
  bool m_runIdHasBeenSet = false;
  bool m_runInternalUuidHasBeenSet = false;
  bool m_runArnHasBeenSet = false;
  bool m_submissionStatusHasBeenSet = false;
  bool m_submissionFailureReasonHasBeenSet = false;
  bool m_submissionFailureMessageHasBeenSet = false;
};

}  // namespace Model
}  // namespace Omics
}  // namespace Aws
