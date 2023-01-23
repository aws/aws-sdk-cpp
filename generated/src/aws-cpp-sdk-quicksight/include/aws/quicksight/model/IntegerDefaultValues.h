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
   * <code>IntegerParameterDeclaration</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/IntegerDefaultValues">AWS
   * API Reference</a></p>
   */
  class IntegerDefaultValues
  {
  public:
    AWS_QUICKSIGHT_API IntegerDefaultValues();
    AWS_QUICKSIGHT_API IntegerDefaultValues(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API IntegerDefaultValues& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The dynamic value of the <code>IntegerDefaultValues</code>. Different
     * defaults are displayed according to users, groups, and values mapping.</p>
     */
    inline const DynamicDefaultValue& GetDynamicValue() const{ return m_dynamicValue; }

    /**
     * <p>The dynamic value of the <code>IntegerDefaultValues</code>. Different
     * defaults are displayed according to users, groups, and values mapping.</p>
     */
    inline bool DynamicValueHasBeenSet() const { return m_dynamicValueHasBeenSet; }

    /**
     * <p>The dynamic value of the <code>IntegerDefaultValues</code>. Different
     * defaults are displayed according to users, groups, and values mapping.</p>
     */
    inline void SetDynamicValue(const DynamicDefaultValue& value) { m_dynamicValueHasBeenSet = true; m_dynamicValue = value; }

    /**
     * <p>The dynamic value of the <code>IntegerDefaultValues</code>. Different
     * defaults are displayed according to users, groups, and values mapping.</p>
     */
    inline void SetDynamicValue(DynamicDefaultValue&& value) { m_dynamicValueHasBeenSet = true; m_dynamicValue = std::move(value); }

    /**
     * <p>The dynamic value of the <code>IntegerDefaultValues</code>. Different
     * defaults are displayed according to users, groups, and values mapping.</p>
     */
    inline IntegerDefaultValues& WithDynamicValue(const DynamicDefaultValue& value) { SetDynamicValue(value); return *this;}

    /**
     * <p>The dynamic value of the <code>IntegerDefaultValues</code>. Different
     * defaults are displayed according to users, groups, and values mapping.</p>
     */
    inline IntegerDefaultValues& WithDynamicValue(DynamicDefaultValue&& value) { SetDynamicValue(std::move(value)); return *this;}


    /**
     * <p>The static values of the <code>IntegerDefaultValues</code>.</p>
     */
    inline const Aws::Vector<long long>& GetStaticValues() const{ return m_staticValues; }

    /**
     * <p>The static values of the <code>IntegerDefaultValues</code>.</p>
     */
    inline bool StaticValuesHasBeenSet() const { return m_staticValuesHasBeenSet; }

    /**
     * <p>The static values of the <code>IntegerDefaultValues</code>.</p>
     */
    inline void SetStaticValues(const Aws::Vector<long long>& value) { m_staticValuesHasBeenSet = true; m_staticValues = value; }

    /**
     * <p>The static values of the <code>IntegerDefaultValues</code>.</p>
     */
    inline void SetStaticValues(Aws::Vector<long long>&& value) { m_staticValuesHasBeenSet = true; m_staticValues = std::move(value); }

    /**
     * <p>The static values of the <code>IntegerDefaultValues</code>.</p>
     */
    inline IntegerDefaultValues& WithStaticValues(const Aws::Vector<long long>& value) { SetStaticValues(value); return *this;}

    /**
     * <p>The static values of the <code>IntegerDefaultValues</code>.</p>
     */
    inline IntegerDefaultValues& WithStaticValues(Aws::Vector<long long>&& value) { SetStaticValues(std::move(value)); return *this;}

    /**
     * <p>The static values of the <code>IntegerDefaultValues</code>.</p>
     */
    inline IntegerDefaultValues& AddStaticValues(long long value) { m_staticValuesHasBeenSet = true; m_staticValues.push_back(value); return *this; }

  private:

    DynamicDefaultValue m_dynamicValue;
    bool m_dynamicValueHasBeenSet = false;

    Aws::Vector<long long> m_staticValues;
    bool m_staticValuesHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
