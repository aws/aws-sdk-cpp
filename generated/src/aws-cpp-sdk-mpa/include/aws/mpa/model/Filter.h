/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mpa/MPA_EXPORTS.h>
#include <aws/mpa/model/FilterField.h>
#include <aws/mpa/model/Operator.h>
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
namespace MPA
{
namespace Model
{

  /**
   * <p>Contains the filter to apply to requests. You can specify up to 10 filters
   * for a request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mpa-2022-07-26/Filter">AWS API
   * Reference</a></p>
   */
  class Filter
  {
  public:
    AWS_MPA_API Filter() = default;
    AWS_MPA_API Filter(Aws::Utils::Json::JsonView jsonValue);
    AWS_MPA_API Filter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MPA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Name of the filter to use.</p>  <p> <b>Supported filters</b> </p>
     * <p>The supported filters for <a>ListSessions</a> are: <code>ActionName</code>,
     * <code>SessionStatus</code>, and <code>InitationTime</code>.</p> 
     */
    inline FilterField GetFieldName() const { return m_fieldName; }
    inline bool FieldNameHasBeenSet() const { return m_fieldNameHasBeenSet; }
    inline void SetFieldName(FilterField value) { m_fieldNameHasBeenSet = true; m_fieldName = value; }
    inline Filter& WithFieldName(FilterField value) { SetFieldName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Operator to use for filtering.</p> <ul> <li> <p> <code>EQ</code>: Equal to
     * the specified value</p> </li> <li> <p> <code>NE</code>: Not equal to the
     * specified value</p> </li> <li> <p> <code>GT</code>: Greater than the specified
     * value</p> </li> <li> <p> <code>LT</code>: Less than the specified value</p>
     * </li> <li> <p> <code>GTE</code>: Greater than or equal to the specified
     * value</p> </li> <li> <p> <code>LTE</code>: Less than or equal to the specified
     * value</p> </li> <li> <p> <code>CONTAINS</code>: Contains the specified value</p>
     * </li> <li> <p> <code>NOT_CONTAINS</code>: Does not contain the specified
     * value</p> </li> <li> <p> <code>BETWEEN</code>: Between two values, inclusive of
     * the specified values.</p> </li> </ul>  <p> <b>Supported operators for each
     * filter</b>:</p> <ul> <li> <p> <code>ActionName</code>: <code>EQ</code> |
     * <code>NE</code> | <code>CONTAINS</code> | <code>NOT_CONTAINS</code> </p> </li>
     * <li> <p> <code>SessionStatus</code>: <code>EQ</code> | <code>NE</code> </p>
     * </li> <li> <p> <code>InitiationTime</code>: <code>GT</code> | <code>LT</code> |
     * <code>GTE</code> | <code>LTE</code> | <code>BETWEEN</code> </p> </li> </ul>
     * 
     */
    inline Operator GetOperator() const { return m_operator; }
    inline bool OperatorHasBeenSet() const { return m_operatorHasBeenSet; }
    inline void SetOperator(Operator value) { m_operatorHasBeenSet = true; m_operator = value; }
    inline Filter& WithOperator(Operator value) { SetOperator(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Value to use for filtering. For the <code>BETWEEN</code> operator, specify
     * values in the format <code>a AND b</code> (<code>AND</code> is
     * case-insensitive).</p>
     */
    inline const Aws::String& GetValue() const { return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    template<typename ValueT = Aws::String>
    void SetValue(ValueT&& value) { m_valueHasBeenSet = true; m_value = std::forward<ValueT>(value); }
    template<typename ValueT = Aws::String>
    Filter& WithValue(ValueT&& value) { SetValue(std::forward<ValueT>(value)); return *this;}
    ///@}
  private:

    FilterField m_fieldName{FilterField::NOT_SET};
    bool m_fieldNameHasBeenSet = false;

    Operator m_operator{Operator::NOT_SET};
    bool m_operatorHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace MPA
} // namespace Aws
