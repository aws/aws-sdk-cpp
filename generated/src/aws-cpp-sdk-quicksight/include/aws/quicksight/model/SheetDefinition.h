/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/model/SheetContentType.h>
#include <aws/quicksight/model/VisualCustomActionDefaults.h>
#include <aws/quicksight/model/ParameterControl.h>
#include <aws/quicksight/model/FilterControl.h>
#include <aws/quicksight/model/Visual.h>
#include <aws/quicksight/model/SheetTextBox.h>
#include <aws/quicksight/model/SheetImage.h>
#include <aws/quicksight/model/Layout.h>
#include <aws/quicksight/model/SheetControlLayout.h>
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
   * <p>A sheet is an object that contains a set of visuals that are viewed together
   * on one page in a paginated report. Every analysis and dashboard must contain at
   * least one sheet.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/SheetDefinition">AWS
   * API Reference</a></p>
   */
  class SheetDefinition
  {
  public:
    AWS_QUICKSIGHT_API SheetDefinition() = default;
    AWS_QUICKSIGHT_API SheetDefinition(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API SheetDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier of a sheet.</p>
     */
    inline const Aws::String& GetSheetId() const { return m_sheetId; }
    inline bool SheetIdHasBeenSet() const { return m_sheetIdHasBeenSet; }
    template<typename SheetIdT = Aws::String>
    void SetSheetId(SheetIdT&& value) { m_sheetIdHasBeenSet = true; m_sheetId = std::forward<SheetIdT>(value); }
    template<typename SheetIdT = Aws::String>
    SheetDefinition& WithSheetId(SheetIdT&& value) { SetSheetId(std::forward<SheetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The title of the sheet.</p>
     */
    inline const Aws::String& GetTitle() const { return m_title; }
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }
    template<typename TitleT = Aws::String>
    void SetTitle(TitleT&& value) { m_titleHasBeenSet = true; m_title = std::forward<TitleT>(value); }
    template<typename TitleT = Aws::String>
    SheetDefinition& WithTitle(TitleT&& value) { SetTitle(std::forward<TitleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the sheet.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    SheetDefinition& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the sheet. This name is displayed on the sheet's tab in the
     * QuickSight console.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    SheetDefinition& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of parameter controls that are on a sheet.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/parameters-controls.html">Using
     * a Control with a Parameter in Amazon QuickSight</a> in the <i>Amazon QuickSight
     * User Guide</i>.</p>
     */
    inline const Aws::Vector<ParameterControl>& GetParameterControls() const { return m_parameterControls; }
    inline bool ParameterControlsHasBeenSet() const { return m_parameterControlsHasBeenSet; }
    template<typename ParameterControlsT = Aws::Vector<ParameterControl>>
    void SetParameterControls(ParameterControlsT&& value) { m_parameterControlsHasBeenSet = true; m_parameterControls = std::forward<ParameterControlsT>(value); }
    template<typename ParameterControlsT = Aws::Vector<ParameterControl>>
    SheetDefinition& WithParameterControls(ParameterControlsT&& value) { SetParameterControls(std::forward<ParameterControlsT>(value)); return *this;}
    template<typename ParameterControlsT = ParameterControl>
    SheetDefinition& AddParameterControls(ParameterControlsT&& value) { m_parameterControlsHasBeenSet = true; m_parameterControls.emplace_back(std::forward<ParameterControlsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The list of filter controls that are on a sheet.</p> <p>For more information,
     * see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/filter-controls.html">Adding
     * filter controls to analysis sheets</a> in the <i>Amazon QuickSight User
     * Guide</i>.</p>
     */
    inline const Aws::Vector<FilterControl>& GetFilterControls() const { return m_filterControls; }
    inline bool FilterControlsHasBeenSet() const { return m_filterControlsHasBeenSet; }
    template<typename FilterControlsT = Aws::Vector<FilterControl>>
    void SetFilterControls(FilterControlsT&& value) { m_filterControlsHasBeenSet = true; m_filterControls = std::forward<FilterControlsT>(value); }
    template<typename FilterControlsT = Aws::Vector<FilterControl>>
    SheetDefinition& WithFilterControls(FilterControlsT&& value) { SetFilterControls(std::forward<FilterControlsT>(value)); return *this;}
    template<typename FilterControlsT = FilterControl>
    SheetDefinition& AddFilterControls(FilterControlsT&& value) { m_filterControlsHasBeenSet = true; m_filterControls.emplace_back(std::forward<FilterControlsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of the visuals that are on a sheet. Visual placement is determined by
     * the layout of the sheet.</p>
     */
    inline const Aws::Vector<Visual>& GetVisuals() const { return m_visuals; }
    inline bool VisualsHasBeenSet() const { return m_visualsHasBeenSet; }
    template<typename VisualsT = Aws::Vector<Visual>>
    void SetVisuals(VisualsT&& value) { m_visualsHasBeenSet = true; m_visuals = std::forward<VisualsT>(value); }
    template<typename VisualsT = Aws::Vector<Visual>>
    SheetDefinition& WithVisuals(VisualsT&& value) { SetVisuals(std::forward<VisualsT>(value)); return *this;}
    template<typename VisualsT = Visual>
    SheetDefinition& AddVisuals(VisualsT&& value) { m_visualsHasBeenSet = true; m_visuals.emplace_back(std::forward<VisualsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The text boxes that are on a sheet.</p>
     */
    inline const Aws::Vector<SheetTextBox>& GetTextBoxes() const { return m_textBoxes; }
    inline bool TextBoxesHasBeenSet() const { return m_textBoxesHasBeenSet; }
    template<typename TextBoxesT = Aws::Vector<SheetTextBox>>
    void SetTextBoxes(TextBoxesT&& value) { m_textBoxesHasBeenSet = true; m_textBoxes = std::forward<TextBoxesT>(value); }
    template<typename TextBoxesT = Aws::Vector<SheetTextBox>>
    SheetDefinition& WithTextBoxes(TextBoxesT&& value) { SetTextBoxes(std::forward<TextBoxesT>(value)); return *this;}
    template<typename TextBoxesT = SheetTextBox>
    SheetDefinition& AddTextBoxes(TextBoxesT&& value) { m_textBoxesHasBeenSet = true; m_textBoxes.emplace_back(std::forward<TextBoxesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of images on a sheet.</p>
     */
    inline const Aws::Vector<SheetImage>& GetImages() const { return m_images; }
    inline bool ImagesHasBeenSet() const { return m_imagesHasBeenSet; }
    template<typename ImagesT = Aws::Vector<SheetImage>>
    void SetImages(ImagesT&& value) { m_imagesHasBeenSet = true; m_images = std::forward<ImagesT>(value); }
    template<typename ImagesT = Aws::Vector<SheetImage>>
    SheetDefinition& WithImages(ImagesT&& value) { SetImages(std::forward<ImagesT>(value)); return *this;}
    template<typename ImagesT = SheetImage>
    SheetDefinition& AddImages(ImagesT&& value) { m_imagesHasBeenSet = true; m_images.emplace_back(std::forward<ImagesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Layouts define how the components of a sheet are arranged.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/types-of-layout.html">Types
     * of layout</a> in the <i>Amazon QuickSight User Guide</i>.</p>
     */
    inline const Aws::Vector<Layout>& GetLayouts() const { return m_layouts; }
    inline bool LayoutsHasBeenSet() const { return m_layoutsHasBeenSet; }
    template<typename LayoutsT = Aws::Vector<Layout>>
    void SetLayouts(LayoutsT&& value) { m_layoutsHasBeenSet = true; m_layouts = std::forward<LayoutsT>(value); }
    template<typename LayoutsT = Aws::Vector<Layout>>
    SheetDefinition& WithLayouts(LayoutsT&& value) { SetLayouts(std::forward<LayoutsT>(value)); return *this;}
    template<typename LayoutsT = Layout>
    SheetDefinition& AddLayouts(LayoutsT&& value) { m_layoutsHasBeenSet = true; m_layouts.emplace_back(std::forward<LayoutsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The control layouts of the sheet.</p>
     */
    inline const Aws::Vector<SheetControlLayout>& GetSheetControlLayouts() const { return m_sheetControlLayouts; }
    inline bool SheetControlLayoutsHasBeenSet() const { return m_sheetControlLayoutsHasBeenSet; }
    template<typename SheetControlLayoutsT = Aws::Vector<SheetControlLayout>>
    void SetSheetControlLayouts(SheetControlLayoutsT&& value) { m_sheetControlLayoutsHasBeenSet = true; m_sheetControlLayouts = std::forward<SheetControlLayoutsT>(value); }
    template<typename SheetControlLayoutsT = Aws::Vector<SheetControlLayout>>
    SheetDefinition& WithSheetControlLayouts(SheetControlLayoutsT&& value) { SetSheetControlLayouts(std::forward<SheetControlLayoutsT>(value)); return *this;}
    template<typename SheetControlLayoutsT = SheetControlLayout>
    SheetDefinition& AddSheetControlLayouts(SheetControlLayoutsT&& value) { m_sheetControlLayoutsHasBeenSet = true; m_sheetControlLayouts.emplace_back(std::forward<SheetControlLayoutsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The layout content type of the sheet. Choose one of the following
     * options:</p> <ul> <li> <p> <code>PAGINATED</code>: Creates a sheet for a
     * paginated report.</p> </li> <li> <p> <code>INTERACTIVE</code>: Creates a sheet
     * for an interactive dashboard.</p> </li> </ul>
     */
    inline SheetContentType GetContentType() const { return m_contentType; }
    inline bool ContentTypeHasBeenSet() const { return m_contentTypeHasBeenSet; }
    inline void SetContentType(SheetContentType value) { m_contentTypeHasBeenSet = true; m_contentType = value; }
    inline SheetDefinition& WithContentType(SheetContentType value) { SetContentType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of visual custom actions for the sheet.</p>
     */
    inline const VisualCustomActionDefaults& GetCustomActionDefaults() const { return m_customActionDefaults; }
    inline bool CustomActionDefaultsHasBeenSet() const { return m_customActionDefaultsHasBeenSet; }
    template<typename CustomActionDefaultsT = VisualCustomActionDefaults>
    void SetCustomActionDefaults(CustomActionDefaultsT&& value) { m_customActionDefaultsHasBeenSet = true; m_customActionDefaults = std::forward<CustomActionDefaultsT>(value); }
    template<typename CustomActionDefaultsT = VisualCustomActionDefaults>
    SheetDefinition& WithCustomActionDefaults(CustomActionDefaultsT&& value) { SetCustomActionDefaults(std::forward<CustomActionDefaultsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_sheetId;
    bool m_sheetIdHasBeenSet = false;

    Aws::String m_title;
    bool m_titleHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<ParameterControl> m_parameterControls;
    bool m_parameterControlsHasBeenSet = false;

    Aws::Vector<FilterControl> m_filterControls;
    bool m_filterControlsHasBeenSet = false;

    Aws::Vector<Visual> m_visuals;
    bool m_visualsHasBeenSet = false;

    Aws::Vector<SheetTextBox> m_textBoxes;
    bool m_textBoxesHasBeenSet = false;

    Aws::Vector<SheetImage> m_images;
    bool m_imagesHasBeenSet = false;

    Aws::Vector<Layout> m_layouts;
    bool m_layoutsHasBeenSet = false;

    Aws::Vector<SheetControlLayout> m_sheetControlLayouts;
    bool m_sheetControlLayoutsHasBeenSet = false;

    SheetContentType m_contentType{SheetContentType::NOT_SET};
    bool m_contentTypeHasBeenSet = false;

    VisualCustomActionDefaults m_customActionDefaults;
    bool m_customActionDefaultsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
