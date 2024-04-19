/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/personalize/Personalize_EXPORTS.h>
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
namespace Personalize
{
namespace Model
{

  /**
   * <p>The automatic training configuration to use when
   * <code>performAutoTraining</code> is true.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/AutoTrainingConfig">AWS
   * API Reference</a></p>
   */
  class AutoTrainingConfig
  {
  public:
    AWS_PERSONALIZE_API AutoTrainingConfig();
    AWS_PERSONALIZE_API AutoTrainingConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_PERSONALIZE_API AutoTrainingConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PERSONALIZE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies how often to automatically train new solution versions. Specify a
     * rate expression in rate(<i>value</i> <i>unit</i>) format. For value, specify a
     * number between 1 and 30. For unit, specify <code>day</code> or
     * <code>days</code>. For example, to automatically create a new solution version
     * every 5 days, specify <code>rate(5 days)</code>. The default is every 7
     * days.</p> <p>For more information about auto training, see <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/customizing-solution-config.html">Creating
     * and configuring a solution</a>.</p>
     */
    inline const Aws::String& GetSchedulingExpression() const{ return m_schedulingExpression; }

    /**
     * <p>Specifies how often to automatically train new solution versions. Specify a
     * rate expression in rate(<i>value</i> <i>unit</i>) format. For value, specify a
     * number between 1 and 30. For unit, specify <code>day</code> or
     * <code>days</code>. For example, to automatically create a new solution version
     * every 5 days, specify <code>rate(5 days)</code>. The default is every 7
     * days.</p> <p>For more information about auto training, see <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/customizing-solution-config.html">Creating
     * and configuring a solution</a>.</p>
     */
    inline bool SchedulingExpressionHasBeenSet() const { return m_schedulingExpressionHasBeenSet; }

    /**
     * <p>Specifies how often to automatically train new solution versions. Specify a
     * rate expression in rate(<i>value</i> <i>unit</i>) format. For value, specify a
     * number between 1 and 30. For unit, specify <code>day</code> or
     * <code>days</code>. For example, to automatically create a new solution version
     * every 5 days, specify <code>rate(5 days)</code>. The default is every 7
     * days.</p> <p>For more information about auto training, see <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/customizing-solution-config.html">Creating
     * and configuring a solution</a>.</p>
     */
    inline void SetSchedulingExpression(const Aws::String& value) { m_schedulingExpressionHasBeenSet = true; m_schedulingExpression = value; }

    /**
     * <p>Specifies how often to automatically train new solution versions. Specify a
     * rate expression in rate(<i>value</i> <i>unit</i>) format. For value, specify a
     * number between 1 and 30. For unit, specify <code>day</code> or
     * <code>days</code>. For example, to automatically create a new solution version
     * every 5 days, specify <code>rate(5 days)</code>. The default is every 7
     * days.</p> <p>For more information about auto training, see <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/customizing-solution-config.html">Creating
     * and configuring a solution</a>.</p>
     */
    inline void SetSchedulingExpression(Aws::String&& value) { m_schedulingExpressionHasBeenSet = true; m_schedulingExpression = std::move(value); }

    /**
     * <p>Specifies how often to automatically train new solution versions. Specify a
     * rate expression in rate(<i>value</i> <i>unit</i>) format. For value, specify a
     * number between 1 and 30. For unit, specify <code>day</code> or
     * <code>days</code>. For example, to automatically create a new solution version
     * every 5 days, specify <code>rate(5 days)</code>. The default is every 7
     * days.</p> <p>For more information about auto training, see <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/customizing-solution-config.html">Creating
     * and configuring a solution</a>.</p>
     */
    inline void SetSchedulingExpression(const char* value) { m_schedulingExpressionHasBeenSet = true; m_schedulingExpression.assign(value); }

    /**
     * <p>Specifies how often to automatically train new solution versions. Specify a
     * rate expression in rate(<i>value</i> <i>unit</i>) format. For value, specify a
     * number between 1 and 30. For unit, specify <code>day</code> or
     * <code>days</code>. For example, to automatically create a new solution version
     * every 5 days, specify <code>rate(5 days)</code>. The default is every 7
     * days.</p> <p>For more information about auto training, see <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/customizing-solution-config.html">Creating
     * and configuring a solution</a>.</p>
     */
    inline AutoTrainingConfig& WithSchedulingExpression(const Aws::String& value) { SetSchedulingExpression(value); return *this;}

    /**
     * <p>Specifies how often to automatically train new solution versions. Specify a
     * rate expression in rate(<i>value</i> <i>unit</i>) format. For value, specify a
     * number between 1 and 30. For unit, specify <code>day</code> or
     * <code>days</code>. For example, to automatically create a new solution version
     * every 5 days, specify <code>rate(5 days)</code>. The default is every 7
     * days.</p> <p>For more information about auto training, see <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/customizing-solution-config.html">Creating
     * and configuring a solution</a>.</p>
     */
    inline AutoTrainingConfig& WithSchedulingExpression(Aws::String&& value) { SetSchedulingExpression(std::move(value)); return *this;}

    /**
     * <p>Specifies how often to automatically train new solution versions. Specify a
     * rate expression in rate(<i>value</i> <i>unit</i>) format. For value, specify a
     * number between 1 and 30. For unit, specify <code>day</code> or
     * <code>days</code>. For example, to automatically create a new solution version
     * every 5 days, specify <code>rate(5 days)</code>. The default is every 7
     * days.</p> <p>For more information about auto training, see <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/customizing-solution-config.html">Creating
     * and configuring a solution</a>.</p>
     */
    inline AutoTrainingConfig& WithSchedulingExpression(const char* value) { SetSchedulingExpression(value); return *this;}

  private:

    Aws::String m_schedulingExpression;
    bool m_schedulingExpressionHasBeenSet = false;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
