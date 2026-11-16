/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>
#include <aws/wellarchitected/model/CoverageSummary.h>
#include <aws/wellarchitected/model/OrganizationalReportFilters.h>
#include <aws/wellarchitected/model/OrganizationalReportState.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace WellArchitected {
namespace Model {
class GetAgentOrganizationalReportResult {
 public:
  AWS_WELLARCHITECTED_API GetAgentOrganizationalReportResult() = default;
  AWS_WELLARCHITECTED_API GetAgentOrganizationalReportResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_WELLARCHITECTED_API GetAgentOrganizationalReportResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>Unique identifier of the Organizational Report assigned by the service at
   * creation time.</p>
   */
  inline const Aws::String& GetReportId() const { return m_reportId; }
  template <typename ReportIdT = Aws::String>
  void SetReportId(ReportIdT&& value) {
    m_reportIdHasBeenSet = true;
    m_reportId = std::forward<ReportIdT>(value);
  }
  template <typename ReportIdT = Aws::String>
  GetAgentOrganizationalReportResult& WithReportId(ReportIdT&& value) {
    SetReportId(std::forward<ReportIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>AWS account ID of the caller that created the report. Only this account or a
   * delegated administrator of the same organization may retrieve or delete the
   * report.</p>
   */
  inline const Aws::String& GetOwnerAccountId() const { return m_ownerAccountId; }
  template <typename OwnerAccountIdT = Aws::String>
  void SetOwnerAccountId(OwnerAccountIdT&& value) {
    m_ownerAccountIdHasBeenSet = true;
    m_ownerAccountId = std::forward<OwnerAccountIdT>(value);
  }
  template <typename OwnerAccountIdT = Aws::String>
  GetAgentOrganizationalReportResult& WithOwnerAccountId(OwnerAccountIdT&& value) {
    SetOwnerAccountId(std::forward<OwnerAccountIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Identifier of the AWS Organization the report belongs to. Derived from the
   * caller's authorization context at creation time and not accepted as a
   * client-supplied input.</p>
   */
  inline const Aws::String& GetOrganizationId() const { return m_organizationId; }
  template <typename OrganizationIdT = Aws::String>
  void SetOrganizationId(OrganizationIdT&& value) {
    m_organizationIdHasBeenSet = true;
    m_organizationId = std::forward<OrganizationIdT>(value);
  }
  template <typename OrganizationIdT = Aws::String>
  GetAgentOrganizationalReportResult& WithOrganizationId(OrganizationIdT&& value) {
    SetOrganizationId(std::forward<OrganizationIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Optional human-readable label supplied by the caller at creation time.</p>
   */
  inline const Aws::String& GetLabel() const { return m_label; }
  template <typename LabelT = Aws::String>
  void SetLabel(LabelT&& value) {
    m_labelHasBeenSet = true;
    m_label = std::forward<LabelT>(value);
  }
  template <typename LabelT = Aws::String>
  GetAgentOrganizationalReportResult& WithLabel(LabelT&& value) {
    SetLabel(std::forward<LabelT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Current lifecycle state of the report.</p>
   */
  inline OrganizationalReportState GetState() const { return m_state; }
  inline void SetState(OrganizationalReportState value) {
    m_stateHasBeenSet = true;
    m_state = value;
  }
  inline GetAgentOrganizationalReportResult& WithState(OrganizationalReportState value) {
    SetState(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Timestamp at which the report was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  GetAgentOrganizationalReportResult& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filters captured when the report was created. Absent when no filters were
   * supplied (meaning the report covered the whole organization).</p>
   */
  inline const OrganizationalReportFilters& GetFilters() const { return m_filters; }
  template <typename FiltersT = OrganizationalReportFilters>
  void SetFilters(FiltersT&& value) {
    m_filtersHasBeenSet = true;
    m_filters = std::forward<FiltersT>(value);
  }
  template <typename FiltersT = OrganizationalReportFilters>
  GetAgentOrganizationalReportResult& WithFilters(FiltersT&& value) {
    SetFilters(std::forward<FiltersT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Coverage and aggregate counts for the report. Present only after the report
   * reaches COMPLETED.</p>
   */
  inline const CoverageSummary& GetCoverageSummary() const { return m_coverageSummary; }
  template <typename CoverageSummaryT = CoverageSummary>
  void SetCoverageSummary(CoverageSummaryT&& value) {
    m_coverageSummaryHasBeenSet = true;
    m_coverageSummary = std::forward<CoverageSummaryT>(value);
  }
  template <typename CoverageSummaryT = CoverageSummary>
  GetAgentOrganizationalReportResult& WithCoverageSummary(CoverageSummaryT&& value) {
    SetCoverageSummary(std::forward<CoverageSummaryT>(value));
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
  GetAgentOrganizationalReportResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_reportId;

  Aws::String m_ownerAccountId;

  Aws::String m_organizationId;

  Aws::String m_label;

  OrganizationalReportState m_state{OrganizationalReportState::NOT_SET};

  Aws::Utils::DateTime m_createdAt{};

  OrganizationalReportFilters m_filters;

  CoverageSummary m_coverageSummary;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_reportIdHasBeenSet = false;
  bool m_ownerAccountIdHasBeenSet = false;
  bool m_organizationIdHasBeenSet = false;
  bool m_labelHasBeenSet = false;
  bool m_stateHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_filtersHasBeenSet = false;
  bool m_coverageSummaryHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace WellArchitected
}  // namespace Aws
