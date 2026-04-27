/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/omics/Omics_EXPORTS.h>
#include <aws/omics/model/BatchStatus.h>
#include <aws/omics/model/DefaultRunSetting.h>
#include <aws/omics/model/RunSummary.h>
#include <aws/omics/model/SubmissionSummary.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace Omics {
namespace Model {
class GetBatchResult {
 public:
  AWS_OMICS_API GetBatchResult() = default;
  AWS_OMICS_API GetBatchResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_OMICS_API GetBatchResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The identifier portion of the run batch ARN.</p>
   */
  inline const Aws::String& GetId() const { return m_id; }
  template <typename IdT = Aws::String>
  void SetId(IdT&& value) {
    m_idHasBeenSet = true;
    m_id = std::forward<IdT>(value);
  }
  template <typename IdT = Aws::String>
  GetBatchResult& WithId(IdT&& value) {
    SetId(std::forward<IdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique ARN of the run batch.</p>
   */
  inline const Aws::String& GetArn() const { return m_arn; }
  template <typename ArnT = Aws::String>
  void SetArn(ArnT&& value) {
    m_arnHasBeenSet = true;
    m_arn = std::forward<ArnT>(value);
  }
  template <typename ArnT = Aws::String>
  GetBatchResult& WithArn(ArnT&& value) {
    SetArn(std::forward<ArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The universally unique identifier (UUID) for the run batch.</p>
   */
  inline const Aws::String& GetUuid() const { return m_uuid; }
  template <typename UuidT = Aws::String>
  void SetUuid(UuidT&& value) {
    m_uuidHasBeenSet = true;
    m_uuid = std::forward<UuidT>(value);
  }
  template <typename UuidT = Aws::String>
  GetBatchResult& WithUuid(UuidT&& value) {
    SetUuid(std::forward<UuidT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The optional user-friendly name of the batch.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  GetBatchResult& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the run batch. Possible values: <code>CREATING</code>
   * (initial setup), <code>PENDING</code> (ready to submit runs),
   * <code>SUBMITTING</code> (submitting runs), <code>INPROGRESS</code> (runs
   * executing), <code>STOPPING</code> (cancellation in progress),
   * <code>PROCESSED</code> (all runs completed), <code>CANCELLED</code> (batch
   * cancelled), <code>FAILED</code> (batch failed), <code>RUNS_DELETING</code>
   * (deleting runs), <code>RUNS_DELETED</code> (runs deleted).</p>
   */
  inline BatchStatus GetStatus() const { return m_status; }
  inline void SetStatus(BatchStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline GetBatchResult& WithStatus(BatchStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>AWS tags associated with the run batch.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  GetBatchResult& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  GetBatchResult& AddTags(TagsKeyT&& key, TagsValueT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The total number of runs in the batch.</p>
   */
  inline int GetTotalRuns() const { return m_totalRuns; }
  inline void SetTotalRuns(int value) {
    m_totalRunsHasBeenSet = true;
    m_totalRuns = value;
  }
  inline GetBatchResult& WithTotalRuns(int value) {
    SetTotalRuns(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The shared configuration applied to all runs in the batch. See
   * <code>DefaultRunSetting</code>.</p>
   */
  inline const DefaultRunSetting& GetDefaultRunSetting() const { return m_defaultRunSetting; }
  template <typename DefaultRunSettingT = DefaultRunSetting>
  void SetDefaultRunSetting(DefaultRunSettingT&& value) {
    m_defaultRunSettingHasBeenSet = true;
    m_defaultRunSetting = std::forward<DefaultRunSettingT>(value);
  }
  template <typename DefaultRunSettingT = DefaultRunSetting>
  GetBatchResult& WithDefaultRunSetting(DefaultRunSettingT&& value) {
    SetDefaultRunSetting(std::forward<DefaultRunSettingT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A summary of run submission outcomes. See <code>SubmissionSummary</code>.</p>
   */
  inline const SubmissionSummary& GetSubmissionSummary() const { return m_submissionSummary; }
  template <typename SubmissionSummaryT = SubmissionSummary>
  void SetSubmissionSummary(SubmissionSummaryT&& value) {
    m_submissionSummaryHasBeenSet = true;
    m_submissionSummary = std::forward<SubmissionSummaryT>(value);
  }
  template <typename SubmissionSummaryT = SubmissionSummary>
  GetBatchResult& WithSubmissionSummary(SubmissionSummaryT&& value) {
    SetSubmissionSummary(std::forward<SubmissionSummaryT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A summary of run execution states. Run execution counts are eventually
   * consistent and may lag behind actual run states. Final counts are accurate once
   * the batch reaches <code>PROCESSED</code> status. See
   * <code>RunSummary</code>.</p>
   */
  inline const RunSummary& GetRunSummary() const { return m_runSummary; }
  template <typename RunSummaryT = RunSummary>
  void SetRunSummary(RunSummaryT&& value) {
    m_runSummaryHasBeenSet = true;
    m_runSummary = std::forward<RunSummaryT>(value);
  }
  template <typename RunSummaryT = RunSummary>
  GetBatchResult& WithRunSummary(RunSummaryT&& value) {
    SetRunSummary(std::forward<RunSummaryT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the batch was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
  template <typename CreationTimeT = Aws::Utils::DateTime>
  void SetCreationTime(CreationTimeT&& value) {
    m_creationTimeHasBeenSet = true;
    m_creationTime = std::forward<CreationTimeT>(value);
  }
  template <typename CreationTimeT = Aws::Utils::DateTime>
  GetBatchResult& WithCreationTime(CreationTimeT&& value) {
    SetCreationTime(std::forward<CreationTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when all run submissions completed.</p>
   */
  inline const Aws::Utils::DateTime& GetSubmittedTime() const { return m_submittedTime; }
  template <typename SubmittedTimeT = Aws::Utils::DateTime>
  void SetSubmittedTime(SubmittedTimeT&& value) {
    m_submittedTimeHasBeenSet = true;
    m_submittedTime = std::forward<SubmittedTimeT>(value);
  }
  template <typename SubmittedTimeT = Aws::Utils::DateTime>
  GetBatchResult& WithSubmittedTime(SubmittedTimeT&& value) {
    SetSubmittedTime(std::forward<SubmittedTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when all run executions completed.</p>
   */
  inline const Aws::Utils::DateTime& GetProcessedTime() const { return m_processedTime; }
  template <typename ProcessedTimeT = Aws::Utils::DateTime>
  void SetProcessedTime(ProcessedTimeT&& value) {
    m_processedTimeHasBeenSet = true;
    m_processedTime = std::forward<ProcessedTimeT>(value);
  }
  template <typename ProcessedTimeT = Aws::Utils::DateTime>
  GetBatchResult& WithProcessedTime(ProcessedTimeT&& value) {
    SetProcessedTime(std::forward<ProcessedTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the batch transitioned to a <code>FAILED</code>
   * status.</p>
   */
  inline const Aws::Utils::DateTime& GetFailedTime() const { return m_failedTime; }
  template <typename FailedTimeT = Aws::Utils::DateTime>
  void SetFailedTime(FailedTimeT&& value) {
    m_failedTimeHasBeenSet = true;
    m_failedTime = std::forward<FailedTimeT>(value);
  }
  template <typename FailedTimeT = Aws::Utils::DateTime>
  GetBatchResult& WithFailedTime(FailedTimeT&& value) {
    SetFailedTime(std::forward<FailedTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A description of the batch failure. Present only when status is
   * <code>FAILED</code>.</p>
   */
  inline const Aws::String& GetFailureReason() const { return m_failureReason; }
  template <typename FailureReasonT = Aws::String>
  void SetFailureReason(FailureReasonT&& value) {
    m_failureReasonHasBeenSet = true;
    m_failureReason = std::forward<FailureReasonT>(value);
  }
  template <typename FailureReasonT = Aws::String>
  GetBatchResult& WithFailureReason(FailureReasonT&& value) {
    SetFailureReason(std::forward<FailureReasonT>(value));
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
  GetBatchResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_id;

  Aws::String m_arn;

  Aws::String m_uuid;

  Aws::String m_name;

  BatchStatus m_status{BatchStatus::NOT_SET};

  Aws::Map<Aws::String, Aws::String> m_tags;

  int m_totalRuns{0};

  DefaultRunSetting m_defaultRunSetting;

  SubmissionSummary m_submissionSummary;

  RunSummary m_runSummary;

  Aws::Utils::DateTime m_creationTime{};

  Aws::Utils::DateTime m_submittedTime{};

  Aws::Utils::DateTime m_processedTime{};

  Aws::Utils::DateTime m_failedTime{};

  Aws::String m_failureReason;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_idHasBeenSet = false;
  bool m_arnHasBeenSet = false;
  bool m_uuidHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
  bool m_totalRunsHasBeenSet = false;
  bool m_defaultRunSettingHasBeenSet = false;
  bool m_submissionSummaryHasBeenSet = false;
  bool m_runSummaryHasBeenSet = false;
  bool m_creationTimeHasBeenSet = false;
  bool m_submittedTimeHasBeenSet = false;
  bool m_processedTimeHasBeenSet = false;
  bool m_failedTimeHasBeenSet = false;
  bool m_failureReasonHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Omics
}  // namespace Aws
