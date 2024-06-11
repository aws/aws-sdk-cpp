/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rds/model/Metric.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace RDS
{
namespace Model
{

  /**
   * <p>Details of the performance issue.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/PerformanceIssueDetails">AWS
   * API Reference</a></p>
   */
  class PerformanceIssueDetails
  {
  public:
    AWS_RDS_API PerformanceIssueDetails();
    AWS_RDS_API PerformanceIssueDetails(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_RDS_API PerformanceIssueDetails& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_RDS_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_RDS_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The time when the performance issue started.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }
    inline PerformanceIssueDetails& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}
    inline PerformanceIssueDetails& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the performance issue stopped.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }
    inline PerformanceIssueDetails& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}
    inline PerformanceIssueDetails& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The metrics that are relevant to the performance issue.</p>
     */
    inline const Aws::Vector<Metric>& GetMetrics() const{ return m_metrics; }
    inline bool MetricsHasBeenSet() const { return m_metricsHasBeenSet; }
    inline void SetMetrics(const Aws::Vector<Metric>& value) { m_metricsHasBeenSet = true; m_metrics = value; }
    inline void SetMetrics(Aws::Vector<Metric>&& value) { m_metricsHasBeenSet = true; m_metrics = std::move(value); }
    inline PerformanceIssueDetails& WithMetrics(const Aws::Vector<Metric>& value) { SetMetrics(value); return *this;}
    inline PerformanceIssueDetails& WithMetrics(Aws::Vector<Metric>&& value) { SetMetrics(std::move(value)); return *this;}
    inline PerformanceIssueDetails& AddMetrics(const Metric& value) { m_metricsHasBeenSet = true; m_metrics.push_back(value); return *this; }
    inline PerformanceIssueDetails& AddMetrics(Metric&& value) { m_metricsHasBeenSet = true; m_metrics.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The analysis of the performance issue. The information might contain
     * markdown.</p>
     */
    inline const Aws::String& GetAnalysis() const{ return m_analysis; }
    inline bool AnalysisHasBeenSet() const { return m_analysisHasBeenSet; }
    inline void SetAnalysis(const Aws::String& value) { m_analysisHasBeenSet = true; m_analysis = value; }
    inline void SetAnalysis(Aws::String&& value) { m_analysisHasBeenSet = true; m_analysis = std::move(value); }
    inline void SetAnalysis(const char* value) { m_analysisHasBeenSet = true; m_analysis.assign(value); }
    inline PerformanceIssueDetails& WithAnalysis(const Aws::String& value) { SetAnalysis(value); return *this;}
    inline PerformanceIssueDetails& WithAnalysis(Aws::String&& value) { SetAnalysis(std::move(value)); return *this;}
    inline PerformanceIssueDetails& WithAnalysis(const char* value) { SetAnalysis(value); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet = false;

    Aws::Vector<Metric> m_metrics;
    bool m_metricsHasBeenSet = false;

    Aws::String m_analysis;
    bool m_analysisHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
