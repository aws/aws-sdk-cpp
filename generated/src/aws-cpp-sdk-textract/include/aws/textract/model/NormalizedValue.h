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
    AWS_TEXTRACT_API NormalizedValue() = default;
    AWS_TEXTRACT_API NormalizedValue(Aws::Utils::Json::JsonView jsonValue);
    AWS_TEXTRACT_API NormalizedValue& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TEXTRACT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The value of the date, written as Year-Month-DayTHour:Minute:Second.</p>
     */
    inline const Aws::String& GetValue() const { return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    template<typename ValueT = Aws::String>
    void SetValue(ValueT&& value) { m_valueHasBeenSet = true; m_value = std::forward<ValueT>(value); }
    template<typename ValueT = Aws::String>
    NormalizedValue& WithValue(ValueT&& value) { SetValue(std::forward<ValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The normalized type of the value detected. In this case, DATE.</p>
     */
    inline ValueType GetValueType() const { return m_valueType; }
    inline bool ValueTypeHasBeenSet() const { return m_valueTypeHasBeenSet; }
    inline void SetValueType(ValueType value) { m_valueTypeHasBeenSet = true; m_valueType = value; }
    inline NormalizedValue& WithValueType(ValueType value) { SetValueType(value); return *this;}
    ///@}
  private:

    Aws::String m_value;
    bool m_valueHasBeenSet = false;

    ValueType m_valueType{ValueType::NOT_SET};
    bool m_valueTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace Textract
} // namespace Aws
