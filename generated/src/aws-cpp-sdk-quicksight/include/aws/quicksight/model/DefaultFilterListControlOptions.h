/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/ListControlDisplayOptions.h>
#include <aws/quicksight/model/SheetControlListType.h>
#include <aws/quicksight/model/FilterSelectableValues.h>
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
   * <p>The default options that correspond to the <code>List</code> filter control
   * type.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DefaultFilterListControlOptions">AWS
   * API Reference</a></p>
   */
  class DefaultFilterListControlOptions
  {
  public:
    AWS_QUICKSIGHT_API DefaultFilterListControlOptions();
    AWS_QUICKSIGHT_API DefaultFilterListControlOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API DefaultFilterListControlOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


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
    inline DefaultFilterListControlOptions& WithDisplayOptions(const ListControlDisplayOptions& value) { SetDisplayOptions(value); return *this;}

    /**
     * <p>The display options of a control.</p>
     */
    inline DefaultFilterListControlOptions& WithDisplayOptions(ListControlDisplayOptions&& value) { SetDisplayOptions(std::move(value)); return *this;}


    /**
     * <p>The type of the <code>DefaultFilterListControlOptions</code>. Choose one of
     * the following options:</p> <ul> <li> <p> <code>MULTI_SELECT</code>: The user can
     * select multiple entries from the list.</p> </li> <li> <p>
     * <code>SINGLE_SELECT</code>: The user can select a single entry from the
     * list.</p> </li> </ul>
     */
    inline const SheetControlListType& GetType() const{ return m_type; }

    /**
     * <p>The type of the <code>DefaultFilterListControlOptions</code>. Choose one of
     * the following options:</p> <ul> <li> <p> <code>MULTI_SELECT</code>: The user can
     * select multiple entries from the list.</p> </li> <li> <p>
     * <code>SINGLE_SELECT</code>: The user can select a single entry from the
     * list.</p> </li> </ul>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of the <code>DefaultFilterListControlOptions</code>. Choose one of
     * the following options:</p> <ul> <li> <p> <code>MULTI_SELECT</code>: The user can
     * select multiple entries from the list.</p> </li> <li> <p>
     * <code>SINGLE_SELECT</code>: The user can select a single entry from the
     * list.</p> </li> </ul>
     */
    inline void SetType(const SheetControlListType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of the <code>DefaultFilterListControlOptions</code>. Choose one of
     * the following options:</p> <ul> <li> <p> <code>MULTI_SELECT</code>: The user can
     * select multiple entries from the list.</p> </li> <li> <p>
     * <code>SINGLE_SELECT</code>: The user can select a single entry from the
     * list.</p> </li> </ul>
     */
    inline void SetType(SheetControlListType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of the <code>DefaultFilterListControlOptions</code>. Choose one of
     * the following options:</p> <ul> <li> <p> <code>MULTI_SELECT</code>: The user can
     * select multiple entries from the list.</p> </li> <li> <p>
     * <code>SINGLE_SELECT</code>: The user can select a single entry from the
     * list.</p> </li> </ul>
     */
    inline DefaultFilterListControlOptions& WithType(const SheetControlListType& value) { SetType(value); return *this;}

    /**
     * <p>The type of the <code>DefaultFilterListControlOptions</code>. Choose one of
     * the following options:</p> <ul> <li> <p> <code>MULTI_SELECT</code>: The user can
     * select multiple entries from the list.</p> </li> <li> <p>
     * <code>SINGLE_SELECT</code>: The user can select a single entry from the
     * list.</p> </li> </ul>
     */
    inline DefaultFilterListControlOptions& WithType(SheetControlListType&& value) { SetType(std::move(value)); return *this;}


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
    inline DefaultFilterListControlOptions& WithSelectableValues(const FilterSelectableValues& value) { SetSelectableValues(value); return *this;}

    /**
     * <p>A list of selectable values that are used in a control.</p>
     */
    inline DefaultFilterListControlOptions& WithSelectableValues(FilterSelectableValues&& value) { SetSelectableValues(std::move(value)); return *this;}

  private:

    ListControlDisplayOptions m_displayOptions;
    bool m_displayOptionsHasBeenSet = false;

    SheetControlListType m_type;
    bool m_typeHasBeenSet = false;

    FilterSelectableValues m_selectableValues;
    bool m_selectableValuesHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
