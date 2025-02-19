/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/network-firewall/model/EnabledAnalysisType.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace NetworkFirewall
{
namespace Model
{

  /**
   * <p>A report that captures key activity from the last 30 days of network traffic
   * monitored by your firewall.</p> <p>You can generate up to one report per traffic
   * type, per 30 day period. For example, when you successfully create an HTTP
   * traffic report, you cannot create another HTTP traffic report until 30 days
   * pass. Alternatively, if you generate a report that combines metrics on both HTTP
   * and HTTPS traffic, you cannot create another report for either traffic type
   * until 30 days pass.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/AnalysisReport">AWS
   * API Reference</a></p>
   */
  class AnalysisReport
  {
  public:
    AWS_NETWORKFIREWALL_API AnalysisReport();
    AWS_NETWORKFIREWALL_API AnalysisReport(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKFIREWALL_API AnalysisReport& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKFIREWALL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique ID of the query that ran when you requested an analysis report.
     * </p>
     */
    inline const Aws::String& GetAnalysisReportId() const{ return m_analysisReportId; }
    inline bool AnalysisReportIdHasBeenSet() const { return m_analysisReportIdHasBeenSet; }
    inline void SetAnalysisReportId(const Aws::String& value) { m_analysisReportIdHasBeenSet = true; m_analysisReportId = value; }
    inline void SetAnalysisReportId(Aws::String&& value) { m_analysisReportIdHasBeenSet = true; m_analysisReportId = std::move(value); }
    inline void SetAnalysisReportId(const char* value) { m_analysisReportIdHasBeenSet = true; m_analysisReportId.assign(value); }
    inline AnalysisReport& WithAnalysisReportId(const Aws::String& value) { SetAnalysisReportId(value); return *this;}
    inline AnalysisReport& WithAnalysisReportId(Aws::String&& value) { SetAnalysisReportId(std::move(value)); return *this;}
    inline AnalysisReport& WithAnalysisReportId(const char* value) { SetAnalysisReportId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of traffic that will be used to generate a report. </p>
     */
    inline const EnabledAnalysisType& GetAnalysisType() const{ return m_analysisType; }
    inline bool AnalysisTypeHasBeenSet() const { return m_analysisTypeHasBeenSet; }
    inline void SetAnalysisType(const EnabledAnalysisType& value) { m_analysisTypeHasBeenSet = true; m_analysisType = value; }
    inline void SetAnalysisType(EnabledAnalysisType&& value) { m_analysisTypeHasBeenSet = true; m_analysisType = std::move(value); }
    inline AnalysisReport& WithAnalysisType(const EnabledAnalysisType& value) { SetAnalysisType(value); return *this;}
    inline AnalysisReport& WithAnalysisType(EnabledAnalysisType&& value) { SetAnalysisType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the analysis report was ran. </p>
     */
    inline const Aws::Utils::DateTime& GetReportTime() const{ return m_reportTime; }
    inline bool ReportTimeHasBeenSet() const { return m_reportTimeHasBeenSet; }
    inline void SetReportTime(const Aws::Utils::DateTime& value) { m_reportTimeHasBeenSet = true; m_reportTime = value; }
    inline void SetReportTime(Aws::Utils::DateTime&& value) { m_reportTimeHasBeenSet = true; m_reportTime = std::move(value); }
    inline AnalysisReport& WithReportTime(const Aws::Utils::DateTime& value) { SetReportTime(value); return *this;}
    inline AnalysisReport& WithReportTime(Aws::Utils::DateTime&& value) { SetReportTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the analysis report you specify. Statuses include
     * <code>RUNNING</code>, <code>COMPLETED</code>, or <code>FAILED</code>.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }
    inline AnalysisReport& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}
    inline AnalysisReport& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}
    inline AnalysisReport& WithStatus(const char* value) { SetStatus(value); return *this;}
    ///@}
  private:

    Aws::String m_analysisReportId;
    bool m_analysisReportIdHasBeenSet = false;

    EnabledAnalysisType m_analysisType;
    bool m_analysisTypeHasBeenSet = false;

    Aws::Utils::DateTime m_reportTime;
    bool m_reportTimeHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
