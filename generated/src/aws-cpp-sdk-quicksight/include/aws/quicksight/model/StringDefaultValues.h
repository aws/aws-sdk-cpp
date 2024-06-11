﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/DynamicDefaultValue.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>The default values of the
   * <code>StringParameterDeclaration</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/StringDefaultValues">AWS
   * API Reference</a></p>
   */
  class StringDefaultValues
  {
  public:
    AWS_QUICKSIGHT_API StringDefaultValues();
    AWS_QUICKSIGHT_API StringDefaultValues(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API StringDefaultValues& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The dynamic value of the <code>StringDefaultValues</code>. Different defaults
     * displayed according to users, groups, and values mapping.</p>
     */
    inline const DynamicDefaultValue& GetDynamicValue() const{ return m_dynamicValue; }
    inline bool DynamicValueHasBeenSet() const { return m_dynamicValueHasBeenSet; }
    inline void SetDynamicValue(const DynamicDefaultValue& value) { m_dynamicValueHasBeenSet = true; m_dynamicValue = value; }
    inline void SetDynamicValue(DynamicDefaultValue&& value) { m_dynamicValueHasBeenSet = true; m_dynamicValue = std::move(value); }
    inline StringDefaultValues& WithDynamicValue(const DynamicDefaultValue& value) { SetDynamicValue(value); return *this;}
    inline StringDefaultValues& WithDynamicValue(DynamicDefaultValue&& value) { SetDynamicValue(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The static values of the <code>DecimalDefaultValues</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetStaticValues() const{ return m_staticValues; }
    inline bool StaticValuesHasBeenSet() const { return m_staticValuesHasBeenSet; }
    inline void SetStaticValues(const Aws::Vector<Aws::String>& value) { m_staticValuesHasBeenSet = true; m_staticValues = value; }
    inline void SetStaticValues(Aws::Vector<Aws::String>&& value) { m_staticValuesHasBeenSet = true; m_staticValues = std::move(value); }
    inline StringDefaultValues& WithStaticValues(const Aws::Vector<Aws::String>& value) { SetStaticValues(value); return *this;}
    inline StringDefaultValues& WithStaticValues(Aws::Vector<Aws::String>&& value) { SetStaticValues(std::move(value)); return *this;}
    inline StringDefaultValues& AddStaticValues(const Aws::String& value) { m_staticValuesHasBeenSet = true; m_staticValues.push_back(value); return *this; }
    inline StringDefaultValues& AddStaticValues(Aws::String&& value) { m_staticValuesHasBeenSet = true; m_staticValues.push_back(std::move(value)); return *this; }
    inline StringDefaultValues& AddStaticValues(const char* value) { m_staticValuesHasBeenSet = true; m_staticValues.push_back(value); return *this; }
    ///@}
  private:

    DynamicDefaultValue m_dynamicValue;
    bool m_dynamicValueHasBeenSet = false;

    Aws::Vector<Aws::String> m_staticValues;
    bool m_staticValuesHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
