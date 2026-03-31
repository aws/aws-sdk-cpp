/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/Layout.h>
#include <aws/quicksight/model/SheetImage.h>
#include <aws/quicksight/model/SheetTextBox.h>
#include <aws/quicksight/model/Visual.h>

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
 * <p>A tooltip sheet is an object that contains a set of visuals that are used as
 * a tooltip. Every analysis and dashboard must contain at least one non-tooltip
 * sheet.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/TooltipSheetDefinition">AWS
 * API Reference</a></p>
 */
class TooltipSheetDefinition {
 public:
  AWS_QUICKSIGHT_API TooltipSheetDefinition() = default;
  AWS_QUICKSIGHT_API TooltipSheetDefinition(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API TooltipSheetDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique identifier of a tooltip sheet.</p>
   */
  inline const Aws::String& GetSheetId() const { return m_sheetId; }
  inline bool SheetIdHasBeenSet() const { return m_sheetIdHasBeenSet; }
  template <typename SheetIdT = Aws::String>
  void SetSheetId(SheetIdT&& value) {
    m_sheetIdHasBeenSet = true;
    m_sheetId = std::forward<SheetIdT>(value);
  }
  template <typename SheetIdT = Aws::String>
  TooltipSheetDefinition& WithSheetId(SheetIdT&& value) {
    SetSheetId(std::forward<SheetIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the tooltip sheet. This name is displayed on the sheet's tab in
   * the Quick console.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  TooltipSheetDefinition& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of the visuals that are on a tooltip sheet.</p>
   */
  inline const Aws::Vector<Visual>& GetVisuals() const { return m_visuals; }
  inline bool VisualsHasBeenSet() const { return m_visualsHasBeenSet; }
  template <typename VisualsT = Aws::Vector<Visual>>
  void SetVisuals(VisualsT&& value) {
    m_visualsHasBeenSet = true;
    m_visuals = std::forward<VisualsT>(value);
  }
  template <typename VisualsT = Aws::Vector<Visual>>
  TooltipSheetDefinition& WithVisuals(VisualsT&& value) {
    SetVisuals(std::forward<VisualsT>(value));
    return *this;
  }
  template <typename VisualsT = Visual>
  TooltipSheetDefinition& AddVisuals(VisualsT&& value) {
    m_visualsHasBeenSet = true;
    m_visuals.emplace_back(std::forward<VisualsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The text boxes that are on a tooltip sheet.</p>
   */
  inline const Aws::Vector<SheetTextBox>& GetTextBoxes() const { return m_textBoxes; }
  inline bool TextBoxesHasBeenSet() const { return m_textBoxesHasBeenSet; }
  template <typename TextBoxesT = Aws::Vector<SheetTextBox>>
  void SetTextBoxes(TextBoxesT&& value) {
    m_textBoxesHasBeenSet = true;
    m_textBoxes = std::forward<TextBoxesT>(value);
  }
  template <typename TextBoxesT = Aws::Vector<SheetTextBox>>
  TooltipSheetDefinition& WithTextBoxes(TextBoxesT&& value) {
    SetTextBoxes(std::forward<TextBoxesT>(value));
    return *this;
  }
  template <typename TextBoxesT = SheetTextBox>
  TooltipSheetDefinition& AddTextBoxes(TextBoxesT&& value) {
    m_textBoxesHasBeenSet = true;
    m_textBoxes.emplace_back(std::forward<TextBoxesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of images on a tooltip sheet.</p>
   */
  inline const Aws::Vector<SheetImage>& GetImages() const { return m_images; }
  inline bool ImagesHasBeenSet() const { return m_imagesHasBeenSet; }
  template <typename ImagesT = Aws::Vector<SheetImage>>
  void SetImages(ImagesT&& value) {
    m_imagesHasBeenSet = true;
    m_images = std::forward<ImagesT>(value);
  }
  template <typename ImagesT = Aws::Vector<SheetImage>>
  TooltipSheetDefinition& WithImages(ImagesT&& value) {
    SetImages(std::forward<ImagesT>(value));
    return *this;
  }
  template <typename ImagesT = SheetImage>
  TooltipSheetDefinition& AddImages(ImagesT&& value) {
    m_imagesHasBeenSet = true;
    m_images.emplace_back(std::forward<ImagesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Layouts define how the components of a tooltip sheet are arranged.</p> <p>For
   * more information, see <a
   * href="https://docs.aws.amazon.com/quicksight/latest/user/types-of-layout.html">Types
   * of layout</a> in the <i>Amazon Quick Suite User Guide</i>.</p>
   */
  inline const Aws::Vector<Layout>& GetLayouts() const { return m_layouts; }
  inline bool LayoutsHasBeenSet() const { return m_layoutsHasBeenSet; }
  template <typename LayoutsT = Aws::Vector<Layout>>
  void SetLayouts(LayoutsT&& value) {
    m_layoutsHasBeenSet = true;
    m_layouts = std::forward<LayoutsT>(value);
  }
  template <typename LayoutsT = Aws::Vector<Layout>>
  TooltipSheetDefinition& WithLayouts(LayoutsT&& value) {
    SetLayouts(std::forward<LayoutsT>(value));
    return *this;
  }
  template <typename LayoutsT = Layout>
  TooltipSheetDefinition& AddLayouts(LayoutsT&& value) {
    m_layoutsHasBeenSet = true;
    m_layouts.emplace_back(std::forward<LayoutsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_sheetId;

  Aws::String m_name;

  Aws::Vector<Visual> m_visuals;

  Aws::Vector<SheetTextBox> m_textBoxes;

  Aws::Vector<SheetImage> m_images;

  Aws::Vector<Layout> m_layouts;
  bool m_sheetIdHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_visualsHasBeenSet = false;
  bool m_textBoxesHasBeenSet = false;
  bool m_imagesHasBeenSet = false;
  bool m_layoutsHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
