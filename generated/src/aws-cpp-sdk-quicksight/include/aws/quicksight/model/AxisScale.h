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
    AWS_QUICKSIGHT_API AxisScale() = default;
    AWS_QUICKSIGHT_API AxisScale(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API AxisScale& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The linear axis scale setup.</p>
     */
    inline const AxisLinearScale& GetLinear() const { return m_linear; }
    inline bool LinearHasBeenSet() const { return m_linearHasBeenSet; }
    template<typename LinearT = AxisLinearScale>
    void SetLinear(LinearT&& value) { m_linearHasBeenSet = true; m_linear = std::forward<LinearT>(value); }
    template<typename LinearT = AxisLinearScale>
    AxisScale& WithLinear(LinearT&& value) { SetLinear(std::forward<LinearT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The logarithmic axis scale setup.</p>
     */
    inline const AxisLogarithmicScale& GetLogarithmic() const { return m_logarithmic; }
    inline bool LogarithmicHasBeenSet() const { return m_logarithmicHasBeenSet; }
    template<typename LogarithmicT = AxisLogarithmicScale>
    void SetLogarithmic(LogarithmicT&& value) { m_logarithmicHasBeenSet = true; m_logarithmic = std::forward<LogarithmicT>(value); }
    template<typename LogarithmicT = AxisLogarithmicScale>
    AxisScale& WithLogarithmic(LogarithmicT&& value) { SetLogarithmic(std::forward<LogarithmicT>(value)); return *this;}
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
