﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ssm/model/InstancePropertyFilterOperator.h>
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
namespace SSM
{
namespace Model
{

  /**
   * <p>The filters to describe or get information about your managed
   * nodes.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/InstancePropertyStringFilter">AWS
   * API Reference</a></p>
   */
  class InstancePropertyStringFilter
  {
  public:
    AWS_SSM_API InstancePropertyStringFilter();
    AWS_SSM_API InstancePropertyStringFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API InstancePropertyStringFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The filter key name to describe your managed nodes.</p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }
    inline InstancePropertyStringFilter& WithKey(const Aws::String& value) { SetKey(value); return *this;}
    inline InstancePropertyStringFilter& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}
    inline InstancePropertyStringFilter& WithKey(const char* value) { SetKey(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The filter key name to describe your managed nodes.</p>
     */
    inline const Aws::Vector<Aws::String>& GetValues() const{ return m_values; }
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }
    inline void SetValues(const Aws::Vector<Aws::String>& value) { m_valuesHasBeenSet = true; m_values = value; }
    inline void SetValues(Aws::Vector<Aws::String>&& value) { m_valuesHasBeenSet = true; m_values = std::move(value); }
    inline InstancePropertyStringFilter& WithValues(const Aws::Vector<Aws::String>& value) { SetValues(value); return *this;}
    inline InstancePropertyStringFilter& WithValues(Aws::Vector<Aws::String>&& value) { SetValues(std::move(value)); return *this;}
    inline InstancePropertyStringFilter& AddValues(const Aws::String& value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }
    inline InstancePropertyStringFilter& AddValues(Aws::String&& value) { m_valuesHasBeenSet = true; m_values.push_back(std::move(value)); return *this; }
    inline InstancePropertyStringFilter& AddValues(const char* value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The operator used by the filter call.</p>
     */
    inline const InstancePropertyFilterOperator& GetOperator() const{ return m_operator; }
    inline bool OperatorHasBeenSet() const { return m_operatorHasBeenSet; }
    inline void SetOperator(const InstancePropertyFilterOperator& value) { m_operatorHasBeenSet = true; m_operator = value; }
    inline void SetOperator(InstancePropertyFilterOperator&& value) { m_operatorHasBeenSet = true; m_operator = std::move(value); }
    inline InstancePropertyStringFilter& WithOperator(const InstancePropertyFilterOperator& value) { SetOperator(value); return *this;}
    inline InstancePropertyStringFilter& WithOperator(InstancePropertyFilterOperator&& value) { SetOperator(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_key;
    bool m_keyHasBeenSet = false;

    Aws::Vector<Aws::String> m_values;
    bool m_valuesHasBeenSet = false;

    InstancePropertyFilterOperator m_operator;
    bool m_operatorHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
