/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/DropDownControlDisplayOptions.h>
#include <aws/quicksight/model/SheetControlListType.h>
#include <aws/quicksight/model/FilterSelectableValues.h>
#include <aws/quicksight/model/CommitMode.h>
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
   * <p>The default options that correspond to the <code>Dropdown</code> filter
   * control type.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DefaultFilterDropDownControlOptions">AWS
   * API Reference</a></p>
   */
  class DefaultFilterDropDownControlOptions
  {
  public:
    AWS_QUICKSIGHT_API DefaultFilterDropDownControlOptions() = default;
    AWS_QUICKSIGHT_API DefaultFilterDropDownControlOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API DefaultFilterDropDownControlOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The display options of a control.</p>
     */
    inline const DropDownControlDisplayOptions& GetDisplayOptions() const { return m_displayOptions; }
    inline bool DisplayOptionsHasBeenSet() const { return m_displayOptionsHasBeenSet; }
    template<typename DisplayOptionsT = DropDownControlDisplayOptions>
    void SetDisplayOptions(DisplayOptionsT&& value) { m_displayOptionsHasBeenSet = true; m_displayOptions = std::forward<DisplayOptionsT>(value); }
    template<typename DisplayOptionsT = DropDownControlDisplayOptions>
    DefaultFilterDropDownControlOptions& WithDisplayOptions(DisplayOptionsT&& value) { SetDisplayOptions(std::forward<DisplayOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the <code>FilterDropDownControl</code>. Choose one of the
     * following options:</p> <ul> <li> <p> <code>MULTI_SELECT</code>: The user can
     * select multiple entries from a dropdown menu.</p> </li> <li> <p>
     * <code>SINGLE_SELECT</code>: The user can select a single entry from a dropdown
     * menu.</p> </li> </ul>
     */
    inline SheetControlListType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(SheetControlListType value) { m_typeHasBeenSet = true; m_type = value; }
    inline DefaultFilterDropDownControlOptions& WithType(SheetControlListType value) { SetType(value); return *this;}
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
    DefaultFilterDropDownControlOptions& WithSelectableValues(SelectableValuesT&& value) { SetSelectableValues(std::forward<SelectableValuesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The visibility configuration of the Apply button on a
     * <code>FilterDropDownControl</code>.</p>
     */
    inline CommitMode GetCommitMode() const { return m_commitMode; }
    inline bool CommitModeHasBeenSet() const { return m_commitModeHasBeenSet; }
    inline void SetCommitMode(CommitMode value) { m_commitModeHasBeenSet = true; m_commitMode = value; }
    inline DefaultFilterDropDownControlOptions& WithCommitMode(CommitMode value) { SetCommitMode(value); return *this;}
    ///@}
  private:

    DropDownControlDisplayOptions m_displayOptions;
    bool m_displayOptionsHasBeenSet = false;

    SheetControlListType m_type{SheetControlListType::NOT_SET};
    bool m_typeHasBeenSet = false;

    FilterSelectableValues m_selectableValues;
    bool m_selectableValuesHasBeenSet = false;

    CommitMode m_commitMode{CommitMode::NOT_SET};
    bool m_commitModeHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
