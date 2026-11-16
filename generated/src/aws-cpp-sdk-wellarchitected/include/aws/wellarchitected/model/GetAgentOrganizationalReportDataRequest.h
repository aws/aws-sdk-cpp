/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wellarchitected/WellArchitectedRequest.h>
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>
#include <aws/wellarchitected/model/OrganizationalReportFormat.h>

#include <utility>

namespace Aws {
namespace Http {
class URI;
}  // namespace Http
namespace WellArchitected {
namespace Model {

/**
 */
class GetAgentOrganizationalReportDataRequest : public WellArchitectedRequest {
 public:
  AWS_WELLARCHITECTED_API GetAgentOrganizationalReportDataRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "GetAgentOrganizationalReportData"; }

  AWS_WELLARCHITECTED_API Aws::String SerializePayload() const override;

  AWS_WELLARCHITECTED_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

  /**
   * Helper function to collect parameters (configurable and static hardcoded) required for endpoint computation.
   */
  AWS_WELLARCHITECTED_API EndpointParameters GetEndpointContextParams() const override;

  ///@{
  /**
   * <p>Identifier of the report whose data is being retrieved.</p>
   */
  inline const Aws::String& GetReportId() const { return m_reportId; }
  inline bool ReportIdHasBeenSet() const { return m_reportIdHasBeenSet; }
  template <typename ReportIdT = Aws::String>
  void SetReportId(ReportIdT&& value) {
    m_reportIdHasBeenSet = true;
    m_reportId = std::forward<ReportIdT>(value);
  }
  template <typename ReportIdT = Aws::String>
  GetAgentOrganizationalReportDataRequest& WithReportId(ReportIdT&& value) {
    SetReportId(std::forward<ReportIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Format of the returned artifact (CSV, JSON, or PARQUET).</p>
   */
  inline OrganizationalReportFormat GetFormat() const { return m_format; }
  inline bool FormatHasBeenSet() const { return m_formatHasBeenSet; }
  inline void SetFormat(OrganizationalReportFormat value) {
    m_formatHasBeenSet = true;
    m_format = value;
  }
  inline GetAgentOrganizationalReportDataRequest& WithFormat(OrganizationalReportFormat value) {
    SetFormat(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_reportId;

  OrganizationalReportFormat m_format{OrganizationalReportFormat::NOT_SET};
  bool m_reportIdHasBeenSet = false;
  bool m_formatHasBeenSet = false;
};

}  // namespace Model
}  // namespace WellArchitected
}  // namespace Aws
