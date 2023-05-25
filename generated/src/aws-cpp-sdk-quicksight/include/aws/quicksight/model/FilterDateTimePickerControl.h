/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/DateTimePickerControlDisplayOptions.h>
#include <aws/quicksight/model/SheetControlDateTimePickerType.h>
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
   * <p>A control from a date filter that is used to specify date and
   * time.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/FilterDateTimePickerControl">AWS
   * API Reference</a></p>
   */
  class FilterDateTimePickerControl
  {
  public:
    AWS_QUICKSIGHT_API FilterDateTimePickerControl();
    AWS_QUICKSIGHT_API FilterDateTimePickerControl(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API FilterDateTimePickerControl& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the <code>FilterDateTimePickerControl</code>.</p>
     */
    inline const Aws::String& GetFilterControlId() const{ return m_filterControlId; }

    /**
     * <p>The ID of the <code>FilterDateTimePickerControl</code>.</p>
     */
    inline bool FilterControlIdHasBeenSet() const { return m_filterControlIdHasBeenSet; }

    /**
     * <p>The ID of the <code>FilterDateTimePickerControl</code>.</p>
     */
    inline void SetFilterControlId(const Aws::String& value) { m_filterControlIdHasBeenSet = true; m_filterControlId = value; }

    /**
     * <p>The ID of the <code>FilterDateTimePickerControl</code>.</p>
     */
    inline void SetFilterControlId(Aws::String&& value) { m_filterControlIdHasBeenSet = true; m_filterControlId = std::move(value); }

    /**
     * <p>The ID of the <code>FilterDateTimePickerControl</code>.</p>
     */
    inline void SetFilterControlId(const char* value) { m_filterControlIdHasBeenSet = true; m_filterControlId.assign(value); }

    /**
     * <p>The ID of the <code>FilterDateTimePickerControl</code>.</p>
     */
    inline FilterDateTimePickerControl& WithFilterControlId(const Aws::String& value) { SetFilterControlId(value); return *this;}

    /**
     * <p>The ID of the <code>FilterDateTimePickerControl</code>.</p>
     */
    inline FilterDateTimePickerControl& WithFilterControlId(Aws::String&& value) { SetFilterControlId(std::move(value)); return *this;}

    /**
     * <p>The ID of the <code>FilterDateTimePickerControl</code>.</p>
     */
    inline FilterDateTimePickerControl& WithFilterControlId(const char* value) { SetFilterControlId(value); return *this;}


    /**
     * <p>The title of the <code>FilterDateTimePickerControl</code>.</p>
     */
    inline const Aws::String& GetTitle() const{ return m_title; }

    /**
     * <p>The title of the <code>FilterDateTimePickerControl</code>.</p>
     */
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }

    /**
     * <p>The title of the <code>FilterDateTimePickerControl</code>.</p>
     */
    inline void SetTitle(const Aws::String& value) { m_titleHasBeenSet = true; m_title = value; }

    /**
     * <p>The title of the <code>FilterDateTimePickerControl</code>.</p>
     */
    inline void SetTitle(Aws::String&& value) { m_titleHasBeenSet = true; m_title = std::move(value); }

    /**
     * <p>The title of the <code>FilterDateTimePickerControl</code>.</p>
     */
    inline void SetTitle(const char* value) { m_titleHasBeenSet = true; m_title.assign(value); }

    /**
     * <p>The title of the <code>FilterDateTimePickerControl</code>.</p>
     */
    inline FilterDateTimePickerControl& WithTitle(const Aws::String& value) { SetTitle(value); return *this;}

    /**
     * <p>The title of the <code>FilterDateTimePickerControl</code>.</p>
     */
    inline FilterDateTimePickerControl& WithTitle(Aws::String&& value) { SetTitle(std::move(value)); return *this;}

    /**
     * <p>The title of the <code>FilterDateTimePickerControl</code>.</p>
     */
    inline FilterDateTimePickerControl& WithTitle(const char* value) { SetTitle(value); return *this;}


    /**
     * <p>The source filter ID of the <code>FilterDateTimePickerControl</code>.</p>
     */
    inline const Aws::String& GetSourceFilterId() const{ return m_sourceFilterId; }

    /**
     * <p>The source filter ID of the <code>FilterDateTimePickerControl</code>.</p>
     */
    inline bool SourceFilterIdHasBeenSet() const { return m_sourceFilterIdHasBeenSet; }

    /**
     * <p>The source filter ID of the <code>FilterDateTimePickerControl</code>.</p>
     */
    inline void SetSourceFilterId(const Aws::String& value) { m_sourceFilterIdHasBeenSet = true; m_sourceFilterId = value; }

    /**
     * <p>The source filter ID of the <code>FilterDateTimePickerControl</code>.</p>
     */
    inline void SetSourceFilterId(Aws::String&& value) { m_sourceFilterIdHasBeenSet = true; m_sourceFilterId = std::move(value); }

    /**
     * <p>The source filter ID of the <code>FilterDateTimePickerControl</code>.</p>
     */
    inline void SetSourceFilterId(const char* value) { m_sourceFilterIdHasBeenSet = true; m_sourceFilterId.assign(value); }

    /**
     * <p>The source filter ID of the <code>FilterDateTimePickerControl</code>.</p>
     */
    inline FilterDateTimePickerControl& WithSourceFilterId(const Aws::String& value) { SetSourceFilterId(value); return *this;}

    /**
     * <p>The source filter ID of the <code>FilterDateTimePickerControl</code>.</p>
     */
    inline FilterDateTimePickerControl& WithSourceFilterId(Aws::String&& value) { SetSourceFilterId(std::move(value)); return *this;}

    /**
     * <p>The source filter ID of the <code>FilterDateTimePickerControl</code>.</p>
     */
    inline FilterDateTimePickerControl& WithSourceFilterId(const char* value) { SetSourceFilterId(value); return *this;}


    /**
     * <p>The display options of a control.</p>
     */
    inline const DateTimePickerControlDisplayOptions& GetDisplayOptions() const{ return m_displayOptions; }

    /**
     * <p>The display options of a control.</p>
     */
    inline bool DisplayOptionsHasBeenSet() const { return m_displayOptionsHasBeenSet; }

    /**
     * <p>The display options of a control.</p>
     */
    inline void SetDisplayOptions(const DateTimePickerControlDisplayOptions& value) { m_displayOptionsHasBeenSet = true; m_displayOptions = value; }

    /**
     * <p>The display options of a control.</p>
     */
    inline void SetDisplayOptions(DateTimePickerControlDisplayOptions&& value) { m_displayOptionsHasBeenSet = true; m_displayOptions = std::move(value); }

    /**
     * <p>The display options of a control.</p>
     */
    inline FilterDateTimePickerControl& WithDisplayOptions(const DateTimePickerControlDisplayOptions& value) { SetDisplayOptions(value); return *this;}

    /**
     * <p>The display options of a control.</p>
     */
    inline FilterDateTimePickerControl& WithDisplayOptions(DateTimePickerControlDisplayOptions&& value) { SetDisplayOptions(std::move(value)); return *this;}


    /**
     * <p>The date time picker type of a <code>FilterDateTimePickerControl</code>.
     * Choose one of the following options:</p> <ul> <li> <p>
     * <code>SINGLE_VALUED</code>: The filter condition is a fixed date.</p> </li> <li>
     * <p> <code>DATE_RANGE</code>: The filter condition is a date time range.</p>
     * </li> </ul>
     */
    inline const SheetControlDateTimePickerType& GetType() const{ return m_type; }

    /**
     * <p>The date time picker type of a <code>FilterDateTimePickerControl</code>.
     * Choose one of the following options:</p> <ul> <li> <p>
     * <code>SINGLE_VALUED</code>: The filter condition is a fixed date.</p> </li> <li>
     * <p> <code>DATE_RANGE</code>: The filter condition is a date time range.</p>
     * </li> </ul>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The date time picker type of a <code>FilterDateTimePickerControl</code>.
     * Choose one of the following options:</p> <ul> <li> <p>
     * <code>SINGLE_VALUED</code>: The filter condition is a fixed date.</p> </li> <li>
     * <p> <code>DATE_RANGE</code>: The filter condition is a date time range.</p>
     * </li> </ul>
     */
    inline void SetType(const SheetControlDateTimePickerType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The date time picker type of a <code>FilterDateTimePickerControl</code>.
     * Choose one of the following options:</p> <ul> <li> <p>
     * <code>SINGLE_VALUED</code>: The filter condition is a fixed date.</p> </li> <li>
     * <p> <code>DATE_RANGE</code>: The filter condition is a date time range.</p>
     * </li> </ul>
     */
    inline void SetType(SheetControlDateTimePickerType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The date time picker type of a <code>FilterDateTimePickerControl</code>.
     * Choose one of the following options:</p> <ul> <li> <p>
     * <code>SINGLE_VALUED</code>: The filter condition is a fixed date.</p> </li> <li>
     * <p> <code>DATE_RANGE</code>: The filter condition is a date time range.</p>
     * </li> </ul>
     */
    inline FilterDateTimePickerControl& WithType(const SheetControlDateTimePickerType& value) { SetType(value); return *this;}

    /**
     * <p>The date time picker type of a <code>FilterDateTimePickerControl</code>.
     * Choose one of the following options:</p> <ul> <li> <p>
     * <code>SINGLE_VALUED</code>: The filter condition is a fixed date.</p> </li> <li>
     * <p> <code>DATE_RANGE</code>: The filter condition is a date time range.</p>
     * </li> </ul>
     */
    inline FilterDateTimePickerControl& WithType(SheetControlDateTimePickerType&& value) { SetType(std::move(value)); return *this;}

  private:

    Aws::String m_filterControlId;
    bool m_filterControlIdHasBeenSet = false;

    Aws::String m_title;
    bool m_titleHasBeenSet = false;

    Aws::String m_sourceFilterId;
    bool m_sourceFilterIdHasBeenSet = false;

    DateTimePickerControlDisplayOptions m_displayOptions;
    bool m_displayOptionsHasBeenSet = false;

    SheetControlDateTimePickerType m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
