/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>The value input pf the numeric range filter.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/NumericRangeFilterValue">AWS
   * API Reference</a></p>
   */
  class NumericRangeFilterValue
  {
  public:
    AWS_QUICKSIGHT_API NumericRangeFilterValue() = default;
    AWS_QUICKSIGHT_API NumericRangeFilterValue(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API NumericRangeFilterValue& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The static value of the numeric range filter.</p>
     */
    inline double GetStaticValue() const { return m_staticValue; }
    inline bool StaticValueHasBeenSet() const { return m_staticValueHasBeenSet; }
    inline void SetStaticValue(double value) { m_staticValueHasBeenSet = true; m_staticValue = value; }
    inline NumericRangeFilterValue& WithStaticValue(double value) { SetStaticValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The parameter that is used in the numeric range.</p>
     */
    inline const Aws::String& GetParameter() const { return m_parameter; }
    inline bool ParameterHasBeenSet() const { return m_parameterHasBeenSet; }
    template<typename ParameterT = Aws::String>
    void SetParameter(ParameterT&& value) { m_parameterHasBeenSet = true; m_parameter = std::forward<ParameterT>(value); }
    template<typename ParameterT = Aws::String>
    NumericRangeFilterValue& WithParameter(ParameterT&& value) { SetParameter(std::forward<ParameterT>(value)); return *this;}
    ///@}
  private:

    double m_staticValue{0.0};
    bool m_staticValueHasBeenSet = false;

    Aws::String m_parameter;
    bool m_parameterHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
