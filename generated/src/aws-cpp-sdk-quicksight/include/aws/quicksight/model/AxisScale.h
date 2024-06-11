/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/AxisLinearScale.h>
#include <aws/quicksight/model/AxisLogarithmicScale.h>
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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>The scale setup options for a numeric axis display.</p> <p>This is a union
   * type structure. For this structure to be valid, only one of the attributes can
   * be defined.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/AxisScale">AWS
   * API Reference</a></p>
   */
  class AxisScale
  {
  public:
    AWS_QUICKSIGHT_API AxisScale();
    AWS_QUICKSIGHT_API AxisScale(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API AxisScale& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The linear axis scale setup.</p>
     */
    inline const AxisLinearScale& GetLinear() const{ return m_linear; }
    inline bool LinearHasBeenSet() const { return m_linearHasBeenSet; }
    inline void SetLinear(const AxisLinearScale& value) { m_linearHasBeenSet = true; m_linear = value; }
    inline void SetLinear(AxisLinearScale&& value) { m_linearHasBeenSet = true; m_linear = std::move(value); }
    inline AxisScale& WithLinear(const AxisLinearScale& value) { SetLinear(value); return *this;}
    inline AxisScale& WithLinear(AxisLinearScale&& value) { SetLinear(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The logarithmic axis scale setup.</p>
     */
    inline const AxisLogarithmicScale& GetLogarithmic() const{ return m_logarithmic; }
    inline bool LogarithmicHasBeenSet() const { return m_logarithmicHasBeenSet; }
    inline void SetLogarithmic(const AxisLogarithmicScale& value) { m_logarithmicHasBeenSet = true; m_logarithmic = value; }
    inline void SetLogarithmic(AxisLogarithmicScale&& value) { m_logarithmicHasBeenSet = true; m_logarithmic = std::move(value); }
    inline AxisScale& WithLogarithmic(const AxisLogarithmicScale& value) { SetLogarithmic(value); return *this;}
    inline AxisScale& WithLogarithmic(AxisLogarithmicScale&& value) { SetLogarithmic(std::move(value)); return *this;}
    ///@}
  private:

    AxisLinearScale m_linear;
    bool m_linearHasBeenSet = false;

    AxisLogarithmicScale m_logarithmic;
    bool m_logarithmicHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
