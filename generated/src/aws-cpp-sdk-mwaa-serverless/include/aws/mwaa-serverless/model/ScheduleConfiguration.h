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
 * <p>The configuration to use to schedule automated workflow execution using cron
 * expressions. Amazon Managed Workflows for Apache Airflow Serverless integrates
 * with EventBridge Scheduler to provide cost-effective, timezone-aware scheduling
 * capabilities. The service supports both time-based and event-based scheduling
 * (event-based scheduling available post-GA). When a workflow definition includes
 * scheduling information, Amazon Managed Workflows for Apache Airflow Serverless
 * automatically configures the appropriate triggers and ensures only one version
 * of a workflow has an active schedule at any time.</p><p><h3>See Also:</h3>   <a
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
   * <p>A cron expression that defines when the workflow is automatically executed.
   * Uses standard cron syntax.</p>
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
