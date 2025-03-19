/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/DynamicDefaultValue.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/model/RollingDateConfiguration.h>
#include <aws/core/utils/DateTime.h>
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
   * <p>The default values of the
   * <code>DateTimeParameterDeclaration</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DateTimeDefaultValues">AWS
   * API Reference</a></p>
   */
  class DateTimeDefaultValues
  {
  public:
    AWS_QUICKSIGHT_API DateTimeDefaultValues() = default;
    AWS_QUICKSIGHT_API DateTimeDefaultValues(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API DateTimeDefaultValues& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The dynamic value of the <code>DataTimeDefaultValues</code>. Different
     * defaults are displayed according to users, groups, and values mapping.</p>
     */
    inline const DynamicDefaultValue& GetDynamicValue() const { return m_dynamicValue; }
    inline bool DynamicValueHasBeenSet() const { return m_dynamicValueHasBeenSet; }
    template<typename DynamicValueT = DynamicDefaultValue>
    void SetDynamicValue(DynamicValueT&& value) { m_dynamicValueHasBeenSet = true; m_dynamicValue = std::forward<DynamicValueT>(value); }
    template<typename DynamicValueT = DynamicDefaultValue>
    DateTimeDefaultValues& WithDynamicValue(DynamicValueT&& value) { SetDynamicValue(std::forward<DynamicValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The static values of the <code>DataTimeDefaultValues</code>.</p>
     */
    inline const Aws::Vector<Aws::Utils::DateTime>& GetStaticValues() const { return m_staticValues; }
    inline bool StaticValuesHasBeenSet() const { return m_staticValuesHasBeenSet; }
    template<typename StaticValuesT = Aws::Vector<Aws::Utils::DateTime>>
    void SetStaticValues(StaticValuesT&& value) { m_staticValuesHasBeenSet = true; m_staticValues = std::forward<StaticValuesT>(value); }
    template<typename StaticValuesT = Aws::Vector<Aws::Utils::DateTime>>
    DateTimeDefaultValues& WithStaticValues(StaticValuesT&& value) { SetStaticValues(std::forward<StaticValuesT>(value)); return *this;}
    template<typename StaticValuesT = Aws::Utils::DateTime>
    DateTimeDefaultValues& AddStaticValues(StaticValuesT&& value) { m_staticValuesHasBeenSet = true; m_staticValues.emplace_back(std::forward<StaticValuesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The rolling date of the <code>DataTimeDefaultValues</code>. The date is
     * determined from the dataset based on input expression.</p>
     */
    inline const RollingDateConfiguration& GetRollingDate() const { return m_rollingDate; }
    inline bool RollingDateHasBeenSet() const { return m_rollingDateHasBeenSet; }
    template<typename RollingDateT = RollingDateConfiguration>
    void SetRollingDate(RollingDateT&& value) { m_rollingDateHasBeenSet = true; m_rollingDate = std::forward<RollingDateT>(value); }
    template<typename RollingDateT = RollingDateConfiguration>
    DateTimeDefaultValues& WithRollingDate(RollingDateT&& value) { SetRollingDate(std::forward<RollingDateT>(value)); return *this;}
    ///@}
  private:

    DynamicDefaultValue m_dynamicValue;
    bool m_dynamicValueHasBeenSet = false;

    Aws::Vector<Aws::Utils::DateTime> m_staticValues;
    bool m_staticValuesHasBeenSet = false;

    RollingDateConfiguration m_rollingDate;
    bool m_rollingDateHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
