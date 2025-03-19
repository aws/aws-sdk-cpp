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
    AWS_REDSHIFTSERVERLESS_API Schedule() = default;
    AWS_REDSHIFTSERVERLESS_API Schedule(Aws::Utils::Json::JsonView jsonValue);
    AWS_REDSHIFTSERVERLESS_API Schedule& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_REDSHIFTSERVERLESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The timestamp of when Amazon Redshift Serverless should run the scheduled
     * action. Timestamp is in UTC. Format of at expression is
     * <code>yyyy-mm-ddThh:mm:ss</code>. For example,
     * <code>2016-03-04T17:27:00</code>.</p>
     */
    inline const Aws::Utils::DateTime& GetAt() const { return m_at; }
    inline bool AtHasBeenSet() const { return m_atHasBeenSet; }
    template<typename AtT = Aws::Utils::DateTime>
    void SetAt(AtT&& value) { m_atHasBeenSet = true; m_at = std::forward<AtT>(value); }
    template<typename AtT = Aws::Utils::DateTime>
    Schedule& WithAt(AtT&& value) { SetAt(std::forward<AtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The cron expression to use to schedule a recurring scheduled action. Schedule
     * invocations must be separated by at least one hour. Times are in UTC.</p>
     * <p>Format of cron expressions is <code>(Minutes Hours Day-of-month Month
     * Day-of-week Year)</code>. For example, <code>"(0 10 ? * MON *)"</code>. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/events/ScheduledEvents.html#CronExpressions">Cron
     * Expressions</a> in the <i>Amazon CloudWatch Events User Guide</i>.</p>
     */
    inline const Aws::String& GetCron() const { return m_cron; }
    inline bool CronHasBeenSet() const { return m_cronHasBeenSet; }
    template<typename CronT = Aws::String>
    void SetCron(CronT&& value) { m_cronHasBeenSet = true; m_cron = std::forward<CronT>(value); }
    template<typename CronT = Aws::String>
    Schedule& WithCron(CronT&& value) { SetCron(std::forward<CronT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_at{};
    bool m_atHasBeenSet = false;

    Aws::String m_cron;
    bool m_cronHasBeenSet = false;
  };

} // namespace Model
} // namespace RedshiftServerless
} // namespace Aws
