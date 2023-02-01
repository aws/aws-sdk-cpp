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
    AWS_QUICKSIGHT_API DateTimeDefaultValues();
    AWS_QUICKSIGHT_API DateTimeDefaultValues(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API DateTimeDefaultValues& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The dynamic value of the <code>DataTimeDefaultValues</code>. Different
     * defaults are displayed according to users, groups, and values mapping.</p>
     */
    inline const DynamicDefaultValue& GetDynamicValue() const{ return m_dynamicValue; }

    /**
     * <p>The dynamic value of the <code>DataTimeDefaultValues</code>. Different
     * defaults are displayed according to users, groups, and values mapping.</p>
     */
    inline bool DynamicValueHasBeenSet() const { return m_dynamicValueHasBeenSet; }

    /**
     * <p>The dynamic value of the <code>DataTimeDefaultValues</code>. Different
     * defaults are displayed according to users, groups, and values mapping.</p>
     */
    inline void SetDynamicValue(const DynamicDefaultValue& value) { m_dynamicValueHasBeenSet = true; m_dynamicValue = value; }

    /**
     * <p>The dynamic value of the <code>DataTimeDefaultValues</code>. Different
     * defaults are displayed according to users, groups, and values mapping.</p>
     */
    inline void SetDynamicValue(DynamicDefaultValue&& value) { m_dynamicValueHasBeenSet = true; m_dynamicValue = std::move(value); }

    /**
     * <p>The dynamic value of the <code>DataTimeDefaultValues</code>. Different
     * defaults are displayed according to users, groups, and values mapping.</p>
     */
    inline DateTimeDefaultValues& WithDynamicValue(const DynamicDefaultValue& value) { SetDynamicValue(value); return *this;}

    /**
     * <p>The dynamic value of the <code>DataTimeDefaultValues</code>. Different
     * defaults are displayed according to users, groups, and values mapping.</p>
     */
    inline DateTimeDefaultValues& WithDynamicValue(DynamicDefaultValue&& value) { SetDynamicValue(std::move(value)); return *this;}


    /**
     * <p>The static values of the <code>DataTimeDefaultValues</code>.</p>
     */
    inline const Aws::Vector<Aws::Utils::DateTime>& GetStaticValues() const{ return m_staticValues; }

    /**
     * <p>The static values of the <code>DataTimeDefaultValues</code>.</p>
     */
    inline bool StaticValuesHasBeenSet() const { return m_staticValuesHasBeenSet; }

    /**
     * <p>The static values of the <code>DataTimeDefaultValues</code>.</p>
     */
    inline void SetStaticValues(const Aws::Vector<Aws::Utils::DateTime>& value) { m_staticValuesHasBeenSet = true; m_staticValues = value; }

    /**
     * <p>The static values of the <code>DataTimeDefaultValues</code>.</p>
     */
    inline void SetStaticValues(Aws::Vector<Aws::Utils::DateTime>&& value) { m_staticValuesHasBeenSet = true; m_staticValues = std::move(value); }

    /**
     * <p>The static values of the <code>DataTimeDefaultValues</code>.</p>
     */
    inline DateTimeDefaultValues& WithStaticValues(const Aws::Vector<Aws::Utils::DateTime>& value) { SetStaticValues(value); return *this;}

    /**
     * <p>The static values of the <code>DataTimeDefaultValues</code>.</p>
     */
    inline DateTimeDefaultValues& WithStaticValues(Aws::Vector<Aws::Utils::DateTime>&& value) { SetStaticValues(std::move(value)); return *this;}

    /**
     * <p>The static values of the <code>DataTimeDefaultValues</code>.</p>
     */
    inline DateTimeDefaultValues& AddStaticValues(const Aws::Utils::DateTime& value) { m_staticValuesHasBeenSet = true; m_staticValues.push_back(value); return *this; }

    /**
     * <p>The static values of the <code>DataTimeDefaultValues</code>.</p>
     */
    inline DateTimeDefaultValues& AddStaticValues(Aws::Utils::DateTime&& value) { m_staticValuesHasBeenSet = true; m_staticValues.push_back(std::move(value)); return *this; }


    /**
     * <p>The rolling date of the <code>DataTimeDefaultValues</code>. The date is
     * determined from the dataset based on input expression.</p>
     */
    inline const RollingDateConfiguration& GetRollingDate() const{ return m_rollingDate; }

    /**
     * <p>The rolling date of the <code>DataTimeDefaultValues</code>. The date is
     * determined from the dataset based on input expression.</p>
     */
    inline bool RollingDateHasBeenSet() const { return m_rollingDateHasBeenSet; }

    /**
     * <p>The rolling date of the <code>DataTimeDefaultValues</code>. The date is
     * determined from the dataset based on input expression.</p>
     */
    inline void SetRollingDate(const RollingDateConfiguration& value) { m_rollingDateHasBeenSet = true; m_rollingDate = value; }

    /**
     * <p>The rolling date of the <code>DataTimeDefaultValues</code>. The date is
     * determined from the dataset based on input expression.</p>
     */
    inline void SetRollingDate(RollingDateConfiguration&& value) { m_rollingDateHasBeenSet = true; m_rollingDate = std::move(value); }

    /**
     * <p>The rolling date of the <code>DataTimeDefaultValues</code>. The date is
     * determined from the dataset based on input expression.</p>
     */
    inline DateTimeDefaultValues& WithRollingDate(const RollingDateConfiguration& value) { SetRollingDate(value); return *this;}

    /**
     * <p>The rolling date of the <code>DataTimeDefaultValues</code>. The date is
     * determined from the dataset based on input expression.</p>
     */
    inline DateTimeDefaultValues& WithRollingDate(RollingDateConfiguration&& value) { SetRollingDate(std::move(value)); return *this;}

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
