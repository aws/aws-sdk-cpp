/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/partnercentral-selling/PartnerCentralSellingRequest.h>
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>
#include <aws/partnercentral-selling/model/BulkFileFormat.h>
#include <aws/partnercentral-selling/model/BulkReportType.h>

#include <utility>

namespace Aws {
namespace PartnerCentralSelling {
namespace Model {

/**
 * <p>Specifies the catalog, job identifier, and report format for getting the
 * report URL of an opportunity bulk job.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-selling-2022-07-26/GetOpportunityBulkJobReportUrlRequest">AWS
 * API Reference</a></p>
 */
class GetOpportunityBulkJobReportUrlRequest : public PartnerCentralSellingRequest {
 public:
  AWS_PARTNERCENTRALSELLING_API GetOpportunityBulkJobReportUrlRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "GetOpportunityBulkJobReportUrl"; }

  AWS_PARTNERCENTRALSELLING_API Aws::String SerializePayload() const override;

  AWS_PARTNERCENTRALSELLING_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>Specifies the catalog for the request. Valid values:</p> <ul> <li> <p>
   * <code>AWS</code>: Production.</p> </li> <li> <p> <code>Sandbox</code>: Testing
   * environments.</p> </li> </ul>
   */
  inline const Aws::String& GetCatalog() const { return m_catalog; }
  inline bool CatalogHasBeenSet() const { return m_catalogHasBeenSet; }
  template <typename CatalogT = Aws::String>
  void SetCatalog(CatalogT&& value) {
    m_catalogHasBeenSet = true;
    m_catalog = std::forward<CatalogT>(value);
  }
  template <typename CatalogT = Aws::String>
  GetOpportunityBulkJobReportUrlRequest& WithCatalog(CatalogT&& value) {
    SetCatalog(std::forward<CatalogT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies the identifier of the bulk job.</p>
   */
  inline const Aws::String& GetJobId() const { return m_jobId; }
  inline bool JobIdHasBeenSet() const { return m_jobIdHasBeenSet; }
  template <typename JobIdT = Aws::String>
  void SetJobId(JobIdT&& value) {
    m_jobIdHasBeenSet = true;
    m_jobId = std::forward<JobIdT>(value);
  }
  template <typename JobIdT = Aws::String>
  GetOpportunityBulkJobReportUrlRequest& WithJobId(JobIdT&& value) {
    SetJobId(std::forward<JobIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies the format of the report. The only supported value is
   * <code>CSV</code>.</p>
   */
  inline BulkFileFormat GetReportFormat() const { return m_reportFormat; }
  inline bool ReportFormatHasBeenSet() const { return m_reportFormatHasBeenSet; }
  inline void SetReportFormat(BulkFileFormat value) {
    m_reportFormatHasBeenSet = true;
    m_reportFormat = value;
  }
  inline GetOpportunityBulkJobReportUrlRequest& WithReportFormat(BulkFileFormat value) {
    SetReportFormat(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies which records the report covers. If you omit this field, the report
   * covers the records that failed. <code>ALL_RECORDS</code> isn't supported yet,
   * and a request for it fails with a <code>ValidationException</code>.</p>
   */
  inline BulkReportType GetReportType() const { return m_reportType; }
  inline bool ReportTypeHasBeenSet() const { return m_reportTypeHasBeenSet; }
  inline void SetReportType(BulkReportType value) {
    m_reportTypeHasBeenSet = true;
    m_reportType = value;
  }
  inline GetOpportunityBulkJobReportUrlRequest& WithReportType(BulkReportType value) {
    SetReportType(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_catalog;

  Aws::String m_jobId;

  BulkFileFormat m_reportFormat{BulkFileFormat::NOT_SET};

  BulkReportType m_reportType{BulkReportType::NOT_SET};
  bool m_catalogHasBeenSet = false;
  bool m_jobIdHasBeenSet = false;
  bool m_reportFormatHasBeenSet = false;
  bool m_reportTypeHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralSelling
}  // namespace Aws
