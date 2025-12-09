/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/s3tables/S3Tables_EXPORTS.h>
#include <aws/s3tables/model/TableRecordExpirationJobMetrics.h>
#include <aws/s3tables/model/TableRecordExpirationJobStatus.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace S3Tables {
namespace Model {
class GetTableRecordExpirationJobStatusResult {
 public:
  AWS_S3TABLES_API GetTableRecordExpirationJobStatusResult() = default;
  AWS_S3TABLES_API GetTableRecordExpirationJobStatusResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_S3TABLES_API GetTableRecordExpirationJobStatusResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The current status of the most recent expiration job.</p>
   */
  inline TableRecordExpirationJobStatus GetStatus() const { return m_status; }
  inline void SetStatus(TableRecordExpirationJobStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline GetTableRecordExpirationJobStatusResult& WithStatus(TableRecordExpirationJobStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the expiration job was last executed.</p>
   */
  inline const Aws::Utils::DateTime& GetLastRunTimestamp() const { return m_lastRunTimestamp; }
  template <typename LastRunTimestampT = Aws::Utils::DateTime>
  void SetLastRunTimestamp(LastRunTimestampT&& value) {
    m_lastRunTimestampHasBeenSet = true;
    m_lastRunTimestamp = std::forward<LastRunTimestampT>(value);
  }
  template <typename LastRunTimestampT = Aws::Utils::DateTime>
  GetTableRecordExpirationJobStatusResult& WithLastRunTimestamp(LastRunTimestampT&& value) {
    SetLastRunTimestamp(std::forward<LastRunTimestampT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>If the job failed, this field contains an error message describing the
   * failure reason.</p>
   */
  inline const Aws::String& GetFailureMessage() const { return m_failureMessage; }
  template <typename FailureMessageT = Aws::String>
  void SetFailureMessage(FailureMessageT&& value) {
    m_failureMessageHasBeenSet = true;
    m_failureMessage = std::forward<FailureMessageT>(value);
  }
  template <typename FailureMessageT = Aws::String>
  GetTableRecordExpirationJobStatusResult& WithFailureMessage(FailureMessageT&& value) {
    SetFailureMessage(std::forward<FailureMessageT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Metrics about the most recent expiration job execution, including the number
   * of records and files deleted.</p>
   */
  inline const TableRecordExpirationJobMetrics& GetMetrics() const { return m_metrics; }
  template <typename MetricsT = TableRecordExpirationJobMetrics>
  void SetMetrics(MetricsT&& value) {
    m_metricsHasBeenSet = true;
    m_metrics = std::forward<MetricsT>(value);
  }
  template <typename MetricsT = TableRecordExpirationJobMetrics>
  GetTableRecordExpirationJobStatusResult& WithMetrics(MetricsT&& value) {
    SetMetrics(std::forward<MetricsT>(value));
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
  GetTableRecordExpirationJobStatusResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  TableRecordExpirationJobStatus m_status{TableRecordExpirationJobStatus::NOT_SET};

  Aws::Utils::DateTime m_lastRunTimestamp{};

  Aws::String m_failureMessage;

  TableRecordExpirationJobMetrics m_metrics;

  Aws::String m_requestId;
  bool m_statusHasBeenSet = false;
  bool m_lastRunTimestampHasBeenSet = false;
  bool m_failureMessageHasBeenSet = false;
  bool m_metricsHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace S3Tables
}  // namespace Aws
