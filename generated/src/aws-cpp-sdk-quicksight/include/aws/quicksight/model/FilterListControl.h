/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/ListControlDisplayOptions.h>
#include <aws/quicksight/model/SheetControlListType.h>
#include <aws/quicksight/model/FilterSelectableValues.h>
#include <aws/quicksight/model/CascadingControlConfiguration.h>
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
   * <p>A control to display a list of buttons or boxes. This is used to select
   * either a single value or multiple values.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/FilterListControl">AWS
   * API Reference</a></p>
   */
  class FilterListControl
  {
  public:
    AWS_QUICKSIGHT_API FilterListControl();
    AWS_QUICKSIGHT_API FilterListControl(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API FilterListControl& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the <code>FilterListControl</code>.</p>
     */
    inline const Aws::String& GetFilterControlId() const{ return m_filterControlId; }

    /**
     * <p>The ID of the <code>FilterListControl</code>.</p>
     */
    inline bool FilterControlIdHasBeenSet() const { return m_filterControlIdHasBeenSet; }

    /**
     * <p>The ID of the <code>FilterListControl</code>.</p>
     */
    inline void SetFilterControlId(const Aws::String& value) { m_filterControlIdHasBeenSet = true; m_filterControlId = value; }

    /**
     * <p>The ID of the <code>FilterListControl</code>.</p>
     */
    inline void SetFilterControlId(Aws::String&& value) { m_filterControlIdHasBeenSet = true; m_filterControlId = std::move(value); }

    /**
     * <p>The ID of the <code>FilterListControl</code>.</p>
     */
    inline void SetFilterControlId(const char* value) { m_filterControlIdHasBeenSet = true; m_filterControlId.assign(value); }

    /**
     * <p>The ID of the <code>FilterListControl</code>.</p>
     */
    inline FilterListControl& WithFilterControlId(const Aws::String& value) { SetFilterControlId(value); return *this;}

    /**
     * <p>The ID of the <code>FilterListControl</code>.</p>
     */
    inline FilterListControl& WithFilterControlId(Aws::String&& value) { SetFilterControlId(std::move(value)); return *this;}

    /**
     * <p>The ID of the <code>FilterListControl</code>.</p>
     */
    inline FilterListControl& WithFilterControlId(const char* value) { SetFilterControlId(value); return *this;}


    /**
     * <p>The title of the <code>FilterListControl</code>.</p>
     */
    inline const Aws::String& GetTitle() const{ return m_title; }

    /**
     * <p>The title of the <code>FilterListControl</code>.</p>
     */
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }

    /**
     * <p>The title of the <code>FilterListControl</code>.</p>
     */
    inline void SetTitle(const Aws::String& value) { m_titleHasBeenSet = true; m_title = value; }

    /**
     * <p>The title of the <code>FilterListControl</code>.</p>
     */
    inline void SetTitle(Aws::String&& value) { m_titleHasBeenSet = true; m_title = std::move(value); }

    /**
     * <p>The title of the <code>FilterListControl</code>.</p>
     */
    inline void SetTitle(const char* value) { m_titleHasBeenSet = true; m_title.assign(value); }

    /**
     * <p>The title of the <code>FilterListControl</code>.</p>
     */
    inline FilterListControl& WithTitle(const Aws::String& value) { SetTitle(value); return *this;}

    /**
     * <p>The title of the <code>FilterListControl</code>.</p>
     */
    inline FilterListControl& WithTitle(Aws::String&& value) { SetTitle(std::move(value)); return *this;}

    /**
     * <p>The title of the <code>FilterListControl</code>.</p>
     */
    inline FilterListControl& WithTitle(const char* value) { SetTitle(value); return *this;}


    /**
     * <p>The source filter ID of the <code>FilterListControl</code>.</p>
     */
    inline const Aws::String& GetSourceFilterId() const{ return m_sourceFilterId; }

    /**
     * <p>The source filter ID of the <code>FilterListControl</code>.</p>
     */
    inline bool SourceFilterIdHasBeenSet() const { return m_sourceFilterIdHasBeenSet; }

    /**
     * <p>The source filter ID of the <code>FilterListControl</code>.</p>
     */
    inline void SetSourceFilterId(const Aws::String& value) { m_sourceFilterIdHasBeenSet = true; m_sourceFilterId = value; }

    /**
     * <p>The source filter ID of the <code>FilterListControl</code>.</p>
     */
    inline void SetSourceFilterId(Aws::String&& value) { m_sourceFilterIdHasBeenSet = true; m_sourceFilterId = std::move(value); }

    /**
     * <p>The source filter ID of the <code>FilterListControl</code>.</p>
     */
    inline void SetSourceFilterId(const char* value) { m_sourceFilterIdHasBeenSet = true; m_sourceFilterId.assign(value); }

    /**
     * <p>The source filter ID of the <code>FilterListControl</code>.</p>
     */
    inline FilterListControl& WithSourceFilterId(const Aws::String& value) { SetSourceFilterId(value); return *this;}

    /**
     * <p>The source filter ID of the <code>FilterListControl</code>.</p>
     */
    inline FilterListControl& WithSourceFilterId(Aws::String&& value) { SetSourceFilterId(std::move(value)); return *this;}

    /**
     * <p>The source filter ID of the <code>FilterListControl</code>.</p>
     */
    inline FilterListControl& WithSourceFilterId(const char* value) { SetSourceFilterId(value); return *this;}


    /**
     * <p>The display options of a control.</p>
     */
    inline const ListControlDisplayOptions& GetDisplayOptions() const{ return m_displayOptions; }

    /**
     * <p>The display options of a control.</p>
     */
    inline bool DisplayOptionsHasBeenSet() const { return m_displayOptionsHasBeenSet; }

    /**
     * <p>The display options of a control.</p>
     */
    inline void SetDisplayOptions(const ListControlDisplayOptions& value) { m_displayOptionsHasBeenSet = true; m_displayOptions = value; }

    /**
     * <p>The display options of a control.</p>
     */
    inline void SetDisplayOptions(ListControlDisplayOptions&& value) { m_displayOptionsHasBeenSet = true; m_displayOptions = std::move(value); }

    /**
     * <p>The display options of a control.</p>
     */
    inline FilterListControl& WithDisplayOptions(const ListControlDisplayOptions& value) { SetDisplayOptions(value); return *this;}

    /**
     * <p>The display options of a control.</p>
     */
    inline FilterListControl& WithDisplayOptions(ListControlDisplayOptions&& value) { SetDisplayOptions(std::move(value)); return *this;}


    /**
     * <p>The type of <code>FilterListControl</code>. Choose one of the following
     * options:</p> <ul> <li> <p> <code>MULTI_SELECT</code>: The user can select
     * multiple entries from the list.</p> </li> <li> <p> <code>SINGLE_SELECT</code>:
     * The user can select a single entry from the list.</p> </li> </ul>
     */
    inline const SheetControlListType& GetType() const{ return m_type; }

    /**
     * <p>The type of <code>FilterListControl</code>. Choose one of the following
     * options:</p> <ul> <li> <p> <code>MULTI_SELECT</code>: The user can select
     * multiple entries from the list.</p> </li> <li> <p> <code>SINGLE_SELECT</code>:
     * The user can select a single entry from the list.</p> </li> </ul>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of <code>FilterListControl</code>. Choose one of the following
     * options:</p> <ul> <li> <p> <code>MULTI_SELECT</code>: The user can select
     * multiple entries from the list.</p> </li> <li> <p> <code>SINGLE_SELECT</code>:
     * The user can select a single entry from the list.</p> </li> </ul>
     */
    inline void SetType(const SheetControlListType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of <code>FilterListControl</code>. Choose one of the following
     * options:</p> <ul> <li> <p> <code>MULTI_SELECT</code>: The user can select
     * multiple entries from the list.</p> </li> <li> <p> <code>SINGLE_SELECT</code>:
     * The user can select a single entry from the list.</p> </li> </ul>
     */
    inline void SetType(SheetControlListType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of <code>FilterListControl</code>. Choose one of the following
     * options:</p> <ul> <li> <p> <code>MULTI_SELECT</code>: The user can select
     * multiple entries from the list.</p> </li> <li> <p> <code>SINGLE_SELECT</code>:
     * The user can select a single entry from the list.</p> </li> </ul>
     */
    inline FilterListControl& WithType(const SheetControlListType& value) { SetType(value); return *this;}

    /**
     * <p>The type of <code>FilterListControl</code>. Choose one of the following
     * options:</p> <ul> <li> <p> <code>MULTI_SELECT</code>: The user can select
     * multiple entries from the list.</p> </li> <li> <p> <code>SINGLE_SELECT</code>:
     * The user can select a single entry from the list.</p> </li> </ul>
     */
    inline FilterListControl& WithType(SheetControlListType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>A list of selectable values that are used in a control.</p>
     */
    inline const FilterSelectableValues& GetSelectableValues() const{ return m_selectableValues; }

    /**
     * <p>A list of selectable values that are used in a control.</p>
     */
    inline bool SelectableValuesHasBeenSet() const { return m_selectableValuesHasBeenSet; }

    /**
     * <p>A list of selectable values that are used in a control.</p>
     */
    inline void SetSelectableValues(const FilterSelectableValues& value) { m_selectableValuesHasBeenSet = true; m_selectableValues = value; }

    /**
     * <p>A list of selectable values that are used in a control.</p>
     */
    inline void SetSelectableValues(FilterSelectableValues&& value) { m_selectableValuesHasBeenSet = true; m_selectableValues = std::move(value); }

    /**
     * <p>A list of selectable values that are used in a control.</p>
     */
    inline FilterListControl& WithSelectableValues(const FilterSelectableValues& value) { SetSelectableValues(value); return *this;}

    /**
     * <p>A list of selectable values that are used in a control.</p>
     */
    inline FilterListControl& WithSelectableValues(FilterSelectableValues&& value) { SetSelectableValues(std::move(value)); return *this;}


    /**
     * <p>The values that are displayed in a control can be configured to only show
     * values that are valid based on what's selected in other controls.</p>
     */
    inline const CascadingControlConfiguration& GetCascadingControlConfiguration() const{ return m_cascadingControlConfiguration; }

    /**
     * <p>The values that are displayed in a control can be configured to only show
     * values that are valid based on what's selected in other controls.</p>
     */
    inline bool CascadingControlConfigurationHasBeenSet() const { return m_cascadingControlConfigurationHasBeenSet; }

    /**
     * <p>The values that are displayed in a control can be configured to only show
     * values that are valid based on what's selected in other controls.</p>
     */
    inline void SetCascadingControlConfiguration(const CascadingControlConfiguration& value) { m_cascadingControlConfigurationHasBeenSet = true; m_cascadingControlConfiguration = value; }

    /**
     * <p>The values that are displayed in a control can be configured to only show
     * values that are valid based on what's selected in other controls.</p>
     */
    inline void SetCascadingControlConfiguration(CascadingControlConfiguration&& value) { m_cascadingControlConfigurationHasBeenSet = true; m_cascadingControlConfiguration = std::move(value); }

    /**
     * <p>The values that are displayed in a control can be configured to only show
     * values that are valid based on what's selected in other controls.</p>
     */
    inline FilterListControl& WithCascadingControlConfiguration(const CascadingControlConfiguration& value) { SetCascadingControlConfiguration(value); return *this;}

    /**
     * <p>The values that are displayed in a control can be configured to only show
     * values that are valid based on what's selected in other controls.</p>
     */
    inline FilterListControl& WithCascadingControlConfiguration(CascadingControlConfiguration&& value) { SetCascadingControlConfiguration(std::move(value)); return *this;}

  private:

    Aws::String m_filterControlId;
    bool m_filterControlIdHasBeenSet = false;

    Aws::String m_title;
    bool m_titleHasBeenSet = false;

    Aws::String m_sourceFilterId;
    bool m_sourceFilterIdHasBeenSet = false;

    ListControlDisplayOptions m_displayOptions;
    bool m_displayOptionsHasBeenSet = false;

    SheetControlListType m_type;
    bool m_typeHasBeenSet = false;

    FilterSelectableValues m_selectableValues;
    bool m_selectableValuesHasBeenSet = false;

    CascadingControlConfiguration m_cascadingControlConfiguration;
    bool m_cascadingControlConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
