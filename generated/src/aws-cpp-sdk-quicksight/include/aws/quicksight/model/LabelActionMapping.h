/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/DlpAction.h>

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
 * <p>Maps a sensitivity label from Microsoft Purview to an enforcement
 * action.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/LabelActionMapping">AWS
 * API Reference</a></p>
 */
class LabelActionMapping {
 public:
  AWS_QUICKSIGHT_API LabelActionMapping() = default;
  AWS_QUICKSIGHT_API LabelActionMapping(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API LabelActionMapping& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The identifier of the sensitivity label from the DLP provider.</p>
   */
  inline const Aws::String& GetLabelId() const { return m_labelId; }
  inline bool LabelIdHasBeenSet() const { return m_labelIdHasBeenSet; }
  template <typename LabelIdT = Aws::String>
  void SetLabelId(LabelIdT&& value) {
    m_labelIdHasBeenSet = true;
    m_labelId = std::forward<LabelIdT>(value);
  }
  template <typename LabelIdT = Aws::String>
  LabelActionMapping& WithLabelId(LabelIdT&& value) {
    SetLabelId(std::forward<LabelIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The display name of the sensitivity label from the DLP provider.</p>
   */
  inline const Aws::String& GetLabelName() const { return m_labelName; }
  inline bool LabelNameHasBeenSet() const { return m_labelNameHasBeenSet; }
  template <typename LabelNameT = Aws::String>
  void SetLabelName(LabelNameT&& value) {
    m_labelNameHasBeenSet = true;
    m_labelName = std::forward<LabelNameT>(value);
  }
  template <typename LabelNameT = Aws::String>
  LabelActionMapping& WithLabelName(LabelNameT&& value) {
    SetLabelName(std::forward<LabelNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The enforcement action to apply when content with this sensitivity label is
   * detected. Valid values are <code>ALLOW</code>, <code>BLOCK</code>, and
   * <code>WARN</code>.</p>
   */
  inline DlpAction GetAction() const { return m_action; }
  inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }
  inline void SetAction(DlpAction value) {
    m_actionHasBeenSet = true;
    m_action = value;
  }
  inline LabelActionMapping& WithAction(DlpAction value) {
    SetAction(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_labelId;

  Aws::String m_labelName;

  DlpAction m_action{DlpAction::NOT_SET};
  bool m_labelIdHasBeenSet = false;
  bool m_labelNameHasBeenSet = false;
  bool m_actionHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
