/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/DynamicDefaultValue.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <code>DecimalParameterDeclaration</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DecimalDefaultValues">AWS
   * API Reference</a></p>
   */
  class DecimalDefaultValues
  {
  public:
    AWS_QUICKSIGHT_API DecimalDefaultValues();
    AWS_QUICKSIGHT_API DecimalDefaultValues(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API DecimalDefaultValues& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The dynamic value of the <code>DecimalDefaultValues</code>. Different
     * defaults are displayed according to users, groups, and values mapping.</p>
     */
    inline const DynamicDefaultValue& GetDynamicValue() const{ return m_dynamicValue; }

    /**
     * <p>The dynamic value of the <code>DecimalDefaultValues</code>. Different
     * defaults are displayed according to users, groups, and values mapping.</p>
     */
    inline bool DynamicValueHasBeenSet() const { return m_dynamicValueHasBeenSet; }

    /**
     * <p>The dynamic value of the <code>DecimalDefaultValues</code>. Different
     * defaults are displayed according to users, groups, and values mapping.</p>
     */
    inline void SetDynamicValue(const DynamicDefaultValue& value) { m_dynamicValueHasBeenSet = true; m_dynamicValue = value; }

    /**
     * <p>The dynamic value of the <code>DecimalDefaultValues</code>. Different
     * defaults are displayed according to users, groups, and values mapping.</p>
     */
    inline void SetDynamicValue(DynamicDefaultValue&& value) { m_dynamicValueHasBeenSet = true; m_dynamicValue = std::move(value); }

    /**
     * <p>The dynamic value of the <code>DecimalDefaultValues</code>. Different
     * defaults are displayed according to users, groups, and values mapping.</p>
     */
    inline DecimalDefaultValues& WithDynamicValue(const DynamicDefaultValue& value) { SetDynamicValue(value); return *this;}

    /**
     * <p>The dynamic value of the <code>DecimalDefaultValues</code>. Different
     * defaults are displayed according to users, groups, and values mapping.</p>
     */
    inline DecimalDefaultValues& WithDynamicValue(DynamicDefaultValue&& value) { SetDynamicValue(std::move(value)); return *this;}


    /**
     * <p>The static values of the <code>DecimalDefaultValues</code>.</p>
     */
    inline const Aws::Vector<double>& GetStaticValues() const{ return m_staticValues; }

    /**
     * <p>The static values of the <code>DecimalDefaultValues</code>.</p>
     */
    inline bool StaticValuesHasBeenSet() const { return m_staticValuesHasBeenSet; }

    /**
     * <p>The static values of the <code>DecimalDefaultValues</code>.</p>
     */
    inline void SetStaticValues(const Aws::Vector<double>& value) { m_staticValuesHasBeenSet = true; m_staticValues = value; }

    /**
     * <p>The static values of the <code>DecimalDefaultValues</code>.</p>
     */
    inline void SetStaticValues(Aws::Vector<double>&& value) { m_staticValuesHasBeenSet = true; m_staticValues = std::move(value); }

    /**
     * <p>The static values of the <code>DecimalDefaultValues</code>.</p>
     */
    inline DecimalDefaultValues& WithStaticValues(const Aws::Vector<double>& value) { SetStaticValues(value); return *this;}

    /**
     * <p>The static values of the <code>DecimalDefaultValues</code>.</p>
     */
    inline DecimalDefaultValues& WithStaticValues(Aws::Vector<double>&& value) { SetStaticValues(std::move(value)); return *this;}

    /**
     * <p>The static values of the <code>DecimalDefaultValues</code>.</p>
     */
    inline DecimalDefaultValues& AddStaticValues(double value) { m_staticValuesHasBeenSet = true; m_staticValues.push_back(value); return *this; }

  private:

    DynamicDefaultValue m_dynamicValue;
    bool m_dynamicValueHasBeenSet = false;

    Aws::Vector<double> m_staticValues;
    bool m_staticValuesHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
