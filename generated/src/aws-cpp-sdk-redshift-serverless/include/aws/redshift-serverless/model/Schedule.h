/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift-serverless/RedshiftServerless_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
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
namespace RedshiftServerless
{
namespace Model
{

  /**
   * <p>The schedule of when Amazon Redshift Serverless should run the scheduled
   * action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-serverless-2021-04-21/Schedule">AWS
   * API Reference</a></p>
   */
  class Schedule
  {
  public:
    AWS_REDSHIFTSERVERLESS_API Schedule();
    AWS_REDSHIFTSERVERLESS_API Schedule(Aws::Utils::Json::JsonView jsonValue);
    AWS_REDSHIFTSERVERLESS_API Schedule& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_REDSHIFTSERVERLESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The timestamp of when Amazon Redshift Serverless should run the scheduled
     * action. Format of at expressions is "<code>at(yyyy-mm-ddThh:mm:ss)</code>". For
     * example, "<code>at(2016-03-04T17:27:00)</code>".</p>
     */
    inline const Aws::Utils::DateTime& GetAt() const{ return m_at; }

    /**
     * <p>The timestamp of when Amazon Redshift Serverless should run the scheduled
     * action. Format of at expressions is "<code>at(yyyy-mm-ddThh:mm:ss)</code>". For
     * example, "<code>at(2016-03-04T17:27:00)</code>".</p>
     */
    inline bool AtHasBeenSet() const { return m_atHasBeenSet; }

    /**
     * <p>The timestamp of when Amazon Redshift Serverless should run the scheduled
     * action. Format of at expressions is "<code>at(yyyy-mm-ddThh:mm:ss)</code>". For
     * example, "<code>at(2016-03-04T17:27:00)</code>".</p>
     */
    inline void SetAt(const Aws::Utils::DateTime& value) { m_atHasBeenSet = true; m_at = value; }

    /**
     * <p>The timestamp of when Amazon Redshift Serverless should run the scheduled
     * action. Format of at expressions is "<code>at(yyyy-mm-ddThh:mm:ss)</code>". For
     * example, "<code>at(2016-03-04T17:27:00)</code>".</p>
     */
    inline void SetAt(Aws::Utils::DateTime&& value) { m_atHasBeenSet = true; m_at = std::move(value); }

    /**
     * <p>The timestamp of when Amazon Redshift Serverless should run the scheduled
     * action. Format of at expressions is "<code>at(yyyy-mm-ddThh:mm:ss)</code>". For
     * example, "<code>at(2016-03-04T17:27:00)</code>".</p>
     */
    inline Schedule& WithAt(const Aws::Utils::DateTime& value) { SetAt(value); return *this;}

    /**
     * <p>The timestamp of when Amazon Redshift Serverless should run the scheduled
     * action. Format of at expressions is "<code>at(yyyy-mm-ddThh:mm:ss)</code>". For
     * example, "<code>at(2016-03-04T17:27:00)</code>".</p>
     */
    inline Schedule& WithAt(Aws::Utils::DateTime&& value) { SetAt(std::move(value)); return *this;}


    /**
     * <p>The cron expression to use to schedule a recurring scheduled action. Schedule
     * invocations must be separated by at least one hour.</p> <p>Format of cron
     * expressions is "<code>cron(Minutes Hours Day-of-month Month Day-of-week
     * Year)</code>". For example, "<code>cron(0 10 ? * MON *)</code>". For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/events/ScheduledEvents.html#CronExpressions">Cron
     * Expressions</a> in the <i>Amazon CloudWatch Events User Guide</i>.</p>
     */
    inline const Aws::String& GetCron() const{ return m_cron; }

    /**
     * <p>The cron expression to use to schedule a recurring scheduled action. Schedule
     * invocations must be separated by at least one hour.</p> <p>Format of cron
     * expressions is "<code>cron(Minutes Hours Day-of-month Month Day-of-week
     * Year)</code>". For example, "<code>cron(0 10 ? * MON *)</code>". For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/events/ScheduledEvents.html#CronExpressions">Cron
     * Expressions</a> in the <i>Amazon CloudWatch Events User Guide</i>.</p>
     */
    inline bool CronHasBeenSet() const { return m_cronHasBeenSet; }

    /**
     * <p>The cron expression to use to schedule a recurring scheduled action. Schedule
     * invocations must be separated by at least one hour.</p> <p>Format of cron
     * expressions is "<code>cron(Minutes Hours Day-of-month Month Day-of-week
     * Year)</code>". For example, "<code>cron(0 10 ? * MON *)</code>". For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/events/ScheduledEvents.html#CronExpressions">Cron
     * Expressions</a> in the <i>Amazon CloudWatch Events User Guide</i>.</p>
     */
    inline void SetCron(const Aws::String& value) { m_cronHasBeenSet = true; m_cron = value; }

    /**
     * <p>The cron expression to use to schedule a recurring scheduled action. Schedule
     * invocations must be separated by at least one hour.</p> <p>Format of cron
     * expressions is "<code>cron(Minutes Hours Day-of-month Month Day-of-week
     * Year)</code>". For example, "<code>cron(0 10 ? * MON *)</code>". For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/events/ScheduledEvents.html#CronExpressions">Cron
     * Expressions</a> in the <i>Amazon CloudWatch Events User Guide</i>.</p>
     */
    inline void SetCron(Aws::String&& value) { m_cronHasBeenSet = true; m_cron = std::move(value); }

    /**
     * <p>The cron expression to use to schedule a recurring scheduled action. Schedule
     * invocations must be separated by at least one hour.</p> <p>Format of cron
     * expressions is "<code>cron(Minutes Hours Day-of-month Month Day-of-week
     * Year)</code>". For example, "<code>cron(0 10 ? * MON *)</code>". For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/events/ScheduledEvents.html#CronExpressions">Cron
     * Expressions</a> in the <i>Amazon CloudWatch Events User Guide</i>.</p>
     */
    inline void SetCron(const char* value) { m_cronHasBeenSet = true; m_cron.assign(value); }

    /**
     * <p>The cron expression to use to schedule a recurring scheduled action. Schedule
     * invocations must be separated by at least one hour.</p> <p>Format of cron
     * expressions is "<code>cron(Minutes Hours Day-of-month Month Day-of-week
     * Year)</code>". For example, "<code>cron(0 10 ? * MON *)</code>". For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/events/ScheduledEvents.html#CronExpressions">Cron
     * Expressions</a> in the <i>Amazon CloudWatch Events User Guide</i>.</p>
     */
    inline Schedule& WithCron(const Aws::String& value) { SetCron(value); return *this;}

    /**
     * <p>The cron expression to use to schedule a recurring scheduled action. Schedule
     * invocations must be separated by at least one hour.</p> <p>Format of cron
     * expressions is "<code>cron(Minutes Hours Day-of-month Month Day-of-week
     * Year)</code>". For example, "<code>cron(0 10 ? * MON *)</code>". For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/events/ScheduledEvents.html#CronExpressions">Cron
     * Expressions</a> in the <i>Amazon CloudWatch Events User Guide</i>.</p>
     */
    inline Schedule& WithCron(Aws::String&& value) { SetCron(std::move(value)); return *this;}

    /**
     * <p>The cron expression to use to schedule a recurring scheduled action. Schedule
     * invocations must be separated by at least one hour.</p> <p>Format of cron
     * expressions is "<code>cron(Minutes Hours Day-of-month Month Day-of-week
     * Year)</code>". For example, "<code>cron(0 10 ? * MON *)</code>". For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/events/ScheduledEvents.html#CronExpressions">Cron
     * Expressions</a> in the <i>Amazon CloudWatch Events User Guide</i>.</p>
     */
    inline Schedule& WithCron(const char* value) { SetCron(value); return *this;}

  private:

    Aws::Utils::DateTime m_at;
    bool m_atHasBeenSet = false;

    Aws::String m_cron;
    bool m_cronHasBeenSet = false;
  };

} // namespace Model
} // namespace RedshiftServerless
} // namespace Aws
