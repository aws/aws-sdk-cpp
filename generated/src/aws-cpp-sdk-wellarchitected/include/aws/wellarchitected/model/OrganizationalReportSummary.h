/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>
#include <aws/wellarchitected/model/OrganizationalReportState.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace WellArchitected {
namespace Model {

/**
 * <p>Summary of an Organizational Report returned in a list response. Includes the
 * core fields of the full report and the optional label, but omits the filters and
 * coverage summary. The filters and coverage summary are available through
 * GetAgentOrganizationalReport. The coverage summary is populated once the report
 * reaches COMPLETED.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/OrganizationalReportSummary">AWS
 * API Reference</a></p>
 */
class OrganizationalReportSummary {
 public:
  AWS_WELLARCHITECTED_API OrganizationalReportSummary() = default;
  AWS_WELLARCHITECTED_API OrganizationalReportSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_WELLARCHITECTED_API OrganizationalReportSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_WELLARCHITECTED_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Unique identifier of the Organizational Report assigned by the service at
   * creation time.</p>
   */
  inline const Aws::String& GetReportId() const { return m_reportId; }
  inline bool ReportIdHasBeenSet() const { return m_reportIdHasBeenSet; }
  template <typename ReportIdT = Aws::String>
  void SetReportId(ReportIdT&& value) {
    m_reportIdHasBeenSet = true;
    m_reportId = std::forward<ReportIdT>(value);
  }
  template <typename ReportIdT = Aws::String>
  OrganizationalReportSummary& WithReportId(ReportIdT&& value) {
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
  inline bool OwnerAccountIdHasBeenSet() const { return m_ownerAccountIdHasBeenSet; }
  template <typename OwnerAccountIdT = Aws::String>
  void SetOwnerAccountId(OwnerAccountIdT&& value) {
    m_ownerAccountIdHasBeenSet = true;
    m_ownerAccountId = std::forward<OwnerAccountIdT>(value);
  }
  template <typename OwnerAccountIdT = Aws::String>
  OrganizationalReportSummary& WithOwnerAccountId(OwnerAccountIdT&& value) {
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
  inline bool OrganizationIdHasBeenSet() const { return m_organizationIdHasBeenSet; }
  template <typename OrganizationIdT = Aws::String>
  void SetOrganizationId(OrganizationIdT&& value) {
    m_organizationIdHasBeenSet = true;
    m_organizationId = std::forward<OrganizationIdT>(value);
  }
  template <typename OrganizationIdT = Aws::String>
  OrganizationalReportSummary& WithOrganizationId(OrganizationIdT&& value) {
    SetOrganizationId(std::forward<OrganizationIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Optional human-readable label supplied by the caller at creation time.</p>
   */
  inline const Aws::String& GetLabel() const { return m_label; }
  inline bool LabelHasBeenSet() const { return m_labelHasBeenSet; }
  template <typename LabelT = Aws::String>
  void SetLabel(LabelT&& value) {
    m_labelHasBeenSet = true;
    m_label = std::forward<LabelT>(value);
  }
  template <typename LabelT = Aws::String>
  OrganizationalReportSummary& WithLabel(LabelT&& value) {
    SetLabel(std::forward<LabelT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Current lifecycle state of the report.</p>
   */
  inline OrganizationalReportState GetState() const { return m_state; }
  inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
  inline void SetState(OrganizationalReportState value) {
    m_stateHasBeenSet = true;
    m_state = value;
  }
  inline OrganizationalReportSummary& WithState(OrganizationalReportState value) {
    SetState(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Timestamp at which the report was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  OrganizationalReportSummary& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_reportId;

  Aws::String m_ownerAccountId;

  Aws::String m_organizationId;

  Aws::String m_label;

  OrganizationalReportState m_state{OrganizationalReportState::NOT_SET};

  Aws::Utils::DateTime m_createdAt{};
  bool m_reportIdHasBeenSet = false;
  bool m_ownerAccountIdHasBeenSet = false;
  bool m_organizationIdHasBeenSet = false;
  bool m_labelHasBeenSet = false;
  bool m_stateHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
};

}  // namespace Model
}  // namespace WellArchitected
}  // namespace Aws
