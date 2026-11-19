/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>
#include <aws/partnercentral-selling/model/BulkJobStatus.h>
#include <aws/partnercentral-selling/model/BulkOperationType.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace PartnerCentralSelling {
namespace Model {

/**
 * <p>The status, record counts, and input file name of an opportunity bulk
 * job.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-selling-2022-07-26/OpportunityBulkJobSummary">AWS
 * API Reference</a></p>
 */
class OpportunityBulkJobSummary {
 public:
  AWS_PARTNERCENTRALSELLING_API OpportunityBulkJobSummary() = default;
  AWS_PARTNERCENTRALSELLING_API OpportunityBulkJobSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALSELLING_API OpportunityBulkJobSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALSELLING_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique identifier of the bulk job.</p>
   */
  inline const Aws::String& GetJobId() const { return m_jobId; }
  inline bool JobIdHasBeenSet() const { return m_jobIdHasBeenSet; }
  template <typename JobIdT = Aws::String>
  void SetJobId(JobIdT&& value) {
    m_jobIdHasBeenSet = true;
    m_jobId = std::forward<JobIdT>(value);
  }
  template <typename JobIdT = Aws::String>
  OpportunityBulkJobSummary& WithJobId(JobIdT&& value) {
    SetJobId(std::forward<JobIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the bulk job.</p>
   */
  inline BulkJobStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(BulkJobStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline OpportunityBulkJobSummary& WithStatus(BulkJobStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The total number of records in the input file.</p>
   */
  inline int GetTotalRecords() const { return m_totalRecords; }
  inline bool TotalRecordsHasBeenSet() const { return m_totalRecordsHasBeenSet; }
  inline void SetTotalRecords(int value) {
    m_totalRecordsHasBeenSet = true;
    m_totalRecords = value;
  }
  inline OpportunityBulkJobSummary& WithTotalRecords(int value) {
    SetTotalRecords(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of records that Partner Central has processed so far.</p>
   */
  inline int GetProcessedRecords() const { return m_processedRecords; }
  inline bool ProcessedRecordsHasBeenSet() const { return m_processedRecordsHasBeenSet; }
  inline void SetProcessedRecords(int value) {
    m_processedRecordsHasBeenSet = true;
    m_processedRecords = value;
  }
  inline OpportunityBulkJobSummary& WithProcessedRecords(int value) {
    SetProcessedRecords(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of records that succeeded.</p>
   */
  inline int GetSuccessCount() const { return m_successCount; }
  inline bool SuccessCountHasBeenSet() const { return m_successCountHasBeenSet; }
  inline void SetSuccessCount(int value) {
    m_successCountHasBeenSet = true;
    m_successCount = value;
  }
  inline OpportunityBulkJobSummary& WithSuccessCount(int value) {
    SetSuccessCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of records that failed.</p>
   */
  inline int GetFailureCount() const { return m_failureCount; }
  inline bool FailureCountHasBeenSet() const { return m_failureCountHasBeenSet; }
  inline void SetFailureCount(int value) {
    m_failureCountHasBeenSet = true;
    m_failureCount = value;
  }
  inline OpportunityBulkJobSummary& WithFailureCount(int value) {
    SetFailureCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time, in UTC, when you created the bulk job.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  OpportunityBulkJobSummary& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time, in UTC, when the bulk job started processing records.</p>
   */
  inline const Aws::Utils::DateTime& GetStartedAt() const { return m_startedAt; }
  inline bool StartedAtHasBeenSet() const { return m_startedAtHasBeenSet; }
  template <typename StartedAtT = Aws::Utils::DateTime>
  void SetStartedAt(StartedAtT&& value) {
    m_startedAtHasBeenSet = true;
    m_startedAt = std::forward<StartedAtT>(value);
  }
  template <typename StartedAtT = Aws::Utils::DateTime>
  OpportunityBulkJobSummary& WithStartedAt(StartedAtT&& value) {
    SetStartedAt(std::forward<StartedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time, in UTC, when the bulk job finished.</p>
   */
  inline const Aws::Utils::DateTime& GetCompletedAt() const { return m_completedAt; }
  inline bool CompletedAtHasBeenSet() const { return m_completedAtHasBeenSet; }
  template <typename CompletedAtT = Aws::Utils::DateTime>
  void SetCompletedAt(CompletedAtT&& value) {
    m_completedAtHasBeenSet = true;
    m_completedAt = std::forward<CompletedAtT>(value);
  }
  template <typename CompletedAtT = Aws::Utils::DateTime>
  OpportunityBulkJobSummary& WithCompletedAt(CompletedAtT&& value) {
    SetCompletedAt(std::forward<CompletedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The reason that the bulk job failed. Present only when <code>Status</code> is
   * <code>FAILED</code>.</p>
   */
  inline const Aws::String& GetFailureReason() const { return m_failureReason; }
  inline bool FailureReasonHasBeenSet() const { return m_failureReasonHasBeenSet; }
  template <typename FailureReasonT = Aws::String>
  void SetFailureReason(FailureReasonT&& value) {
    m_failureReasonHasBeenSet = true;
    m_failureReason = std::forward<FailureReasonT>(value);
  }
  template <typename FailureReasonT = Aws::String>
  OpportunityBulkJobSummary& WithFailureReason(FailureReasonT&& value) {
    SetFailureReason(std::forward<FailureReasonT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the input file that started the bulk job. Use it to identify the
   * job by its file.</p>
   */
  inline const Aws::String& GetFileName() const { return m_fileName; }
  inline bool FileNameHasBeenSet() const { return m_fileNameHasBeenSet; }
  template <typename FileNameT = Aws::String>
  void SetFileName(FileNameT&& value) {
    m_fileNameHasBeenSet = true;
    m_fileName = std::forward<FileNameT>(value);
  }
  template <typename FileNameT = Aws::String>
  OpportunityBulkJobSummary& WithFileName(FileNameT&& value) {
    SetFileName(std::forward<FileNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates whether the bulk job creates or updates opportunities, based on the
   * template of the input file. Partner Central doesn't set this field until it
   * reads the file.</p>
   */
  inline BulkOperationType GetOperationType() const { return m_operationType; }
  inline bool OperationTypeHasBeenSet() const { return m_operationTypeHasBeenSet; }
  inline void SetOperationType(BulkOperationType value) {
    m_operationTypeHasBeenSet = true;
    m_operationType = value;
  }
  inline OpportunityBulkJobSummary& WithOperationType(BulkOperationType value) {
    SetOperationType(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_jobId;

  BulkJobStatus m_status{BulkJobStatus::NOT_SET};

  int m_totalRecords{0};

  int m_processedRecords{0};

  int m_successCount{0};

  int m_failureCount{0};

  Aws::Utils::DateTime m_createdAt{};

  Aws::Utils::DateTime m_startedAt{};

  Aws::Utils::DateTime m_completedAt{};

  Aws::String m_failureReason;

  Aws::String m_fileName;

  BulkOperationType m_operationType{BulkOperationType::NOT_SET};
  bool m_jobIdHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_totalRecordsHasBeenSet = false;
  bool m_processedRecordsHasBeenSet = false;
  bool m_successCountHasBeenSet = false;
  bool m_failureCountHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_startedAtHasBeenSet = false;
  bool m_completedAtHasBeenSet = false;
  bool m_failureReasonHasBeenSet = false;
  bool m_fileNameHasBeenSet = false;
  bool m_operationTypeHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralSelling
}  // namespace Aws
