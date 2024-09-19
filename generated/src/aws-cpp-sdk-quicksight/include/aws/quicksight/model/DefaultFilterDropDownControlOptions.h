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
    AWS_QUICKSIGHT_API DefaultFilterDropDownControlOptions();
    AWS_QUICKSIGHT_API DefaultFilterDropDownControlOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API DefaultFilterDropDownControlOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The display options of a control.</p>
     */
    inline const DropDownControlDisplayOptions& GetDisplayOptions() const{ return m_displayOptions; }
    inline bool DisplayOptionsHasBeenSet() const { return m_displayOptionsHasBeenSet; }
    inline void SetDisplayOptions(const DropDownControlDisplayOptions& value) { m_displayOptionsHasBeenSet = true; m_displayOptions = value; }
    inline void SetDisplayOptions(DropDownControlDisplayOptions&& value) { m_displayOptionsHasBeenSet = true; m_displayOptions = std::move(value); }
    inline DefaultFilterDropDownControlOptions& WithDisplayOptions(const DropDownControlDisplayOptions& value) { SetDisplayOptions(value); return *this;}
    inline DefaultFilterDropDownControlOptions& WithDisplayOptions(DropDownControlDisplayOptions&& value) { SetDisplayOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the <code>FilterDropDownControl</code>. Choose one of the
     * following options:</p> <ul> <li> <p> <code>MULTI_SELECT</code>: The user can
     * select multiple entries from a dropdown menu.</p> </li> <li> <p>
     * <code>SINGLE_SELECT</code>: The user can select a single entry from a dropdown
     * menu.</p> </li> </ul>
     */
    inline const SheetControlListType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const SheetControlListType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(SheetControlListType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline DefaultFilterDropDownControlOptions& WithType(const SheetControlListType& value) { SetType(value); return *this;}
    inline DefaultFilterDropDownControlOptions& WithType(SheetControlListType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of selectable values that are used in a control.</p>
     */
    inline const FilterSelectableValues& GetSelectableValues() const{ return m_selectableValues; }
    inline bool SelectableValuesHasBeenSet() const { return m_selectableValuesHasBeenSet; }
    inline void SetSelectableValues(const FilterSelectableValues& value) { m_selectableValuesHasBeenSet = true; m_selectableValues = value; }
    inline void SetSelectableValues(FilterSelectableValues&& value) { m_selectableValuesHasBeenSet = true; m_selectableValues = std::move(value); }
    inline DefaultFilterDropDownControlOptions& WithSelectableValues(const FilterSelectableValues& value) { SetSelectableValues(value); return *this;}
    inline DefaultFilterDropDownControlOptions& WithSelectableValues(FilterSelectableValues&& value) { SetSelectableValues(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The visibility configuration of the Apply button on a
     * <code>FilterDropDownControl</code>.</p>
     */
    inline const CommitMode& GetCommitMode() const{ return m_commitMode; }
    inline bool CommitModeHasBeenSet() const { return m_commitModeHasBeenSet; }
    inline void SetCommitMode(const CommitMode& value) { m_commitModeHasBeenSet = true; m_commitMode = value; }
    inline void SetCommitMode(CommitMode&& value) { m_commitModeHasBeenSet = true; m_commitMode = std::move(value); }
    inline DefaultFilterDropDownControlOptions& WithCommitMode(const CommitMode& value) { SetCommitMode(value); return *this;}
    inline DefaultFilterDropDownControlOptions& WithCommitMode(CommitMode&& value) { SetCommitMode(std::move(value)); return *this;}
    ///@}
  private:

    DropDownControlDisplayOptions m_displayOptions;
    bool m_displayOptionsHasBeenSet = false;

    SheetControlListType m_type;
    bool m_typeHasBeenSet = false;

    FilterSelectableValues m_selectableValues;
    bool m_selectableValuesHasBeenSet = false;

    CommitMode m_commitMode;
    bool m_commitModeHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
