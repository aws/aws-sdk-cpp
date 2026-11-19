/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>
#include <aws/partnercentral-selling/model/BulkJobStatus.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace PartnerCentralSelling {
namespace Model {
/**
 * <p>Information about get customer account bulk job response.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-selling-2022-07-26/GetCustomerAccountBulkJobResponse">AWS
 * API Reference</a></p>
 */
class GetCustomerAccountBulkJobResult {
 public:
  AWS_PARTNERCENTRALSELLING_API GetCustomerAccountBulkJobResult() = default;
  AWS_PARTNERCENTRALSELLING_API GetCustomerAccountBulkJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_PARTNERCENTRALSELLING_API GetCustomerAccountBulkJobResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the bulk job.</p>
   */
  inline const Aws::String& GetArn() const { return m_arn; }
  template <typename ArnT = Aws::String>
  void SetArn(ArnT&& value) {
    m_arnHasBeenSet = true;
    m_arn = std::forward<ArnT>(value);
  }
  template <typename ArnT = Aws::String>
  GetCustomerAccountBulkJobResult& WithArn(ArnT&& value) {
    SetArn(std::forward<ArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the bulk job.</p>
   */
  inline const Aws::String& GetId() const { return m_id; }
  template <typename IdT = Aws::String>
  void SetId(IdT&& value) {
    m_idHasBeenSet = true;
    m_id = std::forward<IdT>(value);
  }
  template <typename IdT = Aws::String>
  GetCustomerAccountBulkJobResult& WithId(IdT&& value) {
    SetId(std::forward<IdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the bulk job.</p>
   */
  inline BulkJobStatus GetStatus() const { return m_status; }
  inline void SetStatus(BulkJobStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline GetCustomerAccountBulkJobResult& WithStatus(BulkJobStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the file that the job processes.</p>
   */
  inline const Aws::String& GetFileName() const { return m_fileName; }
  template <typename FileNameT = Aws::String>
  void SetFileName(FileNameT&& value) {
    m_fileNameHasBeenSet = true;
    m_fileName = std::forward<FileNameT>(value);
  }
  template <typename FileNameT = Aws::String>
  GetCustomerAccountBulkJobResult& WithFileName(FileNameT&& value) {
    SetFileName(std::forward<FileNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The total number of records in the file. The value is 0 until the job reads
   * the file.</p>
   */
  inline int GetTotalRecords() const { return m_totalRecords; }
  inline void SetTotalRecords(int value) {
    m_totalRecordsHasBeenSet = true;
    m_totalRecords = value;
  }
  inline GetCustomerAccountBulkJobResult& WithTotalRecords(int value) {
    SetTotalRecords(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of records that the job has finished processing.</p>
   */
  inline int GetProcessedRecords() const { return m_processedRecords; }
  inline void SetProcessedRecords(int value) {
    m_processedRecordsHasBeenSet = true;
    m_processedRecords = value;
  }
  inline GetCustomerAccountBulkJobResult& WithProcessedRecords(int value) {
    SetProcessedRecords(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of records that the job processed successfully.</p>
   */
  inline int GetSuccessCount() const { return m_successCount; }
  inline void SetSuccessCount(int value) {
    m_successCountHasBeenSet = true;
    m_successCount = value;
  }
  inline GetCustomerAccountBulkJobResult& WithSuccessCount(int value) {
    SetSuccessCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of records that failed.</p>
   */
  inline int GetFailureCount() const { return m_failureCount; }
  inline void SetFailureCount(int value) {
    m_failureCountHasBeenSet = true;
    m_failureCount = value;
  }
  inline GetCustomerAccountBulkJobResult& WithFailureCount(int value) {
    SetFailureCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of accounts imported by this job that have since been deleted.
   * This counter only increases, so the accounts still present equal
   * <code>SuccessCount</code> minus <code>DeletedCount</code>.</p>
   */
  inline int GetDeletedCount() const { return m_deletedCount; }
  inline void SetDeletedCount(int value) {
    m_deletedCountHasBeenSet = true;
    m_deletedCount = value;
  }
  inline GetCustomerAccountBulkJobResult& WithDeletedCount(int value) {
    SetDeletedCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The reason that the job failed. Present only when the job status is
   * <code>FAILED</code>.</p>
   */
  inline const Aws::String& GetFailureReason() const { return m_failureReason; }
  template <typename FailureReasonT = Aws::String>
  void SetFailureReason(FailureReasonT&& value) {
    m_failureReasonHasBeenSet = true;
    m_failureReason = std::forward<FailureReasonT>(value);
  }
  template <typename FailureReasonT = Aws::String>
  GetCustomerAccountBulkJobResult& WithFailureReason(FailureReasonT&& value) {
    SetFailureReason(std::forward<FailureReasonT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when the bulk job was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  GetCustomerAccountBulkJobResult& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when the job finished. Absent while the job is running.</p>
   */
  inline const Aws::Utils::DateTime& GetCompletedAt() const { return m_completedAt; }
  template <typename CompletedAtT = Aws::Utils::DateTime>
  void SetCompletedAt(CompletedAtT&& value) {
    m_completedAtHasBeenSet = true;
    m_completedAt = std::forward<CompletedAtT>(value);
  }
  template <typename CompletedAtT = Aws::Utils::DateTime>
  GetCustomerAccountBulkJobResult& WithCompletedAt(CompletedAtT&& value) {
    SetCompletedAt(std::forward<CompletedAtT>(value));
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
  GetCustomerAccountBulkJobResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_arn;

  Aws::String m_id;

  BulkJobStatus m_status{BulkJobStatus::NOT_SET};

  Aws::String m_fileName;

  int m_totalRecords{0};

  int m_processedRecords{0};

  int m_successCount{0};

  int m_failureCount{0};

  int m_deletedCount{0};

  Aws::String m_failureReason;

  Aws::Utils::DateTime m_createdAt{};

  Aws::Utils::DateTime m_completedAt{};

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_arnHasBeenSet = false;
  bool m_idHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_fileNameHasBeenSet = false;
  bool m_totalRecordsHasBeenSet = false;
  bool m_processedRecordsHasBeenSet = false;
  bool m_successCountHasBeenSet = false;
  bool m_failureCountHasBeenSet = false;
  bool m_deletedCountHasBeenSet = false;
  bool m_failureReasonHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_completedAtHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralSelling
}  // namespace Aws
