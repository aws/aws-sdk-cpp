/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/synthetics/Synthetics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/synthetics/model/RetryConfigInput.h>
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
namespace Synthetics
{
namespace Model
{

  /**
   * <p>This structure specifies how often a canary is to make runs and the date and
   * time when it should stop making runs.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/synthetics-2017-10-11/CanaryScheduleInput">AWS
   * API Reference</a></p>
   */
  class CanaryScheduleInput
  {
  public:
    AWS_SYNTHETICS_API CanaryScheduleInput() = default;
    AWS_SYNTHETICS_API CanaryScheduleInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_SYNTHETICS_API CanaryScheduleInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SYNTHETICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A <code>rate</code> expression or a <code>cron</code> expression that defines
     * how often the canary is to run.</p> <p>For a rate expression, The syntax is
     * <code>rate(<i>number unit</i>)</code>. <i>unit</i> can be <code>minute</code>,
     * <code>minutes</code>, or <code>hour</code>. </p> <p>For example, <code>rate(1
     * minute)</code> runs the canary once a minute, <code>rate(10 minutes)</code> runs
     * it once every 10 minutes, and <code>rate(1 hour)</code> runs it once every hour.
     * You can specify a frequency between <code>rate(1 minute)</code> and <code>rate(1
     * hour)</code>.</p> <p>Specifying <code>rate(0 minute)</code> or <code>rate(0
     * hour)</code> is a special value that causes the canary to run only once when it
     * is started.</p> <p>Use <code>cron(<i>expression</i>)</code> to specify a cron
     * expression. You can't schedule a canary to wait for more than a year before
     * running. For information about the syntax for cron expressions, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/CloudWatch_Synthetics_Canaries_cron.html">
     * Scheduling canary runs using cron</a>.</p>
     */
    inline const Aws::String& GetExpression() const { return m_expression; }
    inline bool ExpressionHasBeenSet() const { return m_expressionHasBeenSet; }
    template<typename ExpressionT = Aws::String>
    void SetExpression(ExpressionT&& value) { m_expressionHasBeenSet = true; m_expression = std::forward<ExpressionT>(value); }
    template<typename ExpressionT = Aws::String>
    CanaryScheduleInput& WithExpression(ExpressionT&& value) { SetExpression(std::forward<ExpressionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>How long, in seconds, for the canary to continue making regular runs
     * according to the schedule in the <code>Expression</code> value. If you specify
     * 0, the canary continues making runs until you stop it. If you omit this field,
     * the default of 0 is used.</p>
     */
    inline long long GetDurationInSeconds() const { return m_durationInSeconds; }
    inline bool DurationInSecondsHasBeenSet() const { return m_durationInSecondsHasBeenSet; }
    inline void SetDurationInSeconds(long long value) { m_durationInSecondsHasBeenSet = true; m_durationInSeconds = value; }
    inline CanaryScheduleInput& WithDurationInSeconds(long long value) { SetDurationInSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A structure that contains the retry configuration for a canary</p>
     */
    inline const RetryConfigInput& GetRetryConfig() const { return m_retryConfig; }
    inline bool RetryConfigHasBeenSet() const { return m_retryConfigHasBeenSet; }
    template<typename RetryConfigT = RetryConfigInput>
    void SetRetryConfig(RetryConfigT&& value) { m_retryConfigHasBeenSet = true; m_retryConfig = std::forward<RetryConfigT>(value); }
    template<typename RetryConfigT = RetryConfigInput>
    CanaryScheduleInput& WithRetryConfig(RetryConfigT&& value) { SetRetryConfig(std::forward<RetryConfigT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_expression;
    bool m_expressionHasBeenSet = false;

    long long m_durationInSeconds{0};
    bool m_durationInSecondsHasBeenSet = false;

    RetryConfigInput m_retryConfig;
    bool m_retryConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace Synthetics
} // namespace Aws
