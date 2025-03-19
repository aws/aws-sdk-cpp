/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/DateTimePickerControlDisplayOptions.h>
#include <aws/quicksight/model/SheetControlDateTimePickerType.h>
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
   * <p>A control from a date filter that is used to specify date and
   * time.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/FilterDateTimePickerControl">AWS
   * API Reference</a></p>
   */
  class FilterDateTimePickerControl
  {
  public:
    AWS_QUICKSIGHT_API FilterDateTimePickerControl() = default;
    AWS_QUICKSIGHT_API FilterDateTimePickerControl(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API FilterDateTimePickerControl& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the <code>FilterDateTimePickerControl</code>.</p>
     */
    inline const Aws::String& GetFilterControlId() const { return m_filterControlId; }
    inline bool FilterControlIdHasBeenSet() const { return m_filterControlIdHasBeenSet; }
    template<typename FilterControlIdT = Aws::String>
    void SetFilterControlId(FilterControlIdT&& value) { m_filterControlIdHasBeenSet = true; m_filterControlId = std::forward<FilterControlIdT>(value); }
    template<typename FilterControlIdT = Aws::String>
    FilterDateTimePickerControl& WithFilterControlId(FilterControlIdT&& value) { SetFilterControlId(std::forward<FilterControlIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The title of the <code>FilterDateTimePickerControl</code>.</p>
     */
    inline const Aws::String& GetTitle() const { return m_title; }
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }
    template<typename TitleT = Aws::String>
    void SetTitle(TitleT&& value) { m_titleHasBeenSet = true; m_title = std::forward<TitleT>(value); }
    template<typename TitleT = Aws::String>
    FilterDateTimePickerControl& WithTitle(TitleT&& value) { SetTitle(std::forward<TitleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source filter ID of the <code>FilterDateTimePickerControl</code>.</p>
     */
    inline const Aws::String& GetSourceFilterId() const { return m_sourceFilterId; }
    inline bool SourceFilterIdHasBeenSet() const { return m_sourceFilterIdHasBeenSet; }
    template<typename SourceFilterIdT = Aws::String>
    void SetSourceFilterId(SourceFilterIdT&& value) { m_sourceFilterIdHasBeenSet = true; m_sourceFilterId = std::forward<SourceFilterIdT>(value); }
    template<typename SourceFilterIdT = Aws::String>
    FilterDateTimePickerControl& WithSourceFilterId(SourceFilterIdT&& value) { SetSourceFilterId(std::forward<SourceFilterIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The display options of a control.</p>
     */
    inline const DateTimePickerControlDisplayOptions& GetDisplayOptions() const { return m_displayOptions; }
    inline bool DisplayOptionsHasBeenSet() const { return m_displayOptionsHasBeenSet; }
    template<typename DisplayOptionsT = DateTimePickerControlDisplayOptions>
    void SetDisplayOptions(DisplayOptionsT&& value) { m_displayOptionsHasBeenSet = true; m_displayOptions = std::forward<DisplayOptionsT>(value); }
    template<typename DisplayOptionsT = DateTimePickerControlDisplayOptions>
    FilterDateTimePickerControl& WithDisplayOptions(DisplayOptionsT&& value) { SetDisplayOptions(std::forward<DisplayOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the <code>FilterDropDownControl</code>. Choose one of the
     * following options:</p> <ul> <li> <p> <code>MULTI_SELECT</code>: The user can
     * select multiple entries from a dropdown menu.</p> </li> <li> <p>
     * <code>SINGLE_SELECT</code>: The user can select a single entry from a dropdown
     * menu.</p> </li> </ul>
     */
    inline SheetControlDateTimePickerType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(SheetControlDateTimePickerType value) { m_typeHasBeenSet = true; m_type = value; }
    inline FilterDateTimePickerControl& WithType(SheetControlDateTimePickerType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The visibility configurationof the Apply button on a
     * <code>DateTimePickerControl</code>.</p>
     */
    inline CommitMode GetCommitMode() const { return m_commitMode; }
    inline bool CommitModeHasBeenSet() const { return m_commitModeHasBeenSet; }
    inline void SetCommitMode(CommitMode value) { m_commitModeHasBeenSet = true; m_commitMode = value; }
    inline FilterDateTimePickerControl& WithCommitMode(CommitMode value) { SetCommitMode(value); return *this;}
    ///@}
  private:

    Aws::String m_filterControlId;
    bool m_filterControlIdHasBeenSet = false;

    Aws::String m_title;
    bool m_titleHasBeenSet = false;

    Aws::String m_sourceFilterId;
    bool m_sourceFilterIdHasBeenSet = false;

    DateTimePickerControlDisplayOptions m_displayOptions;
    bool m_displayOptionsHasBeenSet = false;

    SheetControlDateTimePickerType m_type{SheetControlDateTimePickerType::NOT_SET};
    bool m_typeHasBeenSet = false;

    CommitMode m_commitMode{CommitMode::NOT_SET};
    bool m_commitModeHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
