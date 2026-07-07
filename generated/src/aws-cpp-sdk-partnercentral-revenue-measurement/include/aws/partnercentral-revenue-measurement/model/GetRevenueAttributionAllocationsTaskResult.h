/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/partnercentral-revenue-measurement/PartnerCentralRevenueMeasurement_EXPORTS.h>
#include <aws/partnercentral-revenue-measurement/model/CatalogName.h>
#include <aws/partnercentral-revenue-measurement/model/RevenueAttributionAllocationErrorDetail.h>
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
class GetRevenueAttributionAllocationsTaskResult {
 public:
  AWS_PARTNERCENTRALREVENUEMEASUREMENT_API GetRevenueAttributionAllocationsTaskResult() = default;
  AWS_PARTNERCENTRALREVENUEMEASUREMENT_API GetRevenueAttributionAllocationsTaskResult(
      const Aws::AmazonWebServiceResult<Aws::Utils::Cbor::CborValue>& result);
  AWS_PARTNERCENTRALREVENUEMEASUREMENT_API GetRevenueAttributionAllocationsTaskResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Cbor::CborValue>& result);

  ///@{
  /**
   * <p>The unique identifier for the asynchronous task.</p>
   */
  inline const Aws::String& GetTaskId() const { return m_taskId; }
  template <typename TaskIdT = Aws::String>
  void SetTaskId(TaskIdT&& value) {
    m_taskIdHasBeenSet = true;
    m_taskId = std::forward<TaskIdT>(value);
  }
  template <typename TaskIdT = Aws::String>
  GetRevenueAttributionAllocationsTaskResult& WithTaskId(TaskIdT&& value) {
    SetTaskId(std::forward<TaskIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Current task status.</p>
   */
  inline RevenueAttributionAllocationTaskStatus GetStatus() const { return m_status; }
  inline void SetStatus(RevenueAttributionAllocationTaskStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline GetRevenueAttributionAllocationsTaskResult& WithStatus(RevenueAttributionAllocationTaskStatus value) {
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
  inline GetRevenueAttributionAllocationsTaskResult& WithCatalog(CatalogName value) {
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
  GetRevenueAttributionAllocationsTaskResult& WithRevenueAttributionArn(RevenueAttributionArnT&& value) {
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
  GetRevenueAttributionAllocationsTaskResult& WithStartedAt(StartedAtT&& value) {
    SetStartedAt(std::forward<StartedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>When processing ended. Only present when COMPLETE or FAILED.</p>
   */
  inline const Aws::Utils::DateTime& GetEndedAt() const { return m_endedAt; }
  template <typename EndedAtT = Aws::Utils::DateTime>
  void SetEndedAt(EndedAtT&& value) {
    m_endedAtHasBeenSet = true;
    m_endedAt = std::forward<EndedAtT>(value);
  }
  template <typename EndedAtT = Aws::Utils::DateTime>
  GetRevenueAttributionAllocationsTaskResult& WithEndedAt(EndedAtT&& value) {
    SetEndedAt(std::forward<EndedAtT>(value));
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
  inline GetRevenueAttributionAllocationsTaskResult& WithTotalRevenueAttributionAllocationRecords(int64_t value) {
    SetTotalRevenueAttributionAllocationRecords(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Human-readable description, if provided at creation.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  GetRevenueAttributionAllocationsTaskResult& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The revision number assigned to this batch. Only present when COMPLETE.</p>
   */
  inline const Aws::String& GetRevenueAttributionLatestRevision() const { return m_revenueAttributionLatestRevision; }
  template <typename RevenueAttributionLatestRevisionT = Aws::String>
  void SetRevenueAttributionLatestRevision(RevenueAttributionLatestRevisionT&& value) {
    m_revenueAttributionLatestRevisionHasBeenSet = true;
    m_revenueAttributionLatestRevision = std::forward<RevenueAttributionLatestRevisionT>(value);
  }
  template <typename RevenueAttributionLatestRevisionT = Aws::String>
  GetRevenueAttributionAllocationsTaskResult& WithRevenueAttributionLatestRevision(RevenueAttributionLatestRevisionT&& value) {
    SetRevenueAttributionLatestRevision(std::forward<RevenueAttributionLatestRevisionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>All errors discovered during async processing. Only present when FAILED.</p>
   */
  inline const Aws::Vector<RevenueAttributionAllocationErrorDetail>& GetErrorDetailList() const { return m_errorDetailList; }
  template <typename ErrorDetailListT = Aws::Vector<RevenueAttributionAllocationErrorDetail>>
  void SetErrorDetailList(ErrorDetailListT&& value) {
    m_errorDetailListHasBeenSet = true;
    m_errorDetailList = std::forward<ErrorDetailListT>(value);
  }
  template <typename ErrorDetailListT = Aws::Vector<RevenueAttributionAllocationErrorDetail>>
  GetRevenueAttributionAllocationsTaskResult& WithErrorDetailList(ErrorDetailListT&& value) {
    SetErrorDetailList(std::forward<ErrorDetailListT>(value));
    return *this;
  }
  template <typename ErrorDetailListT = RevenueAttributionAllocationErrorDetail>
  GetRevenueAttributionAllocationsTaskResult& AddErrorDetailList(ErrorDetailListT&& value) {
    m_errorDetailListHasBeenSet = true;
    m_errorDetailList.emplace_back(std::forward<ErrorDetailListT>(value));
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
  GetRevenueAttributionAllocationsTaskResult& WithRequestId(RequestIdT&& value) {
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

  Aws::Utils::DateTime m_endedAt{};

  int64_t m_totalRevenueAttributionAllocationRecords{0};

  Aws::String m_description;

  Aws::String m_revenueAttributionLatestRevision;

  Aws::Vector<RevenueAttributionAllocationErrorDetail> m_errorDetailList;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_taskIdHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_catalogHasBeenSet = false;
  bool m_revenueAttributionArnHasBeenSet = false;
  bool m_startedAtHasBeenSet = false;
  bool m_endedAtHasBeenSet = false;
  bool m_totalRevenueAttributionAllocationRecordsHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_revenueAttributionLatestRevisionHasBeenSet = false;
  bool m_errorDetailListHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralRevenueMeasurement
}  // namespace Aws
