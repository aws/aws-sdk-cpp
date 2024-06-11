﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/qconnect/model/FilterField.h>
#include <aws/qconnect/model/FilterOperator.h>
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
namespace QConnect
{
namespace Model
{

  /**
   * <p>A search filter.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/Filter">AWS API
   * Reference</a></p>
   */
  class Filter
  {
  public:
    AWS_QCONNECT_API Filter();
    AWS_QCONNECT_API Filter(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API Filter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The field on which to filter.</p>
     */
    inline const FilterField& GetField() const{ return m_field; }
    inline bool FieldHasBeenSet() const { return m_fieldHasBeenSet; }
    inline void SetField(const FilterField& value) { m_fieldHasBeenSet = true; m_field = value; }
    inline void SetField(FilterField&& value) { m_fieldHasBeenSet = true; m_field = std::move(value); }
    inline Filter& WithField(const FilterField& value) { SetField(value); return *this;}
    inline Filter& WithField(FilterField&& value) { SetField(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The operator to use for comparing the field’s value with the provided
     * value.</p>
     */
    inline const FilterOperator& GetOperator() const{ return m_operator; }
    inline bool OperatorHasBeenSet() const { return m_operatorHasBeenSet; }
    inline void SetOperator(const FilterOperator& value) { m_operatorHasBeenSet = true; m_operator = value; }
    inline void SetOperator(FilterOperator&& value) { m_operatorHasBeenSet = true; m_operator = std::move(value); }
    inline Filter& WithOperator(const FilterOperator& value) { SetOperator(value); return *this;}
    inline Filter& WithOperator(FilterOperator&& value) { SetOperator(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The desired field value on which to filter.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }
    inline Filter& WithValue(const Aws::String& value) { SetValue(value); return *this;}
    inline Filter& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}
    inline Filter& WithValue(const char* value) { SetValue(value); return *this;}
    ///@}
  private:

    FilterField m_field;
    bool m_fieldHasBeenSet = false;

    FilterOperator m_operator;
    bool m_operatorHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
