/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>

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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>The liner axis scale setup.</p> <p>This is a union type structure. For this
   * structure to be valid, only one of the attributes can be defined.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/AxisLinearScale">AWS
   * API Reference</a></p>
   */
  class AxisLinearScale
  {
  public:
    AWS_QUICKSIGHT_API AxisLinearScale() = default;
    AWS_QUICKSIGHT_API AxisLinearScale(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API AxisLinearScale& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The step count setup of a linear axis.</p>
     */
    inline int GetStepCount() const { return m_stepCount; }
    inline bool StepCountHasBeenSet() const { return m_stepCountHasBeenSet; }
    inline void SetStepCount(int value) { m_stepCountHasBeenSet = true; m_stepCount = value; }
    inline AxisLinearScale& WithStepCount(int value) { SetStepCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The step size setup of a linear axis.</p>
     */
    inline double GetStepSize() const { return m_stepSize; }
    inline bool StepSizeHasBeenSet() const { return m_stepSizeHasBeenSet; }
    inline void SetStepSize(double value) { m_stepSizeHasBeenSet = true; m_stepSize = value; }
    inline AxisLinearScale& WithStepSize(double value) { SetStepSize(value); return *this;}
    ///@}
  private:

    int m_stepCount{0};
    bool m_stepCountHasBeenSet = false;

    double m_stepSize{0.0};
    bool m_stepSizeHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
