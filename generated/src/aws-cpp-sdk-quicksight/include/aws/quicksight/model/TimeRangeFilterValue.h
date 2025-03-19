/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/quicksight/model/RollingDateConfiguration.h>
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
   * <p>The value of a time range filter.</p> <p>This is a union type structure. For
   * this structure to be valid, only one of the attributes can be
   * defined.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/TimeRangeFilterValue">AWS
   * API Reference</a></p>
   */
  class TimeRangeFilterValue
  {
  public:
    AWS_QUICKSIGHT_API TimeRangeFilterValue() = default;
    AWS_QUICKSIGHT_API TimeRangeFilterValue(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API TimeRangeFilterValue& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The static input value.</p>
     */
    inline const Aws::Utils::DateTime& GetStaticValue() const { return m_staticValue; }
    inline bool StaticValueHasBeenSet() const { return m_staticValueHasBeenSet; }
    template<typename StaticValueT = Aws::Utils::DateTime>
    void SetStaticValue(StaticValueT&& value) { m_staticValueHasBeenSet = true; m_staticValue = std::forward<StaticValueT>(value); }
    template<typename StaticValueT = Aws::Utils::DateTime>
    TimeRangeFilterValue& WithStaticValue(StaticValueT&& value) { SetStaticValue(std::forward<StaticValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The rolling date input value.</p>
     */
    inline const RollingDateConfiguration& GetRollingDate() const { return m_rollingDate; }
    inline bool RollingDateHasBeenSet() const { return m_rollingDateHasBeenSet; }
    template<typename RollingDateT = RollingDateConfiguration>
    void SetRollingDate(RollingDateT&& value) { m_rollingDateHasBeenSet = true; m_rollingDate = std::forward<RollingDateT>(value); }
    template<typename RollingDateT = RollingDateConfiguration>
    TimeRangeFilterValue& WithRollingDate(RollingDateT&& value) { SetRollingDate(std::forward<RollingDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The parameter type input value.</p>
     */
    inline const Aws::String& GetParameter() const { return m_parameter; }
    inline bool ParameterHasBeenSet() const { return m_parameterHasBeenSet; }
    template<typename ParameterT = Aws::String>
    void SetParameter(ParameterT&& value) { m_parameterHasBeenSet = true; m_parameter = std::forward<ParameterT>(value); }
    template<typename ParameterT = Aws::String>
    TimeRangeFilterValue& WithParameter(ParameterT&& value) { SetParameter(std::forward<ParameterT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_staticValue{};
    bool m_staticValueHasBeenSet = false;

    RollingDateConfiguration m_rollingDate;
    bool m_rollingDateHasBeenSet = false;

    Aws::String m_parameter;
    bool m_parameterHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
