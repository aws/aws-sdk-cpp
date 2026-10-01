/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/CommitMode.h>
#include <aws/quicksight/model/ControlSortConfiguration.h>
#include <aws/quicksight/model/ControlTitleFormatText.h>
#include <aws/quicksight/model/HierarchyFilterDropDownControlDisplayOptions.h>
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
 * <p>The default options that correspond to the <code>HierarchyDropdown</code>
 * filter control type.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DefaultHierarchyFilterDropDownControlOptions">AWS
 * API Reference</a></p>
 */
class DefaultHierarchyFilterDropDownControlOptions {
 public:
  AWS_QUICKSIGHT_API DefaultHierarchyFilterDropDownControlOptions() = default;
  AWS_QUICKSIGHT_API DefaultHierarchyFilterDropDownControlOptions(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API DefaultHierarchyFilterDropDownControlOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The display options of a control.</p>
   */
  inline const HierarchyFilterDropDownControlDisplayOptions& GetDisplayOptions() const { return m_displayOptions; }
  inline bool DisplayOptionsHasBeenSet() const { return m_displayOptionsHasBeenSet; }
  template <typename DisplayOptionsT = HierarchyFilterDropDownControlDisplayOptions>
  void SetDisplayOptions(DisplayOptionsT&& value) {
    m_displayOptionsHasBeenSet = true;
    m_displayOptions = std::forward<DisplayOptionsT>(value);
  }
  template <typename DisplayOptionsT = HierarchyFilterDropDownControlDisplayOptions>
  DefaultHierarchyFilterDropDownControlOptions& WithDisplayOptions(DisplayOptionsT&& value) {
    SetDisplayOptions(std::forward<DisplayOptionsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of the <code>DefaultHierarchyFilterDropDownControlOptions</code>.
   * Choose one of the following options:</p> <ul> <li> <p>
   * <code>MULTI_SELECT</code>: The user can select multiple entries from a dropdown
   * menu.</p> </li> <li> <p> <code>SINGLE_SELECT</code>: The user can select a
   * single entry from a dropdown menu.</p> </li> </ul>
   */
  inline SheetControlListType GetType() const { return m_type; }
  inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
  inline void SetType(SheetControlListType value) {
    m_typeHasBeenSet = true;
    m_type = value;
  }
  inline DefaultHierarchyFilterDropDownControlOptions& WithType(SheetControlListType value) {
    SetType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The visibility configuration of the Apply button on a
   * <code>HierarchyFilterDropDownControl</code>.</p>
   */
  inline CommitMode GetCommitMode() const { return m_commitMode; }
  inline bool CommitModeHasBeenSet() const { return m_commitModeHasBeenSet; }
  inline void SetCommitMode(CommitMode value) {
    m_commitModeHasBeenSet = true;
    m_commitMode = value;
  }
  inline DefaultHierarchyFilterDropDownControlOptions& WithCommitMode(CommitMode value) {
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
  DefaultHierarchyFilterDropDownControlOptions& WithControlSortConfigurations(ControlSortConfigurationsT&& value) {
    SetControlSortConfigurations(std::forward<ControlSortConfigurationsT>(value));
    return *this;
  }
  template <typename ControlSortConfigurationsT = ControlSortConfiguration>
  DefaultHierarchyFilterDropDownControlOptions& AddControlSortConfigurations(ControlSortConfigurationsT&& value) {
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
  DefaultHierarchyFilterDropDownControlOptions& WithControlTitleFormatText(ControlTitleFormatTextT&& value) {
    SetControlTitleFormatText(std::forward<ControlTitleFormatTextT>(value));
    return *this;
  }
  ///@}
 private:
  HierarchyFilterDropDownControlDisplayOptions m_displayOptions;

  SheetControlListType m_type{SheetControlListType::NOT_SET};

  CommitMode m_commitMode{CommitMode::NOT_SET};

  Aws::Vector<ControlSortConfiguration> m_controlSortConfigurations;

  ControlTitleFormatText m_controlTitleFormatText;
  bool m_displayOptionsHasBeenSet = false;
  bool m_typeHasBeenSet = false;
  bool m_commitModeHasBeenSet = false;
  bool m_controlSortConfigurationsHasBeenSet = false;
  bool m_controlTitleFormatTextHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
