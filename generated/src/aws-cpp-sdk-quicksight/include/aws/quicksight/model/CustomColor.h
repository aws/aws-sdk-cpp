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
    AWS_QUICKSIGHT_API CustomColor();
    AWS_QUICKSIGHT_API CustomColor(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API CustomColor& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The data value that the color is applied to.</p>
     */
    inline const Aws::String& GetFieldValue() const{ return m_fieldValue; }

    /**
     * <p>The data value that the color is applied to.</p>
     */
    inline bool FieldValueHasBeenSet() const { return m_fieldValueHasBeenSet; }

    /**
     * <p>The data value that the color is applied to.</p>
     */
    inline void SetFieldValue(const Aws::String& value) { m_fieldValueHasBeenSet = true; m_fieldValue = value; }

    /**
     * <p>The data value that the color is applied to.</p>
     */
    inline void SetFieldValue(Aws::String&& value) { m_fieldValueHasBeenSet = true; m_fieldValue = std::move(value); }

    /**
     * <p>The data value that the color is applied to.</p>
     */
    inline void SetFieldValue(const char* value) { m_fieldValueHasBeenSet = true; m_fieldValue.assign(value); }

    /**
     * <p>The data value that the color is applied to.</p>
     */
    inline CustomColor& WithFieldValue(const Aws::String& value) { SetFieldValue(value); return *this;}

    /**
     * <p>The data value that the color is applied to.</p>
     */
    inline CustomColor& WithFieldValue(Aws::String&& value) { SetFieldValue(std::move(value)); return *this;}

    /**
     * <p>The data value that the color is applied to.</p>
     */
    inline CustomColor& WithFieldValue(const char* value) { SetFieldValue(value); return *this;}


    /**
     * <p>The color that is applied to the data value.</p>
     */
    inline const Aws::String& GetColor() const{ return m_color; }

    /**
     * <p>The color that is applied to the data value.</p>
     */
    inline bool ColorHasBeenSet() const { return m_colorHasBeenSet; }

    /**
     * <p>The color that is applied to the data value.</p>
     */
    inline void SetColor(const Aws::String& value) { m_colorHasBeenSet = true; m_color = value; }

    /**
     * <p>The color that is applied to the data value.</p>
     */
    inline void SetColor(Aws::String&& value) { m_colorHasBeenSet = true; m_color = std::move(value); }

    /**
     * <p>The color that is applied to the data value.</p>
     */
    inline void SetColor(const char* value) { m_colorHasBeenSet = true; m_color.assign(value); }

    /**
     * <p>The color that is applied to the data value.</p>
     */
    inline CustomColor& WithColor(const Aws::String& value) { SetColor(value); return *this;}

    /**
     * <p>The color that is applied to the data value.</p>
     */
    inline CustomColor& WithColor(Aws::String&& value) { SetColor(std::move(value)); return *this;}

    /**
     * <p>The color that is applied to the data value.</p>
     */
    inline CustomColor& WithColor(const char* value) { SetColor(value); return *this;}


    /**
     * <p>The value of a special data value.</p>
     */
    inline const SpecialValue& GetSpecialValue() const{ return m_specialValue; }

    /**
     * <p>The value of a special data value.</p>
     */
    inline bool SpecialValueHasBeenSet() const { return m_specialValueHasBeenSet; }

    /**
     * <p>The value of a special data value.</p>
     */
    inline void SetSpecialValue(const SpecialValue& value) { m_specialValueHasBeenSet = true; m_specialValue = value; }

    /**
     * <p>The value of a special data value.</p>
     */
    inline void SetSpecialValue(SpecialValue&& value) { m_specialValueHasBeenSet = true; m_specialValue = std::move(value); }

    /**
     * <p>The value of a special data value.</p>
     */
    inline CustomColor& WithSpecialValue(const SpecialValue& value) { SetSpecialValue(value); return *this;}

    /**
     * <p>The value of a special data value.</p>
     */
    inline CustomColor& WithSpecialValue(SpecialValue&& value) { SetSpecialValue(std::move(value)); return *this;}

  private:

    Aws::String m_fieldValue;
    bool m_fieldValueHasBeenSet = false;

    Aws::String m_color;
    bool m_colorHasBeenSet = false;

    SpecialValue m_specialValue;
    bool m_specialValueHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
