/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace SageMaker
{
namespace Model
{

  /**
   * <p>Configuration details about the monitoring schedule.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ScheduleConfig">AWS
   * API Reference</a></p>
   */
  class ScheduleConfig
  {
  public:
    AWS_SAGEMAKER_API ScheduleConfig() = default;
    AWS_SAGEMAKER_API ScheduleConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API ScheduleConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A cron expression that describes details about the monitoring schedule.</p>
     * <p>The supported cron expressions are:</p> <ul> <li> <p>If you want to set the
     * job to start every hour, use the following:</p> <p> <code>Hourly: cron(0 * ? * *
     * *)</code> </p> </li> <li> <p>If you want to start the job daily:</p> <p>
     * <code>cron(0 [00-23] ? * * *)</code> </p> </li> <li> <p>If you want to run the
     * job one time, immediately, use the following keyword:</p> <p> <code>NOW</code>
     * </p> </li> </ul> <p>For example, the following are valid cron expressions:</p>
     * <ul> <li> <p>Daily at noon UTC: <code>cron(0 12 ? * * *)</code> </p> </li> <li>
     * <p>Daily at midnight UTC: <code>cron(0 0 ? * * *)</code> </p> </li> </ul> <p>To
     * support running every 6, 12 hours, the following are also supported:</p> <p>
     * <code>cron(0 [00-23]/[01-24] ? * * *)</code> </p> <p>For example, the following
     * are valid cron expressions:</p> <ul> <li> <p>Every 12 hours, starting at 5pm
     * UTC: <code>cron(0 17/12 ? * * *)</code> </p> </li> <li> <p>Every two hours
     * starting at midnight: <code>cron(0 0/2 ? * * *)</code> </p> </li> </ul> 
     * <ul> <li> <p>Even though the cron expression is set to start at 5PM UTC, note
     * that there could be a delay of 0-20 minutes from the actual requested time to
     * run the execution. </p> </li> <li> <p>We recommend that if you would like a
     * daily schedule, you do not provide this parameter. Amazon SageMaker AI will pick
     * a time for running every day.</p> </li> </ul>  <p>You can also specify
     * the keyword <code>NOW</code> to run the monitoring job immediately, one time,
     * without recurring.</p>
     */
    inline const Aws::String& GetScheduleExpression() const { return m_scheduleExpression; }
    inline bool ScheduleExpressionHasBeenSet() const { return m_scheduleExpressionHasBeenSet; }
    template<typename ScheduleExpressionT = Aws::String>
    void SetScheduleExpression(ScheduleExpressionT&& value) { m_scheduleExpressionHasBeenSet = true; m_scheduleExpression = std::forward<ScheduleExpressionT>(value); }
    template<typename ScheduleExpressionT = Aws::String>
    ScheduleConfig& WithScheduleExpression(ScheduleExpressionT&& value) { SetScheduleExpression(std::forward<ScheduleExpressionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Sets the start time for a monitoring job window. Express this time as an
     * offset to the times that you schedule your monitoring jobs to run. You schedule
     * monitoring jobs with the <code>ScheduleExpression</code> parameter. Specify this
     * offset in ISO 8601 duration format. For example, if you want to monitor the five
     * hours of data in your dataset that precede the start of each monitoring job, you
     * would specify: <code>"-PT5H"</code>.</p> <p>The start time that you specify must
     * not precede the end time that you specify by more than 24 hours. You specify the
     * end time with the <code>DataAnalysisEndTime</code> parameter.</p> <p>If you set
     * <code>ScheduleExpression</code> to <code>NOW</code>, this parameter is
     * required.</p>
     */
    inline const Aws::String& GetDataAnalysisStartTime() const { return m_dataAnalysisStartTime; }
    inline bool DataAnalysisStartTimeHasBeenSet() const { return m_dataAnalysisStartTimeHasBeenSet; }
    template<typename DataAnalysisStartTimeT = Aws::String>
    void SetDataAnalysisStartTime(DataAnalysisStartTimeT&& value) { m_dataAnalysisStartTimeHasBeenSet = true; m_dataAnalysisStartTime = std::forward<DataAnalysisStartTimeT>(value); }
    template<typename DataAnalysisStartTimeT = Aws::String>
    ScheduleConfig& WithDataAnalysisStartTime(DataAnalysisStartTimeT&& value) { SetDataAnalysisStartTime(std::forward<DataAnalysisStartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Sets the end time for a monitoring job window. Express this time as an offset
     * to the times that you schedule your monitoring jobs to run. You schedule
     * monitoring jobs with the <code>ScheduleExpression</code> parameter. Specify this
     * offset in ISO 8601 duration format. For example, if you want to end the window
     * one hour before the start of each monitoring job, you would specify:
     * <code>"-PT1H"</code>.</p> <p>The end time that you specify must not follow the
     * start time that you specify by more than 24 hours. You specify the start time
     * with the <code>DataAnalysisStartTime</code> parameter.</p> <p>If you set
     * <code>ScheduleExpression</code> to <code>NOW</code>, this parameter is
     * required.</p>
     */
    inline const Aws::String& GetDataAnalysisEndTime() const { return m_dataAnalysisEndTime; }
    inline bool DataAnalysisEndTimeHasBeenSet() const { return m_dataAnalysisEndTimeHasBeenSet; }
    template<typename DataAnalysisEndTimeT = Aws::String>
    void SetDataAnalysisEndTime(DataAnalysisEndTimeT&& value) { m_dataAnalysisEndTimeHasBeenSet = true; m_dataAnalysisEndTime = std::forward<DataAnalysisEndTimeT>(value); }
    template<typename DataAnalysisEndTimeT = Aws::String>
    ScheduleConfig& WithDataAnalysisEndTime(DataAnalysisEndTimeT&& value) { SetDataAnalysisEndTime(std::forward<DataAnalysisEndTimeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_scheduleExpression;
    bool m_scheduleExpressionHasBeenSet = false;

    Aws::String m_dataAnalysisStartTime;
    bool m_dataAnalysisStartTimeHasBeenSet = false;

    Aws::String m_dataAnalysisEndTime;
    bool m_dataAnalysisEndTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
