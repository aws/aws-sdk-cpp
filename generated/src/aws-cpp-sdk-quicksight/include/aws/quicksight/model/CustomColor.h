/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/SpecialValue.h>
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
   * <p>Determines the color that's applied to a particular data value in a
   * column.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/CustomColor">AWS
   * API Reference</a></p>
   */
  class CustomColor
  {
  public:
    AWS_QUICKSIGHT_API CustomColor() = default;
    AWS_QUICKSIGHT_API CustomColor(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API CustomColor& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The data value that the color is applied to.</p>
     */
    inline const Aws::String& GetFieldValue() const { return m_fieldValue; }
    inline bool FieldValueHasBeenSet() const { return m_fieldValueHasBeenSet; }
    template<typename FieldValueT = Aws::String>
    void SetFieldValue(FieldValueT&& value) { m_fieldValueHasBeenSet = true; m_fieldValue = std::forward<FieldValueT>(value); }
    template<typename FieldValueT = Aws::String>
    CustomColor& WithFieldValue(FieldValueT&& value) { SetFieldValue(std::forward<FieldValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The color that is applied to the data value.</p>
     */
    inline const Aws::String& GetColor() const { return m_color; }
    inline bool ColorHasBeenSet() const { return m_colorHasBeenSet; }
    template<typename ColorT = Aws::String>
    void SetColor(ColorT&& value) { m_colorHasBeenSet = true; m_color = std::forward<ColorT>(value); }
    template<typename ColorT = Aws::String>
    CustomColor& WithColor(ColorT&& value) { SetColor(std::forward<ColorT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value of a special data value.</p>
     */
    inline SpecialValue GetSpecialValue() const { return m_specialValue; }
    inline bool SpecialValueHasBeenSet() const { return m_specialValueHasBeenSet; }
    inline void SetSpecialValue(SpecialValue value) { m_specialValueHasBeenSet = true; m_specialValue = value; }
    inline CustomColor& WithSpecialValue(SpecialValue value) { SetSpecialValue(value); return *this;}
    ///@}
  private:

    Aws::String m_fieldValue;
    bool m_fieldValueHasBeenSet = false;

    Aws::String m_color;
    bool m_colorHasBeenSet = false;

    SpecialValue m_specialValue{SpecialValue::NOT_SET};
    bool m_specialValueHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
