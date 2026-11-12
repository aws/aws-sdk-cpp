/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mwaa-serverless/MWAAServerless_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace MWAAServerless {
namespace Model {

/**
 * <p>Contains the configuration used to schedule automated workflow execution.
 * Only one version of a workflow can have an active schedule at any
 * time.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mwaa-serverless-2024-07-26/ScheduleConfiguration">AWS
 * API Reference</a></p>
 */
class ScheduleConfiguration {
 public:
  AWS_MWAASERVERLESS_API ScheduleConfiguration() = default;
  AWS_MWAASERVERLESS_API ScheduleConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_MWAASERVERLESS_API ScheduleConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MWAASERVERLESS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The schedule expression that determines when the workflow runs, as specified
   * in the <code>schedule</code> parameter of the workflow's YAML definition. You
   * can specify one of the following types of schedule expressions:</p> <ul> <li>
   * <p>Apache Airflow cron expression – Five fields, such as <code>0 12 1 *
   * *</code>.</p> </li> <li> <p>Apache Airflow schedule preset –
   * <code>@hourly</code>, <code>@daily</code>, <code>@weekly</code>,
   * <code>@monthly</code>, <code>@yearly</code>, or <code>@annually</code>.</p>
   * </li> <li> <p>EventBridge Scheduler rate expression – For example, <code>rate(5
   * minutes)</code>. Supported units are minutes, hours, and days.</p> </li> <li>
   * <p>EventBridge Scheduler cron expression – Six fields, such as <code>cron(0 12 *
   * * ? *)</code>.</p> </li> </ul> <p>In a cron expression, specify either a
   * day-of-month or a day-of-week, not both.</p>
   */
  inline const Aws::String& GetCronExpression() const { return m_cronExpression; }
  inline bool CronExpressionHasBeenSet() const { return m_cronExpressionHasBeenSet; }
  template <typename CronExpressionT = Aws::String>
  void SetCronExpression(CronExpressionT&& value) {
    m_cronExpressionHasBeenSet = true;
    m_cronExpression = std::forward<CronExpressionT>(value);
  }
  template <typename CronExpressionT = Aws::String>
  ScheduleConfiguration& WithCronExpression(CronExpressionT&& value) {
    SetCronExpression(std::forward<CronExpressionT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_cronExpression;
  bool m_cronExpressionHasBeenSet = false;
};

}  // namespace Model
}  // namespace MWAAServerless
}  // namespace Aws
