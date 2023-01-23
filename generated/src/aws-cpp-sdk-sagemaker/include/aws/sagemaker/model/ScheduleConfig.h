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
    AWS_SAGEMAKER_API ScheduleConfig();
    AWS_SAGEMAKER_API ScheduleConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API ScheduleConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A cron expression that describes details about the monitoring schedule.</p>
     * <p>Currently the only supported cron expressions are:</p> <ul> <li> <p>If you
     * want to set the job to start every hour, please use the following:</p> <p>
     * <code>Hourly: cron(0 * ? * * *)</code> </p> </li> <li> <p>If you want to start
     * the job daily:</p> <p> <code>cron(0 [00-23] ? * * *)</code> </p> </li> </ul>
     * <p>For example, the following are valid cron expressions:</p> <ul> <li> <p>Daily
     * at noon UTC: <code>cron(0 12 ? * * *)</code> </p> </li> <li> <p>Daily at
     * midnight UTC: <code>cron(0 0 ? * * *)</code> </p> </li> </ul> <p>To support
     * running every 6, 12 hours, the following are also supported:</p> <p>
     * <code>cron(0 [00-23]/[01-24] ? * * *)</code> </p> <p>For example, the following
     * are valid cron expressions:</p> <ul> <li> <p>Every 12 hours, starting at 5pm
     * UTC: <code>cron(0 17/12 ? * * *)</code> </p> </li> <li> <p>Every two hours
     * starting at midnight: <code>cron(0 0/2 ? * * *)</code> </p> </li> </ul> 
     * <ul> <li> <p>Even though the cron expression is set to start at 5PM UTC, note
     * that there could be a delay of 0-20 minutes from the actual requested time to
     * run the execution. </p> </li> <li> <p>We recommend that if you would like a
     * daily schedule, you do not provide this parameter. Amazon SageMaker will pick a
     * time for running every day.</p> </li> </ul> 
     */
    inline const Aws::String& GetScheduleExpression() const{ return m_scheduleExpression; }

    /**
     * <p>A cron expression that describes details about the monitoring schedule.</p>
     * <p>Currently the only supported cron expressions are:</p> <ul> <li> <p>If you
     * want to set the job to start every hour, please use the following:</p> <p>
     * <code>Hourly: cron(0 * ? * * *)</code> </p> </li> <li> <p>If you want to start
     * the job daily:</p> <p> <code>cron(0 [00-23] ? * * *)</code> </p> </li> </ul>
     * <p>For example, the following are valid cron expressions:</p> <ul> <li> <p>Daily
     * at noon UTC: <code>cron(0 12 ? * * *)</code> </p> </li> <li> <p>Daily at
     * midnight UTC: <code>cron(0 0 ? * * *)</code> </p> </li> </ul> <p>To support
     * running every 6, 12 hours, the following are also supported:</p> <p>
     * <code>cron(0 [00-23]/[01-24] ? * * *)</code> </p> <p>For example, the following
     * are valid cron expressions:</p> <ul> <li> <p>Every 12 hours, starting at 5pm
     * UTC: <code>cron(0 17/12 ? * * *)</code> </p> </li> <li> <p>Every two hours
     * starting at midnight: <code>cron(0 0/2 ? * * *)</code> </p> </li> </ul> 
     * <ul> <li> <p>Even though the cron expression is set to start at 5PM UTC, note
     * that there could be a delay of 0-20 minutes from the actual requested time to
     * run the execution. </p> </li> <li> <p>We recommend that if you would like a
     * daily schedule, you do not provide this parameter. Amazon SageMaker will pick a
     * time for running every day.</p> </li> </ul> 
     */
    inline bool ScheduleExpressionHasBeenSet() const { return m_scheduleExpressionHasBeenSet; }

    /**
     * <p>A cron expression that describes details about the monitoring schedule.</p>
     * <p>Currently the only supported cron expressions are:</p> <ul> <li> <p>If you
     * want to set the job to start every hour, please use the following:</p> <p>
     * <code>Hourly: cron(0 * ? * * *)</code> </p> </li> <li> <p>If you want to start
     * the job daily:</p> <p> <code>cron(0 [00-23] ? * * *)</code> </p> </li> </ul>
     * <p>For example, the following are valid cron expressions:</p> <ul> <li> <p>Daily
     * at noon UTC: <code>cron(0 12 ? * * *)</code> </p> </li> <li> <p>Daily at
     * midnight UTC: <code>cron(0 0 ? * * *)</code> </p> </li> </ul> <p>To support
     * running every 6, 12 hours, the following are also supported:</p> <p>
     * <code>cron(0 [00-23]/[01-24] ? * * *)</code> </p> <p>For example, the following
     * are valid cron expressions:</p> <ul> <li> <p>Every 12 hours, starting at 5pm
     * UTC: <code>cron(0 17/12 ? * * *)</code> </p> </li> <li> <p>Every two hours
     * starting at midnight: <code>cron(0 0/2 ? * * *)</code> </p> </li> </ul> 
     * <ul> <li> <p>Even though the cron expression is set to start at 5PM UTC, note
     * that there could be a delay of 0-20 minutes from the actual requested time to
     * run the execution. </p> </li> <li> <p>We recommend that if you would like a
     * daily schedule, you do not provide this parameter. Amazon SageMaker will pick a
     * time for running every day.</p> </li> </ul> 
     */
    inline void SetScheduleExpression(const Aws::String& value) { m_scheduleExpressionHasBeenSet = true; m_scheduleExpression = value; }

    /**
     * <p>A cron expression that describes details about the monitoring schedule.</p>
     * <p>Currently the only supported cron expressions are:</p> <ul> <li> <p>If you
     * want to set the job to start every hour, please use the following:</p> <p>
     * <code>Hourly: cron(0 * ? * * *)</code> </p> </li> <li> <p>If you want to start
     * the job daily:</p> <p> <code>cron(0 [00-23] ? * * *)</code> </p> </li> </ul>
     * <p>For example, the following are valid cron expressions:</p> <ul> <li> <p>Daily
     * at noon UTC: <code>cron(0 12 ? * * *)</code> </p> </li> <li> <p>Daily at
     * midnight UTC: <code>cron(0 0 ? * * *)</code> </p> </li> </ul> <p>To support
     * running every 6, 12 hours, the following are also supported:</p> <p>
     * <code>cron(0 [00-23]/[01-24] ? * * *)</code> </p> <p>For example, the following
     * are valid cron expressions:</p> <ul> <li> <p>Every 12 hours, starting at 5pm
     * UTC: <code>cron(0 17/12 ? * * *)</code> </p> </li> <li> <p>Every two hours
     * starting at midnight: <code>cron(0 0/2 ? * * *)</code> </p> </li> </ul> 
     * <ul> <li> <p>Even though the cron expression is set to start at 5PM UTC, note
     * that there could be a delay of 0-20 minutes from the actual requested time to
     * run the execution. </p> </li> <li> <p>We recommend that if you would like a
     * daily schedule, you do not provide this parameter. Amazon SageMaker will pick a
     * time for running every day.</p> </li> </ul> 
     */
    inline void SetScheduleExpression(Aws::String&& value) { m_scheduleExpressionHasBeenSet = true; m_scheduleExpression = std::move(value); }

    /**
     * <p>A cron expression that describes details about the monitoring schedule.</p>
     * <p>Currently the only supported cron expressions are:</p> <ul> <li> <p>If you
     * want to set the job to start every hour, please use the following:</p> <p>
     * <code>Hourly: cron(0 * ? * * *)</code> </p> </li> <li> <p>If you want to start
     * the job daily:</p> <p> <code>cron(0 [00-23] ? * * *)</code> </p> </li> </ul>
     * <p>For example, the following are valid cron expressions:</p> <ul> <li> <p>Daily
     * at noon UTC: <code>cron(0 12 ? * * *)</code> </p> </li> <li> <p>Daily at
     * midnight UTC: <code>cron(0 0 ? * * *)</code> </p> </li> </ul> <p>To support
     * running every 6, 12 hours, the following are also supported:</p> <p>
     * <code>cron(0 [00-23]/[01-24] ? * * *)</code> </p> <p>For example, the following
     * are valid cron expressions:</p> <ul> <li> <p>Every 12 hours, starting at 5pm
     * UTC: <code>cron(0 17/12 ? * * *)</code> </p> </li> <li> <p>Every two hours
     * starting at midnight: <code>cron(0 0/2 ? * * *)</code> </p> </li> </ul> 
     * <ul> <li> <p>Even though the cron expression is set to start at 5PM UTC, note
     * that there could be a delay of 0-20 minutes from the actual requested time to
     * run the execution. </p> </li> <li> <p>We recommend that if you would like a
     * daily schedule, you do not provide this parameter. Amazon SageMaker will pick a
     * time for running every day.</p> </li> </ul> 
     */
    inline void SetScheduleExpression(const char* value) { m_scheduleExpressionHasBeenSet = true; m_scheduleExpression.assign(value); }

    /**
     * <p>A cron expression that describes details about the monitoring schedule.</p>
     * <p>Currently the only supported cron expressions are:</p> <ul> <li> <p>If you
     * want to set the job to start every hour, please use the following:</p> <p>
     * <code>Hourly: cron(0 * ? * * *)</code> </p> </li> <li> <p>If you want to start
     * the job daily:</p> <p> <code>cron(0 [00-23] ? * * *)</code> </p> </li> </ul>
     * <p>For example, the following are valid cron expressions:</p> <ul> <li> <p>Daily
     * at noon UTC: <code>cron(0 12 ? * * *)</code> </p> </li> <li> <p>Daily at
     * midnight UTC: <code>cron(0 0 ? * * *)</code> </p> </li> </ul> <p>To support
     * running every 6, 12 hours, the following are also supported:</p> <p>
     * <code>cron(0 [00-23]/[01-24] ? * * *)</code> </p> <p>For example, the following
     * are valid cron expressions:</p> <ul> <li> <p>Every 12 hours, starting at 5pm
     * UTC: <code>cron(0 17/12 ? * * *)</code> </p> </li> <li> <p>Every two hours
     * starting at midnight: <code>cron(0 0/2 ? * * *)</code> </p> </li> </ul> 
     * <ul> <li> <p>Even though the cron expression is set to start at 5PM UTC, note
     * that there could be a delay of 0-20 minutes from the actual requested time to
     * run the execution. </p> </li> <li> <p>We recommend that if you would like a
     * daily schedule, you do not provide this parameter. Amazon SageMaker will pick a
     * time for running every day.</p> </li> </ul> 
     */
    inline ScheduleConfig& WithScheduleExpression(const Aws::String& value) { SetScheduleExpression(value); return *this;}

    /**
     * <p>A cron expression that describes details about the monitoring schedule.</p>
     * <p>Currently the only supported cron expressions are:</p> <ul> <li> <p>If you
     * want to set the job to start every hour, please use the following:</p> <p>
     * <code>Hourly: cron(0 * ? * * *)</code> </p> </li> <li> <p>If you want to start
     * the job daily:</p> <p> <code>cron(0 [00-23] ? * * *)</code> </p> </li> </ul>
     * <p>For example, the following are valid cron expressions:</p> <ul> <li> <p>Daily
     * at noon UTC: <code>cron(0 12 ? * * *)</code> </p> </li> <li> <p>Daily at
     * midnight UTC: <code>cron(0 0 ? * * *)</code> </p> </li> </ul> <p>To support
     * running every 6, 12 hours, the following are also supported:</p> <p>
     * <code>cron(0 [00-23]/[01-24] ? * * *)</code> </p> <p>For example, the following
     * are valid cron expressions:</p> <ul> <li> <p>Every 12 hours, starting at 5pm
     * UTC: <code>cron(0 17/12 ? * * *)</code> </p> </li> <li> <p>Every two hours
     * starting at midnight: <code>cron(0 0/2 ? * * *)</code> </p> </li> </ul> 
     * <ul> <li> <p>Even though the cron expression is set to start at 5PM UTC, note
     * that there could be a delay of 0-20 minutes from the actual requested time to
     * run the execution. </p> </li> <li> <p>We recommend that if you would like a
     * daily schedule, you do not provide this parameter. Amazon SageMaker will pick a
     * time for running every day.</p> </li> </ul> 
     */
    inline ScheduleConfig& WithScheduleExpression(Aws::String&& value) { SetScheduleExpression(std::move(value)); return *this;}

    /**
     * <p>A cron expression that describes details about the monitoring schedule.</p>
     * <p>Currently the only supported cron expressions are:</p> <ul> <li> <p>If you
     * want to set the job to start every hour, please use the following:</p> <p>
     * <code>Hourly: cron(0 * ? * * *)</code> </p> </li> <li> <p>If you want to start
     * the job daily:</p> <p> <code>cron(0 [00-23] ? * * *)</code> </p> </li> </ul>
     * <p>For example, the following are valid cron expressions:</p> <ul> <li> <p>Daily
     * at noon UTC: <code>cron(0 12 ? * * *)</code> </p> </li> <li> <p>Daily at
     * midnight UTC: <code>cron(0 0 ? * * *)</code> </p> </li> </ul> <p>To support
     * running every 6, 12 hours, the following are also supported:</p> <p>
     * <code>cron(0 [00-23]/[01-24] ? * * *)</code> </p> <p>For example, the following
     * are valid cron expressions:</p> <ul> <li> <p>Every 12 hours, starting at 5pm
     * UTC: <code>cron(0 17/12 ? * * *)</code> </p> </li> <li> <p>Every two hours
     * starting at midnight: <code>cron(0 0/2 ? * * *)</code> </p> </li> </ul> 
     * <ul> <li> <p>Even though the cron expression is set to start at 5PM UTC, note
     * that there could be a delay of 0-20 minutes from the actual requested time to
     * run the execution. </p> </li> <li> <p>We recommend that if you would like a
     * daily schedule, you do not provide this parameter. Amazon SageMaker will pick a
     * time for running every day.</p> </li> </ul> 
     */
    inline ScheduleConfig& WithScheduleExpression(const char* value) { SetScheduleExpression(value); return *this;}

  private:

    Aws::String m_scheduleExpression;
    bool m_scheduleExpressionHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
