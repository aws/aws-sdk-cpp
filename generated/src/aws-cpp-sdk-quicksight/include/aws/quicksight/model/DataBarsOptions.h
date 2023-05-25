/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
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
   * <p>The options for data bars.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DataBarsOptions">AWS
   * API Reference</a></p>
   */
  class DataBarsOptions
  {
  public:
    AWS_QUICKSIGHT_API DataBarsOptions();
    AWS_QUICKSIGHT_API DataBarsOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API DataBarsOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The field ID for the data bars options.</p>
     */
    inline const Aws::String& GetFieldId() const{ return m_fieldId; }

    /**
     * <p>The field ID for the data bars options.</p>
     */
    inline bool FieldIdHasBeenSet() const { return m_fieldIdHasBeenSet; }

    /**
     * <p>The field ID for the data bars options.</p>
     */
    inline void SetFieldId(const Aws::String& value) { m_fieldIdHasBeenSet = true; m_fieldId = value; }

    /**
     * <p>The field ID for the data bars options.</p>
     */
    inline void SetFieldId(Aws::String&& value) { m_fieldIdHasBeenSet = true; m_fieldId = std::move(value); }

    /**
     * <p>The field ID for the data bars options.</p>
     */
    inline void SetFieldId(const char* value) { m_fieldIdHasBeenSet = true; m_fieldId.assign(value); }

    /**
     * <p>The field ID for the data bars options.</p>
     */
    inline DataBarsOptions& WithFieldId(const Aws::String& value) { SetFieldId(value); return *this;}

    /**
     * <p>The field ID for the data bars options.</p>
     */
    inline DataBarsOptions& WithFieldId(Aws::String&& value) { SetFieldId(std::move(value)); return *this;}

    /**
     * <p>The field ID for the data bars options.</p>
     */
    inline DataBarsOptions& WithFieldId(const char* value) { SetFieldId(value); return *this;}


    /**
     * <p>The color of the positive data bar.</p>
     */
    inline const Aws::String& GetPositiveColor() const{ return m_positiveColor; }

    /**
     * <p>The color of the positive data bar.</p>
     */
    inline bool PositiveColorHasBeenSet() const { return m_positiveColorHasBeenSet; }

    /**
     * <p>The color of the positive data bar.</p>
     */
    inline void SetPositiveColor(const Aws::String& value) { m_positiveColorHasBeenSet = true; m_positiveColor = value; }

    /**
     * <p>The color of the positive data bar.</p>
     */
    inline void SetPositiveColor(Aws::String&& value) { m_positiveColorHasBeenSet = true; m_positiveColor = std::move(value); }

    /**
     * <p>The color of the positive data bar.</p>
     */
    inline void SetPositiveColor(const char* value) { m_positiveColorHasBeenSet = true; m_positiveColor.assign(value); }

    /**
     * <p>The color of the positive data bar.</p>
     */
    inline DataBarsOptions& WithPositiveColor(const Aws::String& value) { SetPositiveColor(value); return *this;}

    /**
     * <p>The color of the positive data bar.</p>
     */
    inline DataBarsOptions& WithPositiveColor(Aws::String&& value) { SetPositiveColor(std::move(value)); return *this;}

    /**
     * <p>The color of the positive data bar.</p>
     */
    inline DataBarsOptions& WithPositiveColor(const char* value) { SetPositiveColor(value); return *this;}


    /**
     * <p>The color of the negative data bar.</p>
     */
    inline const Aws::String& GetNegativeColor() const{ return m_negativeColor; }

    /**
     * <p>The color of the negative data bar.</p>
     */
    inline bool NegativeColorHasBeenSet() const { return m_negativeColorHasBeenSet; }

    /**
     * <p>The color of the negative data bar.</p>
     */
    inline void SetNegativeColor(const Aws::String& value) { m_negativeColorHasBeenSet = true; m_negativeColor = value; }

    /**
     * <p>The color of the negative data bar.</p>
     */
    inline void SetNegativeColor(Aws::String&& value) { m_negativeColorHasBeenSet = true; m_negativeColor = std::move(value); }

    /**
     * <p>The color of the negative data bar.</p>
     */
    inline void SetNegativeColor(const char* value) { m_negativeColorHasBeenSet = true; m_negativeColor.assign(value); }

    /**
     * <p>The color of the negative data bar.</p>
     */
    inline DataBarsOptions& WithNegativeColor(const Aws::String& value) { SetNegativeColor(value); return *this;}

    /**
     * <p>The color of the negative data bar.</p>
     */
    inline DataBarsOptions& WithNegativeColor(Aws::String&& value) { SetNegativeColor(std::move(value)); return *this;}

    /**
     * <p>The color of the negative data bar.</p>
     */
    inline DataBarsOptions& WithNegativeColor(const char* value) { SetNegativeColor(value); return *this;}

  private:

    Aws::String m_fieldId;
    bool m_fieldIdHasBeenSet = false;

    Aws::String m_positiveColor;
    bool m_positiveColorHasBeenSet = false;

    Aws::String m_negativeColor;
    bool m_negativeColorHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
