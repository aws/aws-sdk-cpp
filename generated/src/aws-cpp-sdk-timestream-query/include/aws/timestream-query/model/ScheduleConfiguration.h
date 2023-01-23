/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/timestream-query/TimestreamQuery_EXPORTS.h>
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
namespace TimestreamQuery
{
namespace Model
{

  /**
   * <p>Configuration of the schedule of the query.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-query-2018-11-01/ScheduleConfiguration">AWS
   * API Reference</a></p>
   */
  class ScheduleConfiguration
  {
  public:
    AWS_TIMESTREAMQUERY_API ScheduleConfiguration();
    AWS_TIMESTREAMQUERY_API ScheduleConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_TIMESTREAMQUERY_API ScheduleConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TIMESTREAMQUERY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An expression that denotes when to trigger the scheduled query run. This can
     * be a cron expression or a rate expression. </p>
     */
    inline const Aws::String& GetScheduleExpression() const{ return m_scheduleExpression; }

    /**
     * <p>An expression that denotes when to trigger the scheduled query run. This can
     * be a cron expression or a rate expression. </p>
     */
    inline bool ScheduleExpressionHasBeenSet() const { return m_scheduleExpressionHasBeenSet; }

    /**
     * <p>An expression that denotes when to trigger the scheduled query run. This can
     * be a cron expression or a rate expression. </p>
     */
    inline void SetScheduleExpression(const Aws::String& value) { m_scheduleExpressionHasBeenSet = true; m_scheduleExpression = value; }

    /**
     * <p>An expression that denotes when to trigger the scheduled query run. This can
     * be a cron expression or a rate expression. </p>
     */
    inline void SetScheduleExpression(Aws::String&& value) { m_scheduleExpressionHasBeenSet = true; m_scheduleExpression = std::move(value); }

    /**
     * <p>An expression that denotes when to trigger the scheduled query run. This can
     * be a cron expression or a rate expression. </p>
     */
    inline void SetScheduleExpression(const char* value) { m_scheduleExpressionHasBeenSet = true; m_scheduleExpression.assign(value); }

    /**
     * <p>An expression that denotes when to trigger the scheduled query run. This can
     * be a cron expression or a rate expression. </p>
     */
    inline ScheduleConfiguration& WithScheduleExpression(const Aws::String& value) { SetScheduleExpression(value); return *this;}

    /**
     * <p>An expression that denotes when to trigger the scheduled query run. This can
     * be a cron expression or a rate expression. </p>
     */
    inline ScheduleConfiguration& WithScheduleExpression(Aws::String&& value) { SetScheduleExpression(std::move(value)); return *this;}

    /**
     * <p>An expression that denotes when to trigger the scheduled query run. This can
     * be a cron expression or a rate expression. </p>
     */
    inline ScheduleConfiguration& WithScheduleExpression(const char* value) { SetScheduleExpression(value); return *this;}

  private:

    Aws::String m_scheduleExpression;
    bool m_scheduleExpressionHasBeenSet = false;
  };

} // namespace Model
} // namespace TimestreamQuery
} // namespace Aws
