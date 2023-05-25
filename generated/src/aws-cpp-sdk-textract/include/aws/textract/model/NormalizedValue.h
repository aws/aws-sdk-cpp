/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/textract/Textract_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/textract/model/ValueType.h>
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
namespace Textract
{
namespace Model
{

  /**
   * <p>Contains information relating to dates in a document, including the type of
   * value, and the value.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/textract-2018-06-27/NormalizedValue">AWS
   * API Reference</a></p>
   */
  class NormalizedValue
  {
  public:
    AWS_TEXTRACT_API NormalizedValue();
    AWS_TEXTRACT_API NormalizedValue(Aws::Utils::Json::JsonView jsonValue);
    AWS_TEXTRACT_API NormalizedValue& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TEXTRACT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The value of the date, written as Year-Month-DayTHour:Minute:Second.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>The value of the date, written as Year-Month-DayTHour:Minute:Second.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The value of the date, written as Year-Month-DayTHour:Minute:Second.</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The value of the date, written as Year-Month-DayTHour:Minute:Second.</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The value of the date, written as Year-Month-DayTHour:Minute:Second.</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>The value of the date, written as Year-Month-DayTHour:Minute:Second.</p>
     */
    inline NormalizedValue& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>The value of the date, written as Year-Month-DayTHour:Minute:Second.</p>
     */
    inline NormalizedValue& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>The value of the date, written as Year-Month-DayTHour:Minute:Second.</p>
     */
    inline NormalizedValue& WithValue(const char* value) { SetValue(value); return *this;}


    /**
     * <p>The normalized type of the value detected. In this case, DATE.</p>
     */
    inline const ValueType& GetValueType() const{ return m_valueType; }

    /**
     * <p>The normalized type of the value detected. In this case, DATE.</p>
     */
    inline bool ValueTypeHasBeenSet() const { return m_valueTypeHasBeenSet; }

    /**
     * <p>The normalized type of the value detected. In this case, DATE.</p>
     */
    inline void SetValueType(const ValueType& value) { m_valueTypeHasBeenSet = true; m_valueType = value; }

    /**
     * <p>The normalized type of the value detected. In this case, DATE.</p>
     */
    inline void SetValueType(ValueType&& value) { m_valueTypeHasBeenSet = true; m_valueType = std::move(value); }

    /**
     * <p>The normalized type of the value detected. In this case, DATE.</p>
     */
    inline NormalizedValue& WithValueType(const ValueType& value) { SetValueType(value); return *this;}

    /**
     * <p>The normalized type of the value detected. In this case, DATE.</p>
     */
    inline NormalizedValue& WithValueType(ValueType&& value) { SetValueType(std::move(value)); return *this;}

  private:

    Aws::String m_value;
    bool m_valueHasBeenSet = false;

    ValueType m_valueType;
    bool m_valueTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace Textract
} // namespace Aws
