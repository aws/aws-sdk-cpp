/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/CommitMode.h>
#include <aws/quicksight/model/ControlSortConfiguration.h>
#include <aws/quicksight/model/ControlTitleFormatText.h>
#include <aws/quicksight/model/HierarchyFilterListControlDisplayOptions.h>
#include <aws/quicksight/model/SheetControlListType.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace QuickSight {
namespace Model {

/**
 * <p>A control from a hierarchy filter that displays the hierarchy as a list. You
 * can expand a value to see and select the values beneath it, and select either a
 * single value or multiple values.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/HierarchyFilterListControl">AWS
 * API Reference</a></p>
 */
class HierarchyFilterListControl {
 public:
  AWS_QUICKSIGHT_API HierarchyFilterListControl() = default;
  AWS_QUICKSIGHT_API HierarchyFilterListControl(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API HierarchyFilterListControl& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The ID of the <code>HierarchyFilterListControl</code>.</p>
   */
  inline const Aws::String& GetFilterControlId() const { return m_filterControlId; }
  inline bool FilterControlIdHasBeenSet() const { return m_filterControlIdHasBeenSet; }
  template <typename FilterControlIdT = Aws::String>
  void SetFilterControlId(FilterControlIdT&& value) {
    m_filterControlIdHasBeenSet = true;
    m_filterControlId = std::forward<FilterControlIdT>(value);
  }
  template <typename FilterControlIdT = Aws::String>
  HierarchyFilterListControl& WithFilterControlId(FilterControlIdT&& value) {
    SetFilterControlId(std::forward<FilterControlIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The source filter ID of the <code>HierarchyFilterListControl</code>. This
   * must be the <code>FilterId</code> of a <code>HierarchyFilter</code>.</p>
   */
  inline const Aws::String& GetSourceFilterId() const { return m_sourceFilterId; }
  inline bool SourceFilterIdHasBeenSet() const { return m_sourceFilterIdHasBeenSet; }
  template <typename SourceFilterIdT = Aws::String>
  void SetSourceFilterId(SourceFilterIdT&& value) {
    m_sourceFilterIdHasBeenSet = true;
    m_sourceFilterId = std::forward<SourceFilterIdT>(value);
  }
  template <typename SourceFilterIdT = Aws::String>
  HierarchyFilterListControl& WithSourceFilterId(SourceFilterIdT&& value) {
    SetSourceFilterId(std::forward<SourceFilterIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The title of the <code>HierarchyFilterListControl</code>.</p>
   */
  inline const Aws::String& GetTitle() const { return m_title; }
  inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }
  template <typename TitleT = Aws::String>
  void SetTitle(TitleT&& value) {
    m_titleHasBeenSet = true;
    m_title = std::forward<TitleT>(value);
  }
  template <typename TitleT = Aws::String>
  HierarchyFilterListControl& WithTitle(TitleT&& value) {
    SetTitle(std::forward<TitleT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The display options of a control.</p>
   */
  inline const HierarchyFilterListControlDisplayOptions& GetDisplayOptions() const { return m_displayOptions; }
  inline bool DisplayOptionsHasBeenSet() const { return m_displayOptionsHasBeenSet; }
  template <typename DisplayOptionsT = HierarchyFilterListControlDisplayOptions>
  void SetDisplayOptions(DisplayOptionsT&& value) {
    m_displayOptionsHasBeenSet = true;
    m_displayOptions = std::forward<DisplayOptionsT>(value);
  }
  template <typename DisplayOptionsT = HierarchyFilterListControlDisplayOptions>
  HierarchyFilterListControl& WithDisplayOptions(DisplayOptionsT&& value) {
    SetDisplayOptions(std::forward<DisplayOptionsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of the <code>HierarchyFilterListControl</code>. Choose one of the
   * following options:</p> <ul> <li> <p> <code>MULTI_SELECT</code>: The user can
   * select multiple entries from the list.</p> </li> <li> <p>
   * <code>SINGLE_SELECT</code>: The user can select a single entry from the
   * list.</p> </li> </ul>
   */
  inline SheetControlListType GetType() const { return m_type; }
  inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
  inline void SetType(SheetControlListType value) {
    m_typeHasBeenSet = true;
    m_type = value;
  }
  inline HierarchyFilterListControl& WithType(SheetControlListType value) {
    SetType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The visibility configuration of the Apply button on a
   * <code>HierarchyFilterListControl</code>.</p>
   */
  inline CommitMode GetCommitMode() const { return m_commitMode; }
  inline bool CommitModeHasBeenSet() const { return m_commitModeHasBeenSet; }
  inline void SetCommitMode(CommitMode value) {
    m_commitModeHasBeenSet = true;
    m_commitMode = value;
  }
  inline HierarchyFilterListControl& WithCommitMode(CommitMode value) {
    SetCommitMode(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The sort configuration for the values displayed in the control. Only one sort
   * configuration can be applied per control.</p>
   */
  inline const Aws::Vector<ControlSortConfiguration>& GetControlSortConfigurations() const { return m_controlSortConfigurations; }
  inline bool ControlSortConfigurationsHasBeenSet() const { return m_controlSortConfigurationsHasBeenSet; }
  template <typename ControlSortConfigurationsT = Aws::Vector<ControlSortConfiguration>>
  void SetControlSortConfigurations(ControlSortConfigurationsT&& value) {
    m_controlSortConfigurationsHasBeenSet = true;
    m_controlSortConfigurations = std::forward<ControlSortConfigurationsT>(value);
  }
  template <typename ControlSortConfigurationsT = Aws::Vector<ControlSortConfiguration>>
  HierarchyFilterListControl& WithControlSortConfigurations(ControlSortConfigurationsT&& value) {
    SetControlSortConfigurations(std::forward<ControlSortConfigurationsT>(value));
    return *this;
  }
  template <typename ControlSortConfigurationsT = ControlSortConfiguration>
  HierarchyFilterListControl& AddControlSortConfigurations(ControlSortConfigurationsT&& value) {
    m_controlSortConfigurationsHasBeenSet = true;
    m_controlSortConfigurations.emplace_back(std::forward<ControlSortConfigurationsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The title text format configuration for the control.</p>
   */
  inline const ControlTitleFormatText& GetControlTitleFormatText() const { return m_controlTitleFormatText; }
  inline bool ControlTitleFormatTextHasBeenSet() const { return m_controlTitleFormatTextHasBeenSet; }
  template <typename ControlTitleFormatTextT = ControlTitleFormatText>
  void SetControlTitleFormatText(ControlTitleFormatTextT&& value) {
    m_controlTitleFormatTextHasBeenSet = true;
    m_controlTitleFormatText = std::forward<ControlTitleFormatTextT>(value);
  }
  template <typename ControlTitleFormatTextT = ControlTitleFormatText>
  HierarchyFilterListControl& WithControlTitleFormatText(ControlTitleFormatTextT&& value) {
    SetControlTitleFormatText(std::forward<ControlTitleFormatTextT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_filterControlId;

  Aws::String m_sourceFilterId;

  Aws::String m_title;

  HierarchyFilterListControlDisplayOptions m_displayOptions;

  SheetControlListType m_type{SheetControlListType::NOT_SET};

  CommitMode m_commitMode{CommitMode::NOT_SET};

  Aws::Vector<ControlSortConfiguration> m_controlSortConfigurations;

  ControlTitleFormatText m_controlTitleFormatText;
  bool m_filterControlIdHasBeenSet = false;
  bool m_sourceFilterIdHasBeenSet = false;
  bool m_titleHasBeenSet = false;
  bool m_displayOptionsHasBeenSet = false;
  bool m_typeHasBeenSet = false;
  bool m_commitModeHasBeenSet = false;
  bool m_controlSortConfigurationsHasBeenSet = false;
  bool m_controlTitleFormatTextHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
