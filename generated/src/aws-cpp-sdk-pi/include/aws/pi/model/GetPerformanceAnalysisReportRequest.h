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
    AWS_PI_API GetPerformanceAnalysisReportRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetPerformanceAnalysisReport"; }

    AWS_PI_API Aws::String SerializePayload() const override;

    AWS_PI_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Amazon Web Services service for which Performance Insights will return
     * metrics. Valid value is <code>RDS</code>.</p>
     */
    inline const ServiceType& GetServiceType() const{ return m_serviceType; }

    /**
     * <p>The Amazon Web Services service for which Performance Insights will return
     * metrics. Valid value is <code>RDS</code>.</p>
     */
    inline bool ServiceTypeHasBeenSet() const { return m_serviceTypeHasBeenSet; }

    /**
     * <p>The Amazon Web Services service for which Performance Insights will return
     * metrics. Valid value is <code>RDS</code>.</p>
     */
    inline void SetServiceType(const ServiceType& value) { m_serviceTypeHasBeenSet = true; m_serviceType = value; }

    /**
     * <p>The Amazon Web Services service for which Performance Insights will return
     * metrics. Valid value is <code>RDS</code>.</p>
     */
    inline void SetServiceType(ServiceType&& value) { m_serviceTypeHasBeenSet = true; m_serviceType = std::move(value); }

    /**
     * <p>The Amazon Web Services service for which Performance Insights will return
     * metrics. Valid value is <code>RDS</code>.</p>
     */
    inline GetPerformanceAnalysisReportRequest& WithServiceType(const ServiceType& value) { SetServiceType(value); return *this;}

    /**
     * <p>The Amazon Web Services service for which Performance Insights will return
     * metrics. Valid value is <code>RDS</code>.</p>
     */
    inline GetPerformanceAnalysisReportRequest& WithServiceType(ServiceType&& value) { SetServiceType(std::move(value)); return *this;}


    /**
     * <p>An immutable identifier for a data source that is unique for an Amazon Web
     * Services Region. Performance Insights gathers metrics from this data source. In
     * the console, the identifier is shown as <i>ResourceID</i>. When you call
     * <code>DescribeDBInstances</code>, the identifier is returned as
     * <code>DbiResourceId</code>.</p> <p>To use a DB instance as a data source,
     * specify its <code>DbiResourceId</code> value. For example, specify
     * <code>db-ABCDEFGHIJKLMNOPQRSTU1VW2X</code>.</p>
     */
    inline const Aws::String& GetIdentifier() const{ return m_identifier; }

    /**
     * <p>An immutable identifier for a data source that is unique for an Amazon Web
     * Services Region. Performance Insights gathers metrics from this data source. In
     * the console, the identifier is shown as <i>ResourceID</i>. When you call
     * <code>DescribeDBInstances</code>, the identifier is returned as
     * <code>DbiResourceId</code>.</p> <p>To use a DB instance as a data source,
     * specify its <code>DbiResourceId</code> value. For example, specify
     * <code>db-ABCDEFGHIJKLMNOPQRSTU1VW2X</code>.</p>
     */
    inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }

    /**
     * <p>An immutable identifier for a data source that is unique for an Amazon Web
     * Services Region. Performance Insights gathers metrics from this data source. In
     * the console, the identifier is shown as <i>ResourceID</i>. When you call
     * <code>DescribeDBInstances</code>, the identifier is returned as
     * <code>DbiResourceId</code>.</p> <p>To use a DB instance as a data source,
     * specify its <code>DbiResourceId</code> value. For example, specify
     * <code>db-ABCDEFGHIJKLMNOPQRSTU1VW2X</code>.</p>
     */
    inline void SetIdentifier(const Aws::String& value) { m_identifierHasBeenSet = true; m_identifier = value; }

    /**
     * <p>An immutable identifier for a data source that is unique for an Amazon Web
     * Services Region. Performance Insights gathers metrics from this data source. In
     * the console, the identifier is shown as <i>ResourceID</i>. When you call
     * <code>DescribeDBInstances</code>, the identifier is returned as
     * <code>DbiResourceId</code>.</p> <p>To use a DB instance as a data source,
     * specify its <code>DbiResourceId</code> value. For example, specify
     * <code>db-ABCDEFGHIJKLMNOPQRSTU1VW2X</code>.</p>
     */
    inline void SetIdentifier(Aws::String&& value) { m_identifierHasBeenSet = true; m_identifier = std::move(value); }

    /**
     * <p>An immutable identifier for a data source that is unique for an Amazon Web
     * Services Region. Performance Insights gathers metrics from this data source. In
     * the console, the identifier is shown as <i>ResourceID</i>. When you call
     * <code>DescribeDBInstances</code>, the identifier is returned as
     * <code>DbiResourceId</code>.</p> <p>To use a DB instance as a data source,
     * specify its <code>DbiResourceId</code> value. For example, specify
     * <code>db-ABCDEFGHIJKLMNOPQRSTU1VW2X</code>.</p>
     */
    inline void SetIdentifier(const char* value) { m_identifierHasBeenSet = true; m_identifier.assign(value); }

    /**
     * <p>An immutable identifier for a data source that is unique for an Amazon Web
     * Services Region. Performance Insights gathers metrics from this data source. In
     * the console, the identifier is shown as <i>ResourceID</i>. When you call
     * <code>DescribeDBInstances</code>, the identifier is returned as
     * <code>DbiResourceId</code>.</p> <p>To use a DB instance as a data source,
     * specify its <code>DbiResourceId</code> value. For example, specify
     * <code>db-ABCDEFGHIJKLMNOPQRSTU1VW2X</code>.</p>
     */
    inline GetPerformanceAnalysisReportRequest& WithIdentifier(const Aws::String& value) { SetIdentifier(value); return *this;}

    /**
     * <p>An immutable identifier for a data source that is unique for an Amazon Web
     * Services Region. Performance Insights gathers metrics from this data source. In
     * the console, the identifier is shown as <i>ResourceID</i>. When you call
     * <code>DescribeDBInstances</code>, the identifier is returned as
     * <code>DbiResourceId</code>.</p> <p>To use a DB instance as a data source,
     * specify its <code>DbiResourceId</code> value. For example, specify
     * <code>db-ABCDEFGHIJKLMNOPQRSTU1VW2X</code>.</p>
     */
    inline GetPerformanceAnalysisReportRequest& WithIdentifier(Aws::String&& value) { SetIdentifier(std::move(value)); return *this;}

    /**
     * <p>An immutable identifier for a data source that is unique for an Amazon Web
     * Services Region. Performance Insights gathers metrics from this data source. In
     * the console, the identifier is shown as <i>ResourceID</i>. When you call
     * <code>DescribeDBInstances</code>, the identifier is returned as
     * <code>DbiResourceId</code>.</p> <p>To use a DB instance as a data source,
     * specify its <code>DbiResourceId</code> value. For example, specify
     * <code>db-ABCDEFGHIJKLMNOPQRSTU1VW2X</code>.</p>
     */
    inline GetPerformanceAnalysisReportRequest& WithIdentifier(const char* value) { SetIdentifier(value); return *this;}


    /**
     * <p>A unique identifier of the created analysis report. For example,
     * <code>report-12345678901234567</code> </p>
     */
    inline const Aws::String& GetAnalysisReportId() const{ return m_analysisReportId; }

    /**
     * <p>A unique identifier of the created analysis report. For example,
     * <code>report-12345678901234567</code> </p>
     */
    inline bool AnalysisReportIdHasBeenSet() const { return m_analysisReportIdHasBeenSet; }

    /**
     * <p>A unique identifier of the created analysis report. For example,
     * <code>report-12345678901234567</code> </p>
     */
    inline void SetAnalysisReportId(const Aws::String& value) { m_analysisReportIdHasBeenSet = true; m_analysisReportId = value; }

    /**
     * <p>A unique identifier of the created analysis report. For example,
     * <code>report-12345678901234567</code> </p>
     */
    inline void SetAnalysisReportId(Aws::String&& value) { m_analysisReportIdHasBeenSet = true; m_analysisReportId = std::move(value); }

    /**
     * <p>A unique identifier of the created analysis report. For example,
     * <code>report-12345678901234567</code> </p>
     */
    inline void SetAnalysisReportId(const char* value) { m_analysisReportIdHasBeenSet = true; m_analysisReportId.assign(value); }

    /**
     * <p>A unique identifier of the created analysis report. For example,
     * <code>report-12345678901234567</code> </p>
     */
    inline GetPerformanceAnalysisReportRequest& WithAnalysisReportId(const Aws::String& value) { SetAnalysisReportId(value); return *this;}

    /**
     * <p>A unique identifier of the created analysis report. For example,
     * <code>report-12345678901234567</code> </p>
     */
    inline GetPerformanceAnalysisReportRequest& WithAnalysisReportId(Aws::String&& value) { SetAnalysisReportId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier of the created analysis report. For example,
     * <code>report-12345678901234567</code> </p>
     */
    inline GetPerformanceAnalysisReportRequest& WithAnalysisReportId(const char* value) { SetAnalysisReportId(value); return *this;}


    /**
     * <p>Indicates the text format in the report. The options are
     * <code>PLAIN_TEXT</code> or <code>MARKDOWN</code>. The default value is
     * <code>plain text</code>.</p>
     */
    inline const TextFormat& GetTextFormat() const{ return m_textFormat; }

    /**
     * <p>Indicates the text format in the report. The options are
     * <code>PLAIN_TEXT</code> or <code>MARKDOWN</code>. The default value is
     * <code>plain text</code>.</p>
     */
    inline bool TextFormatHasBeenSet() const { return m_textFormatHasBeenSet; }

    /**
     * <p>Indicates the text format in the report. The options are
     * <code>PLAIN_TEXT</code> or <code>MARKDOWN</code>. The default value is
     * <code>plain text</code>.</p>
     */
    inline void SetTextFormat(const TextFormat& value) { m_textFormatHasBeenSet = true; m_textFormat = value; }

    /**
     * <p>Indicates the text format in the report. The options are
     * <code>PLAIN_TEXT</code> or <code>MARKDOWN</code>. The default value is
     * <code>plain text</code>.</p>
     */
    inline void SetTextFormat(TextFormat&& value) { m_textFormatHasBeenSet = true; m_textFormat = std::move(value); }

    /**
     * <p>Indicates the text format in the report. The options are
     * <code>PLAIN_TEXT</code> or <code>MARKDOWN</code>. The default value is
     * <code>plain text</code>.</p>
     */
    inline GetPerformanceAnalysisReportRequest& WithTextFormat(const TextFormat& value) { SetTextFormat(value); return *this;}

    /**
     * <p>Indicates the text format in the report. The options are
     * <code>PLAIN_TEXT</code> or <code>MARKDOWN</code>. The default value is
     * <code>plain text</code>.</p>
     */
    inline GetPerformanceAnalysisReportRequest& WithTextFormat(TextFormat&& value) { SetTextFormat(std::move(value)); return *this;}


    /**
     * <p>The text language in the report. The default language is <code>EN_US</code>
     * (English). </p>
     */
    inline const AcceptLanguage& GetAcceptLanguage() const{ return m_acceptLanguage; }

    /**
     * <p>The text language in the report. The default language is <code>EN_US</code>
     * (English). </p>
     */
    inline bool AcceptLanguageHasBeenSet() const { return m_acceptLanguageHasBeenSet; }

    /**
     * <p>The text language in the report. The default language is <code>EN_US</code>
     * (English). </p>
     */
    inline void SetAcceptLanguage(const AcceptLanguage& value) { m_acceptLanguageHasBeenSet = true; m_acceptLanguage = value; }

    /**
     * <p>The text language in the report. The default language is <code>EN_US</code>
     * (English). </p>
     */
    inline void SetAcceptLanguage(AcceptLanguage&& value) { m_acceptLanguageHasBeenSet = true; m_acceptLanguage = std::move(value); }

    /**
     * <p>The text language in the report. The default language is <code>EN_US</code>
     * (English). </p>
     */
    inline GetPerformanceAnalysisReportRequest& WithAcceptLanguage(const AcceptLanguage& value) { SetAcceptLanguage(value); return *this;}

    /**
     * <p>The text language in the report. The default language is <code>EN_US</code>
     * (English). </p>
     */
    inline GetPerformanceAnalysisReportRequest& WithAcceptLanguage(AcceptLanguage&& value) { SetAcceptLanguage(std::move(value)); return *this;}

  private:

    ServiceType m_serviceType;
    bool m_serviceTypeHasBeenSet = false;

    Aws::String m_identifier;
    bool m_identifierHasBeenSet = false;

    Aws::String m_analysisReportId;
    bool m_analysisReportIdHasBeenSet = false;

    TextFormat m_textFormat;
    bool m_textFormatHasBeenSet = false;

    AcceptLanguage m_acceptLanguage;
    bool m_acceptLanguageHasBeenSet = false;
  };

} // namespace Model
} // namespace PI
} // namespace Aws
