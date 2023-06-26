/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/SliderControlDisplayOptions.h>
#include <aws/quicksight/model/SheetControlSliderType.h>
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
   * <p>A control to display a horizontal toggle bar. This is used to change a value
   * by sliding the toggle.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/FilterSliderControl">AWS
   * API Reference</a></p>
   */
  class FilterSliderControl
  {
  public:
    AWS_QUICKSIGHT_API FilterSliderControl();
    AWS_QUICKSIGHT_API FilterSliderControl(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API FilterSliderControl& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the <code>FilterSliderControl</code>.</p>
     */
    inline const Aws::String& GetFilterControlId() const{ return m_filterControlId; }

    /**
     * <p>The ID of the <code>FilterSliderControl</code>.</p>
     */
    inline bool FilterControlIdHasBeenSet() const { return m_filterControlIdHasBeenSet; }

    /**
     * <p>The ID of the <code>FilterSliderControl</code>.</p>
     */
    inline void SetFilterControlId(const Aws::String& value) { m_filterControlIdHasBeenSet = true; m_filterControlId = value; }

    /**
     * <p>The ID of the <code>FilterSliderControl</code>.</p>
     */
    inline void SetFilterControlId(Aws::String&& value) { m_filterControlIdHasBeenSet = true; m_filterControlId = std::move(value); }

    /**
     * <p>The ID of the <code>FilterSliderControl</code>.</p>
     */
    inline void SetFilterControlId(const char* value) { m_filterControlIdHasBeenSet = true; m_filterControlId.assign(value); }

    /**
     * <p>The ID of the <code>FilterSliderControl</code>.</p>
     */
    inline FilterSliderControl& WithFilterControlId(const Aws::String& value) { SetFilterControlId(value); return *this;}

    /**
     * <p>The ID of the <code>FilterSliderControl</code>.</p>
     */
    inline FilterSliderControl& WithFilterControlId(Aws::String&& value) { SetFilterControlId(std::move(value)); return *this;}

    /**
     * <p>The ID of the <code>FilterSliderControl</code>.</p>
     */
    inline FilterSliderControl& WithFilterControlId(const char* value) { SetFilterControlId(value); return *this;}


    /**
     * <p>The title of the <code>FilterSliderControl</code>.</p>
     */
    inline const Aws::String& GetTitle() const{ return m_title; }

    /**
     * <p>The title of the <code>FilterSliderControl</code>.</p>
     */
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }

    /**
     * <p>The title of the <code>FilterSliderControl</code>.</p>
     */
    inline void SetTitle(const Aws::String& value) { m_titleHasBeenSet = true; m_title = value; }

    /**
     * <p>The title of the <code>FilterSliderControl</code>.</p>
     */
    inline void SetTitle(Aws::String&& value) { m_titleHasBeenSet = true; m_title = std::move(value); }

    /**
     * <p>The title of the <code>FilterSliderControl</code>.</p>
     */
    inline void SetTitle(const char* value) { m_titleHasBeenSet = true; m_title.assign(value); }

    /**
     * <p>The title of the <code>FilterSliderControl</code>.</p>
     */
    inline FilterSliderControl& WithTitle(const Aws::String& value) { SetTitle(value); return *this;}

    /**
     * <p>The title of the <code>FilterSliderControl</code>.</p>
     */
    inline FilterSliderControl& WithTitle(Aws::String&& value) { SetTitle(std::move(value)); return *this;}

    /**
     * <p>The title of the <code>FilterSliderControl</code>.</p>
     */
    inline FilterSliderControl& WithTitle(const char* value) { SetTitle(value); return *this;}


    /**
     * <p>The source filter ID of the <code>FilterSliderControl</code>.</p>
     */
    inline const Aws::String& GetSourceFilterId() const{ return m_sourceFilterId; }

    /**
     * <p>The source filter ID of the <code>FilterSliderControl</code>.</p>
     */
    inline bool SourceFilterIdHasBeenSet() const { return m_sourceFilterIdHasBeenSet; }

    /**
     * <p>The source filter ID of the <code>FilterSliderControl</code>.</p>
     */
    inline void SetSourceFilterId(const Aws::String& value) { m_sourceFilterIdHasBeenSet = true; m_sourceFilterId = value; }

    /**
     * <p>The source filter ID of the <code>FilterSliderControl</code>.</p>
     */
    inline void SetSourceFilterId(Aws::String&& value) { m_sourceFilterIdHasBeenSet = true; m_sourceFilterId = std::move(value); }

    /**
     * <p>The source filter ID of the <code>FilterSliderControl</code>.</p>
     */
    inline void SetSourceFilterId(const char* value) { m_sourceFilterIdHasBeenSet = true; m_sourceFilterId.assign(value); }

    /**
     * <p>The source filter ID of the <code>FilterSliderControl</code>.</p>
     */
    inline FilterSliderControl& WithSourceFilterId(const Aws::String& value) { SetSourceFilterId(value); return *this;}

    /**
     * <p>The source filter ID of the <code>FilterSliderControl</code>.</p>
     */
    inline FilterSliderControl& WithSourceFilterId(Aws::String&& value) { SetSourceFilterId(std::move(value)); return *this;}

    /**
     * <p>The source filter ID of the <code>FilterSliderControl</code>.</p>
     */
    inline FilterSliderControl& WithSourceFilterId(const char* value) { SetSourceFilterId(value); return *this;}


    /**
     * <p>The display options of a control.</p>
     */
    inline const SliderControlDisplayOptions& GetDisplayOptions() const{ return m_displayOptions; }

    /**
     * <p>The display options of a control.</p>
     */
    inline bool DisplayOptionsHasBeenSet() const { return m_displayOptionsHasBeenSet; }

    /**
     * <p>The display options of a control.</p>
     */
    inline void SetDisplayOptions(const SliderControlDisplayOptions& value) { m_displayOptionsHasBeenSet = true; m_displayOptions = value; }

    /**
     * <p>The display options of a control.</p>
     */
    inline void SetDisplayOptions(SliderControlDisplayOptions&& value) { m_displayOptionsHasBeenSet = true; m_displayOptions = std::move(value); }

    /**
     * <p>The display options of a control.</p>
     */
    inline FilterSliderControl& WithDisplayOptions(const SliderControlDisplayOptions& value) { SetDisplayOptions(value); return *this;}

    /**
     * <p>The display options of a control.</p>
     */
    inline FilterSliderControl& WithDisplayOptions(SliderControlDisplayOptions&& value) { SetDisplayOptions(std::move(value)); return *this;}


    /**
     * <p>The type of <code>FilterSliderControl</code>. Choose one of the following
     * options:</p> <ul> <li> <p> <code>SINGLE_POINT</code>: Filter against(equals) a
     * single data point.</p> </li> <li> <p> <code>RANGE</code>: Filter data that is in
     * a specified range.</p> </li> </ul>
     */
    inline const SheetControlSliderType& GetType() const{ return m_type; }

    /**
     * <p>The type of <code>FilterSliderControl</code>. Choose one of the following
     * options:</p> <ul> <li> <p> <code>SINGLE_POINT</code>: Filter against(equals) a
     * single data point.</p> </li> <li> <p> <code>RANGE</code>: Filter data that is in
     * a specified range.</p> </li> </ul>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of <code>FilterSliderControl</code>. Choose one of the following
     * options:</p> <ul> <li> <p> <code>SINGLE_POINT</code>: Filter against(equals) a
     * single data point.</p> </li> <li> <p> <code>RANGE</code>: Filter data that is in
     * a specified range.</p> </li> </ul>
     */
    inline void SetType(const SheetControlSliderType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of <code>FilterSliderControl</code>. Choose one of the following
     * options:</p> <ul> <li> <p> <code>SINGLE_POINT</code>: Filter against(equals) a
     * single data point.</p> </li> <li> <p> <code>RANGE</code>: Filter data that is in
     * a specified range.</p> </li> </ul>
     */
    inline void SetType(SheetControlSliderType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of <code>FilterSliderControl</code>. Choose one of the following
     * options:</p> <ul> <li> <p> <code>SINGLE_POINT</code>: Filter against(equals) a
     * single data point.</p> </li> <li> <p> <code>RANGE</code>: Filter data that is in
     * a specified range.</p> </li> </ul>
     */
    inline FilterSliderControl& WithType(const SheetControlSliderType& value) { SetType(value); return *this;}

    /**
     * <p>The type of <code>FilterSliderControl</code>. Choose one of the following
     * options:</p> <ul> <li> <p> <code>SINGLE_POINT</code>: Filter against(equals) a
     * single data point.</p> </li> <li> <p> <code>RANGE</code>: Filter data that is in
     * a specified range.</p> </li> </ul>
     */
    inline FilterSliderControl& WithType(SheetControlSliderType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The smaller value that is displayed at the left of the slider.</p>
     */
    inline double GetMaximumValue() const{ return m_maximumValue; }

    /**
     * <p>The smaller value that is displayed at the left of the slider.</p>
     */
    inline bool MaximumValueHasBeenSet() const { return m_maximumValueHasBeenSet; }

    /**
     * <p>The smaller value that is displayed at the left of the slider.</p>
     */
    inline void SetMaximumValue(double value) { m_maximumValueHasBeenSet = true; m_maximumValue = value; }

    /**
     * <p>The smaller value that is displayed at the left of the slider.</p>
     */
    inline FilterSliderControl& WithMaximumValue(double value) { SetMaximumValue(value); return *this;}


    /**
     * <p>The larger value that is displayed at the right of the slider.</p>
     */
    inline double GetMinimumValue() const{ return m_minimumValue; }

    /**
     * <p>The larger value that is displayed at the right of the slider.</p>
     */
    inline bool MinimumValueHasBeenSet() const { return m_minimumValueHasBeenSet; }

    /**
     * <p>The larger value that is displayed at the right of the slider.</p>
     */
    inline void SetMinimumValue(double value) { m_minimumValueHasBeenSet = true; m_minimumValue = value; }

    /**
     * <p>The larger value that is displayed at the right of the slider.</p>
     */
    inline FilterSliderControl& WithMinimumValue(double value) { SetMinimumValue(value); return *this;}


    /**
     * <p>The number of increments that the slider bar is divided into.</p>
     */
    inline double GetStepSize() const{ return m_stepSize; }

    /**
     * <p>The number of increments that the slider bar is divided into.</p>
     */
    inline bool StepSizeHasBeenSet() const { return m_stepSizeHasBeenSet; }

    /**
     * <p>The number of increments that the slider bar is divided into.</p>
     */
    inline void SetStepSize(double value) { m_stepSizeHasBeenSet = true; m_stepSize = value; }

    /**
     * <p>The number of increments that the slider bar is divided into.</p>
     */
    inline FilterSliderControl& WithStepSize(double value) { SetStepSize(value); return *this;}

  private:

    Aws::String m_filterControlId;
    bool m_filterControlIdHasBeenSet = false;

    Aws::String m_title;
    bool m_titleHasBeenSet = false;

    Aws::String m_sourceFilterId;
    bool m_sourceFilterIdHasBeenSet = false;

    SliderControlDisplayOptions m_displayOptions;
    bool m_displayOptionsHasBeenSet = false;

    SheetControlSliderType m_type;
    bool m_typeHasBeenSet = false;

    double m_maximumValue;
    bool m_maximumValueHasBeenSet = false;

    double m_minimumValue;
    bool m_minimumValueHasBeenSet = false;

    double m_stepSize;
    bool m_stepSizeHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
