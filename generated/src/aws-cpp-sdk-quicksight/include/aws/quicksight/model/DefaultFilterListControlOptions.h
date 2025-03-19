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
    AWS_QUICKSIGHT_API DefaultFilterListControlOptions() = default;
    AWS_QUICKSIGHT_API DefaultFilterListControlOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API DefaultFilterListControlOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The display options of a control.</p>
     */
    inline const ListControlDisplayOptions& GetDisplayOptions() const { return m_displayOptions; }
    inline bool DisplayOptionsHasBeenSet() const { return m_displayOptionsHasBeenSet; }
    template<typename DisplayOptionsT = ListControlDisplayOptions>
    void SetDisplayOptions(DisplayOptionsT&& value) { m_displayOptionsHasBeenSet = true; m_displayOptions = std::forward<DisplayOptionsT>(value); }
    template<typename DisplayOptionsT = ListControlDisplayOptions>
    DefaultFilterListControlOptions& WithDisplayOptions(DisplayOptionsT&& value) { SetDisplayOptions(std::forward<DisplayOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the <code>DefaultFilterListControlOptions</code>. Choose one of
     * the following options:</p> <ul> <li> <p> <code>MULTI_SELECT</code>: The user can
     * select multiple entries from the list.</p> </li> <li> <p>
     * <code>SINGLE_SELECT</code>: The user can select a single entry from the
     * list.</p> </li> </ul>
     */
    inline SheetControlListType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(SheetControlListType value) { m_typeHasBeenSet = true; m_type = value; }
    inline DefaultFilterListControlOptions& WithType(SheetControlListType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of selectable values that are used in a control.</p>
     */
    inline const FilterSelectableValues& GetSelectableValues() const { return m_selectableValues; }
    inline bool SelectableValuesHasBeenSet() const { return m_selectableValuesHasBeenSet; }
    template<typename SelectableValuesT = FilterSelectableValues>
    void SetSelectableValues(SelectableValuesT&& value) { m_selectableValuesHasBeenSet = true; m_selectableValues = std::forward<SelectableValuesT>(value); }
    template<typename SelectableValuesT = FilterSelectableValues>
    DefaultFilterListControlOptions& WithSelectableValues(SelectableValuesT&& value) { SetSelectableValues(std::forward<SelectableValuesT>(value)); return *this;}
    ///@}
  private:

    ListControlDisplayOptions m_displayOptions;
    bool m_displayOptionsHasBeenSet = false;

    SheetControlListType m_type{SheetControlListType::NOT_SET};
    bool m_typeHasBeenSet = false;

    FilterSelectableValues m_selectableValues;
    bool m_selectableValuesHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
