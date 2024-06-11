/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pi/PI_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pi/model/ServiceType.h>
#include <aws/core/utils/DateTime.h>
#include <aws/pi/model/AnalysisStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/pi/model/Insight.h>
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
namespace PI
{
namespace Model
{

  /**
   * <p>Retrieves the summary of the performance analysis report created for a time
   * period.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pi-2018-02-27/AnalysisReport">AWS
   * API Reference</a></p>
   */
  class AnalysisReport
  {
  public:
    AWS_PI_API AnalysisReport();
    AWS_PI_API AnalysisReport(Aws::Utils::Json::JsonView jsonValue);
    AWS_PI_API AnalysisReport& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PI_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the analysis report.</p>
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
     * <p>The unique identifier of the analysis report.</p>
     */
    inline const Aws::String& GetIdentifier() const{ return m_identifier; }
    inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }
    inline void SetIdentifier(const Aws::String& value) { m_identifierHasBeenSet = true; m_identifier = value; }
    inline void SetIdentifier(Aws::String&& value) { m_identifierHasBeenSet = true; m_identifier = std::move(value); }
    inline void SetIdentifier(const char* value) { m_identifierHasBeenSet = true; m_identifier.assign(value); }
    inline AnalysisReport& WithIdentifier(const Aws::String& value) { SetIdentifier(value); return *this;}
    inline AnalysisReport& WithIdentifier(Aws::String&& value) { SetIdentifier(std::move(value)); return *this;}
    inline AnalysisReport& WithIdentifier(const char* value) { SetIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>List the tags for the Amazon Web Services service for which Performance
     * Insights returns metrics. Valid values are as follows:</p> <ul> <li> <p>
     * <code>RDS</code> </p> </li> <li> <p> <code>DOCDB</code> </p> </li> </ul>
     */
    inline const ServiceType& GetServiceType() const{ return m_serviceType; }
    inline bool ServiceTypeHasBeenSet() const { return m_serviceTypeHasBeenSet; }
    inline void SetServiceType(const ServiceType& value) { m_serviceTypeHasBeenSet = true; m_serviceType = value; }
    inline void SetServiceType(ServiceType&& value) { m_serviceTypeHasBeenSet = true; m_serviceType = std::move(value); }
    inline AnalysisReport& WithServiceType(const ServiceType& value) { SetServiceType(value); return *this;}
    inline AnalysisReport& WithServiceType(ServiceType&& value) { SetServiceType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time you created the analysis report.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateTime() const{ return m_createTime; }
    inline bool CreateTimeHasBeenSet() const { return m_createTimeHasBeenSet; }
    inline void SetCreateTime(const Aws::Utils::DateTime& value) { m_createTimeHasBeenSet = true; m_createTime = value; }
    inline void SetCreateTime(Aws::Utils::DateTime&& value) { m_createTimeHasBeenSet = true; m_createTime = std::move(value); }
    inline AnalysisReport& WithCreateTime(const Aws::Utils::DateTime& value) { SetCreateTime(value); return *this;}
    inline AnalysisReport& WithCreateTime(Aws::Utils::DateTime&& value) { SetCreateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The analysis start time in the report.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }
    inline AnalysisReport& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}
    inline AnalysisReport& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The analysis end time in the report.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }
    inline AnalysisReport& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}
    inline AnalysisReport& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the created analysis report.</p>
     */
    inline const AnalysisStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const AnalysisStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(AnalysisStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline AnalysisReport& WithStatus(const AnalysisStatus& value) { SetStatus(value); return *this;}
    inline AnalysisReport& WithStatus(AnalysisStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of identified insights in the analysis report.</p>
     */
    inline const Aws::Vector<Insight>& GetInsights() const{ return m_insights; }
    inline bool InsightsHasBeenSet() const { return m_insightsHasBeenSet; }
    inline void SetInsights(const Aws::Vector<Insight>& value) { m_insightsHasBeenSet = true; m_insights = value; }
    inline void SetInsights(Aws::Vector<Insight>&& value) { m_insightsHasBeenSet = true; m_insights = std::move(value); }
    inline AnalysisReport& WithInsights(const Aws::Vector<Insight>& value) { SetInsights(value); return *this;}
    inline AnalysisReport& WithInsights(Aws::Vector<Insight>&& value) { SetInsights(std::move(value)); return *this;}
    inline AnalysisReport& AddInsights(const Insight& value) { m_insightsHasBeenSet = true; m_insights.push_back(value); return *this; }
    inline AnalysisReport& AddInsights(Insight&& value) { m_insightsHasBeenSet = true; m_insights.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_analysisReportId;
    bool m_analysisReportIdHasBeenSet = false;

    Aws::String m_identifier;
    bool m_identifierHasBeenSet = false;

    ServiceType m_serviceType;
    bool m_serviceTypeHasBeenSet = false;

    Aws::Utils::DateTime m_createTime;
    bool m_createTimeHasBeenSet = false;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet = false;

    AnalysisStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::Vector<Insight> m_insights;
    bool m_insightsHasBeenSet = false;
  };

} // namespace Model
} // namespace PI
} // namespace Aws
