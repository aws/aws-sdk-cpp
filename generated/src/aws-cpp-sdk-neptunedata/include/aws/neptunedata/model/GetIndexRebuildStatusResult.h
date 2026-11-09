/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/neptunedata/Neptunedata_EXPORTS.h>
#include <aws/neptunedata/model/RebuildStatus.h>
#include <aws/neptunedata/model/Scope.h>
#include <aws/neptunedata/model/WriteBufferSize.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace neptunedata {
namespace Model {
class GetIndexRebuildStatusResult {
 public:
  AWS_NEPTUNEDATA_API GetIndexRebuildStatusResult() = default;
  AWS_NEPTUNEDATA_API GetIndexRebuildStatusResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_NEPTUNEDATA_API GetIndexRebuildStatusResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The current status of the rebuild operation. See <code>RebuildStatus</code>
   * for possible values: <code>PREPARING</code>, <code>REBUILDING</code>,
   * <code>COMPLETED</code>, <code>FAILED</code>, <code>CANCELLING</code> or
   * <code>CANCELLED</code>.</p>
   */
  inline RebuildStatus GetStatus() const { return m_status; }
  inline void SetStatus(RebuildStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline GetIndexRebuildStatusResult& WithStatus(RebuildStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The scope of the rebuild operation. See <code>Scope</code> for possible
   * values: <code>ALL</code>, <code>QUADS</code>, or <code>DICTIONARIES</code>.</p>
   */
  inline Scope GetScope() const { return m_scope; }
  inline void SetScope(Scope value) {
    m_scopeHasBeenSet = true;
    m_scope = value;
  }
  inline GetIndexRebuildStatusResult& WithScope(Scope value) {
    SetScope(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The concurrency in effect for this rebuild, as echoed from the original
   * <code>StartIndexRebuild</code> request.</p>
   */
  inline int GetConcurrency() const { return m_concurrency; }
  inline void SetConcurrency(int value) {
    m_concurrencyHasBeenSet = true;
    m_concurrency = value;
  }
  inline GetIndexRebuildStatusResult& WithConcurrency(int value) {
    SetConcurrency(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The <code>WriteBufferSize</code> in effect for this rebuild, as echoed from
   * the original <code>StartIndexRebuild</code> request.</p>
   */
  inline WriteBufferSize GetWriteBufferSize() const { return m_writeBufferSize; }
  inline void SetWriteBufferSize(WriteBufferSize value) {
    m_writeBufferSizeHasBeenSet = true;
    m_writeBufferSize = value;
  }
  inline GetIndexRebuildStatusResult& WithWriteBufferSize(WriteBufferSize value) {
    SetWriteBufferSize(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ISO-8601 timestamp indicating when the index rebuild operation
   * started.</p>
   */
  inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
  template <typename StartTimeT = Aws::Utils::DateTime>
  void SetStartTime(StartTimeT&& value) {
    m_startTimeHasBeenSet = true;
    m_startTime = std::forward<StartTimeT>(value);
  }
  template <typename StartTimeT = Aws::Utils::DateTime>
  GetIndexRebuildStatusResult& WithStartTime(StartTimeT&& value) {
    SetStartTime(std::forward<StartTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The percentage of the index rebuild operation that has been completed,
   * expressed as an integer from 0 to 100.</p>
   */
  inline int GetProgressPercentage() const { return m_progressPercentage; }
  inline void SetProgressPercentage(int value) {
    m_progressPercentageHasBeenSet = true;
    m_progressPercentage = value;
  }
  inline GetIndexRebuildStatusResult& WithProgressPercentage(int value) {
    SetProgressPercentage(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The estimated ISO-8601 timestamp for when the index rebuild operation will
   * complete. The estimate may change as the operation progresses.</p>
   */
  inline const Aws::Utils::DateTime& GetEstimatedEndTime() const { return m_estimatedEndTime; }
  template <typename EstimatedEndTimeT = Aws::Utils::DateTime>
  void SetEstimatedEndTime(EstimatedEndTimeT&& value) {
    m_estimatedEndTimeHasBeenSet = true;
    m_estimatedEndTime = std::forward<EstimatedEndTimeT>(value);
  }
  template <typename EstimatedEndTimeT = Aws::Utils::DateTime>
  GetIndexRebuildStatusResult& WithEstimatedEndTime(EstimatedEndTimeT&& value) {
    SetEstimatedEndTime(std::forward<EstimatedEndTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ISO-8601 timestamp indicating when the index rebuild operation completed.
   * This field is only present when the operation has completed (status is
   * <code>COMPLETED</code>, <code>FAILED</code>, or <code>CANCELLED</code>).</p>
   */
  inline const Aws::Utils::DateTime& GetEndTime() const { return m_endTime; }
  template <typename EndTimeT = Aws::Utils::DateTime>
  void SetEndTime(EndTimeT&& value) {
    m_endTimeHasBeenSet = true;
    m_endTime = std::forward<EndTimeT>(value);
  }
  template <typename EndTimeT = Aws::Utils::DateTime>
  GetIndexRebuildStatusResult& WithEndTime(EndTimeT&& value) {
    SetEndTime(std::forward<EndTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The reason for the failure, if the rebuild operation failed. This field is
   * only populated when the status is <code>FAILED</code>.</p>
   */
  inline const Aws::String& GetFailureReason() const { return m_failureReason; }
  template <typename FailureReasonT = Aws::String>
  void SetFailureReason(FailureReasonT&& value) {
    m_failureReasonHasBeenSet = true;
    m_failureReason = std::forward<FailureReasonT>(value);
  }
  template <typename FailureReasonT = Aws::String>
  GetIndexRebuildStatusResult& WithFailureReason(FailureReasonT&& value) {
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
  GetIndexRebuildStatusResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  RebuildStatus m_status{RebuildStatus::NOT_SET};

  Scope m_scope{Scope::NOT_SET};

  int m_concurrency{0};

  WriteBufferSize m_writeBufferSize{WriteBufferSize::NOT_SET};

  Aws::Utils::DateTime m_startTime{};

  int m_progressPercentage{0};

  Aws::Utils::DateTime m_estimatedEndTime{};

  Aws::Utils::DateTime m_endTime{};

  Aws::String m_failureReason;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_statusHasBeenSet = false;
  bool m_scopeHasBeenSet = false;
  bool m_concurrencyHasBeenSet = false;
  bool m_writeBufferSizeHasBeenSet = false;
  bool m_startTimeHasBeenSet = false;
  bool m_progressPercentageHasBeenSet = false;
  bool m_estimatedEndTimeHasBeenSet = false;
  bool m_endTimeHasBeenSet = false;
  bool m_failureReasonHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace neptunedata
}  // namespace Aws
