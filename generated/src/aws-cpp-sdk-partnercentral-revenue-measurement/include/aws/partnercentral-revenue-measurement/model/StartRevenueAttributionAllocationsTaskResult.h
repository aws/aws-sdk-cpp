/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/partnercentral-revenue-measurement/PartnerCentralRevenueMeasurement_EXPORTS.h>
#include <aws/partnercentral-revenue-measurement/model/CatalogName.h>
#include <aws/partnercentral-revenue-measurement/model/RevenueAttributionAllocationTaskStatus.h>

#include <utility>
namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace PartnerCentralRevenueMeasurement {
namespace Model {
class StartRevenueAttributionAllocationsTaskResult {
 public:
  AWS_PARTNERCENTRALREVENUEMEASUREMENT_API StartRevenueAttributionAllocationsTaskResult() = default;
  AWS_PARTNERCENTRALREVENUEMEASUREMENT_API StartRevenueAttributionAllocationsTaskResult(
      const Aws::AmazonWebServiceResult<Aws::Utils::Cbor::CborValue>& result);
  AWS_PARTNERCENTRALREVENUEMEASUREMENT_API StartRevenueAttributionAllocationsTaskResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Cbor::CborValue>& result);

  ///@{
  /**
   * <p>Unique identifier for the submitted task.</p>
   */
  inline const Aws::String& GetTaskId() const { return m_taskId; }
  template <typename TaskIdT = Aws::String>
  void SetTaskId(TaskIdT&& value) {
    m_taskIdHasBeenSet = true;
    m_taskId = std::forward<TaskIdT>(value);
  }
  template <typename TaskIdT = Aws::String>
  StartRevenueAttributionAllocationsTaskResult& WithTaskId(TaskIdT&& value) {
    SetTaskId(std::forward<TaskIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Initial task status. Always IN_PROGRESS on successful submission.</p>
   */
  inline RevenueAttributionAllocationTaskStatus GetStatus() const { return m_status; }
  inline void SetStatus(RevenueAttributionAllocationTaskStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline StartRevenueAttributionAllocationsTaskResult& WithStatus(RevenueAttributionAllocationTaskStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The catalog used for this task.</p>
   */
  inline CatalogName GetCatalog() const { return m_catalog; }
  inline void SetCatalog(CatalogName value) {
    m_catalogHasBeenSet = true;
    m_catalog = value;
  }
  inline StartRevenueAttributionAllocationsTaskResult& WithCatalog(CatalogName value) {
    SetCatalog(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>ARN of the revenue attribution resource.</p>
   */
  inline const Aws::String& GetRevenueAttributionArn() const { return m_revenueAttributionArn; }
  template <typename RevenueAttributionArnT = Aws::String>
  void SetRevenueAttributionArn(RevenueAttributionArnT&& value) {
    m_revenueAttributionArnHasBeenSet = true;
    m_revenueAttributionArn = std::forward<RevenueAttributionArnT>(value);
  }
  template <typename RevenueAttributionArnT = Aws::String>
  StartRevenueAttributionAllocationsTaskResult& WithRevenueAttributionArn(RevenueAttributionArnT&& value) {
    SetRevenueAttributionArn(std::forward<RevenueAttributionArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>When processing started.</p>
   */
  inline const Aws::Utils::DateTime& GetStartedAt() const { return m_startedAt; }
  template <typename StartedAtT = Aws::Utils::DateTime>
  void SetStartedAt(StartedAtT&& value) {
    m_startedAtHasBeenSet = true;
    m_startedAt = std::forward<StartedAtT>(value);
  }
  template <typename StartedAtT = Aws::Utils::DateTime>
  StartRevenueAttributionAllocationsTaskResult& WithStartedAt(StartedAtT&& value) {
    SetStartedAt(std::forward<StartedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Total revenue attribution allocation records in the batch.</p>
   */
  inline int64_t GetTotalRevenueAttributionAllocationRecords() const { return m_totalRevenueAttributionAllocationRecords; }
  inline void SetTotalRevenueAttributionAllocationRecords(int64_t value) {
    m_totalRevenueAttributionAllocationRecordsHasBeenSet = true;
    m_totalRevenueAttributionAllocationRecords = value;
  }
  inline StartRevenueAttributionAllocationsTaskResult& WithTotalRevenueAttributionAllocationRecords(int64_t value) {
    SetTotalRevenueAttributionAllocationRecords(value);
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
  StartRevenueAttributionAllocationsTaskResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_taskId;

  RevenueAttributionAllocationTaskStatus m_status{RevenueAttributionAllocationTaskStatus::NOT_SET};

  CatalogName m_catalog{CatalogName::NOT_SET};

  Aws::String m_revenueAttributionArn;

  Aws::Utils::DateTime m_startedAt{};

  int64_t m_totalRevenueAttributionAllocationRecords{0};

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_taskIdHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_catalogHasBeenSet = false;
  bool m_revenueAttributionArnHasBeenSet = false;
  bool m_startedAtHasBeenSet = false;
  bool m_totalRevenueAttributionAllocationRecordsHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralRevenueMeasurement
}  // namespace Aws
