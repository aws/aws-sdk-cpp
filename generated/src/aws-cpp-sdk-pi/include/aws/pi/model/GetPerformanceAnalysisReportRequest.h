/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pi/PI_EXPORTS.h>
#include <aws/pi/PIRequest.h>
#include <aws/pi/model/ServiceType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pi/model/TextFormat.h>
#include <aws/pi/model/AcceptLanguage.h>
#include <utility>

namespace Aws
{
namespace PI
{
namespace Model
{

  /**
   */
  class GetPerformanceAnalysisReportRequest : public PIRequest
  {
  public:
    AWS_PI_API GetPerformanceAnalysisReportRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetPerformanceAnalysisReport"; }

    AWS_PI_API Aws::String SerializePayload() const override;

    AWS_PI_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The Amazon Web Services service for which Performance Insights will return
     * metrics. Valid value is <code>RDS</code>.</p>
     */
    inline ServiceType GetServiceType() const { return m_serviceType; }
    inline bool ServiceTypeHasBeenSet() const { return m_serviceTypeHasBeenSet; }
    inline void SetServiceType(ServiceType value) { m_serviceTypeHasBeenSet = true; m_serviceType = value; }
    inline GetPerformanceAnalysisReportRequest& WithServiceType(ServiceType value) { SetServiceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An immutable identifier for a data source that is unique for an Amazon Web
     * Services Region. Performance Insights gathers metrics from this data source. In
     * the console, the identifier is shown as <i>ResourceID</i>. When you call
     * <code>DescribeDBInstances</code>, the identifier is returned as
     * <code>DbiResourceId</code>.</p> <p>To use a DB instance as a data source,
     * specify its <code>DbiResourceId</code> value. For example, specify
     * <code>db-ABCDEFGHIJKLMNOPQRSTU1VW2X</code>.</p>
     */
    inline const Aws::String& GetIdentifier() const { return m_identifier; }
    inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }
    template<typename IdentifierT = Aws::String>
    void SetIdentifier(IdentifierT&& value) { m_identifierHasBeenSet = true; m_identifier = std::forward<IdentifierT>(value); }
    template<typename IdentifierT = Aws::String>
    GetPerformanceAnalysisReportRequest& WithIdentifier(IdentifierT&& value) { SetIdentifier(std::forward<IdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier of the created analysis report. For example,
     * <code>report-12345678901234567</code> </p>
     */
    inline const Aws::String& GetAnalysisReportId() const { return m_analysisReportId; }
    inline bool AnalysisReportIdHasBeenSet() const { return m_analysisReportIdHasBeenSet; }
    template<typename AnalysisReportIdT = Aws::String>
    void SetAnalysisReportId(AnalysisReportIdT&& value) { m_analysisReportIdHasBeenSet = true; m_analysisReportId = std::forward<AnalysisReportIdT>(value); }
    template<typename AnalysisReportIdT = Aws::String>
    GetPerformanceAnalysisReportRequest& WithAnalysisReportId(AnalysisReportIdT&& value) { SetAnalysisReportId(std::forward<AnalysisReportIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the text format in the report. The options are
     * <code>PLAIN_TEXT</code> or <code>MARKDOWN</code>. The default value is
     * <code>plain text</code>.</p>
     */
    inline TextFormat GetTextFormat() const { return m_textFormat; }
    inline bool TextFormatHasBeenSet() const { return m_textFormatHasBeenSet; }
    inline void SetTextFormat(TextFormat value) { m_textFormatHasBeenSet = true; m_textFormat = value; }
    inline GetPerformanceAnalysisReportRequest& WithTextFormat(TextFormat value) { SetTextFormat(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The text language in the report. The default language is <code>EN_US</code>
     * (English). </p>
     */
    inline AcceptLanguage GetAcceptLanguage() const { return m_acceptLanguage; }
    inline bool AcceptLanguageHasBeenSet() const { return m_acceptLanguageHasBeenSet; }
    inline void SetAcceptLanguage(AcceptLanguage value) { m_acceptLanguageHasBeenSet = true; m_acceptLanguage = value; }
    inline GetPerformanceAnalysisReportRequest& WithAcceptLanguage(AcceptLanguage value) { SetAcceptLanguage(value); return *this;}
    ///@}
  private:

    ServiceType m_serviceType{ServiceType::NOT_SET};
    bool m_serviceTypeHasBeenSet = false;

    Aws::String m_identifier;
    bool m_identifierHasBeenSet = false;

    Aws::String m_analysisReportId;
    bool m_analysisReportIdHasBeenSet = false;

    TextFormat m_textFormat{TextFormat::NOT_SET};
    bool m_textFormatHasBeenSet = false;

    AcceptLanguage m_acceptLanguage{AcceptLanguage::NOT_SET};
    bool m_acceptLanguageHasBeenSet = false;
  };

} // namespace Model
} // namespace PI
} // namespace Aws
