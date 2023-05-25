/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/model/SheetContentType.h>
#include <aws/quicksight/model/ParameterControl.h>
#include <aws/quicksight/model/FilterControl.h>
#include <aws/quicksight/model/Visual.h>
#include <aws/quicksight/model/SheetTextBox.h>
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
    AWS_QUICKSIGHT_API SheetDefinition();
    AWS_QUICKSIGHT_API SheetDefinition(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API SheetDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The unique identifier of a sheet.</p>
     */
    inline const Aws::String& GetSheetId() const{ return m_sheetId; }

    /**
     * <p>The unique identifier of a sheet.</p>
     */
    inline bool SheetIdHasBeenSet() const { return m_sheetIdHasBeenSet; }

    /**
     * <p>The unique identifier of a sheet.</p>
     */
    inline void SetSheetId(const Aws::String& value) { m_sheetIdHasBeenSet = true; m_sheetId = value; }

    /**
     * <p>The unique identifier of a sheet.</p>
     */
    inline void SetSheetId(Aws::String&& value) { m_sheetIdHasBeenSet = true; m_sheetId = std::move(value); }

    /**
     * <p>The unique identifier of a sheet.</p>
     */
    inline void SetSheetId(const char* value) { m_sheetIdHasBeenSet = true; m_sheetId.assign(value); }

    /**
     * <p>The unique identifier of a sheet.</p>
     */
    inline SheetDefinition& WithSheetId(const Aws::String& value) { SetSheetId(value); return *this;}

    /**
     * <p>The unique identifier of a sheet.</p>
     */
    inline SheetDefinition& WithSheetId(Aws::String&& value) { SetSheetId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of a sheet.</p>
     */
    inline SheetDefinition& WithSheetId(const char* value) { SetSheetId(value); return *this;}


    /**
     * <p>The title of the sheet.</p>
     */
    inline const Aws::String& GetTitle() const{ return m_title; }

    /**
     * <p>The title of the sheet.</p>
     */
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }

    /**
     * <p>The title of the sheet.</p>
     */
    inline void SetTitle(const Aws::String& value) { m_titleHasBeenSet = true; m_title = value; }

    /**
     * <p>The title of the sheet.</p>
     */
    inline void SetTitle(Aws::String&& value) { m_titleHasBeenSet = true; m_title = std::move(value); }

    /**
     * <p>The title of the sheet.</p>
     */
    inline void SetTitle(const char* value) { m_titleHasBeenSet = true; m_title.assign(value); }

    /**
     * <p>The title of the sheet.</p>
     */
    inline SheetDefinition& WithTitle(const Aws::String& value) { SetTitle(value); return *this;}

    /**
     * <p>The title of the sheet.</p>
     */
    inline SheetDefinition& WithTitle(Aws::String&& value) { SetTitle(std::move(value)); return *this;}

    /**
     * <p>The title of the sheet.</p>
     */
    inline SheetDefinition& WithTitle(const char* value) { SetTitle(value); return *this;}


    /**
     * <p>A description of the sheet.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of the sheet.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description of the sheet.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description of the sheet.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description of the sheet.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description of the sheet.</p>
     */
    inline SheetDefinition& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the sheet.</p>
     */
    inline SheetDefinition& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the sheet.</p>
     */
    inline SheetDefinition& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The name of the sheet. This name is displayed on the sheet's tab in the
     * Amazon QuickSight console.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the sheet. This name is displayed on the sheet's tab in the
     * Amazon QuickSight console.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the sheet. This name is displayed on the sheet's tab in the
     * Amazon QuickSight console.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the sheet. This name is displayed on the sheet's tab in the
     * Amazon QuickSight console.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the sheet. This name is displayed on the sheet's tab in the
     * Amazon QuickSight console.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the sheet. This name is displayed on the sheet's tab in the
     * Amazon QuickSight console.</p>
     */
    inline SheetDefinition& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the sheet. This name is displayed on the sheet's tab in the
     * Amazon QuickSight console.</p>
     */
    inline SheetDefinition& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the sheet. This name is displayed on the sheet's tab in the
     * Amazon QuickSight console.</p>
     */
    inline SheetDefinition& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The list of parameter controls that are on a sheet.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/parameters-controls.html">Using
     * a Control with a Parameter in Amazon QuickSight</a> in the <i>Amazon QuickSight
     * User Guide</i>.</p>
     */
    inline const Aws::Vector<ParameterControl>& GetParameterControls() const{ return m_parameterControls; }

    /**
     * <p>The list of parameter controls that are on a sheet.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/parameters-controls.html">Using
     * a Control with a Parameter in Amazon QuickSight</a> in the <i>Amazon QuickSight
     * User Guide</i>.</p>
     */
    inline bool ParameterControlsHasBeenSet() const { return m_parameterControlsHasBeenSet; }

    /**
     * <p>The list of parameter controls that are on a sheet.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/parameters-controls.html">Using
     * a Control with a Parameter in Amazon QuickSight</a> in the <i>Amazon QuickSight
     * User Guide</i>.</p>
     */
    inline void SetParameterControls(const Aws::Vector<ParameterControl>& value) { m_parameterControlsHasBeenSet = true; m_parameterControls = value; }

    /**
     * <p>The list of parameter controls that are on a sheet.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/parameters-controls.html">Using
     * a Control with a Parameter in Amazon QuickSight</a> in the <i>Amazon QuickSight
     * User Guide</i>.</p>
     */
    inline void SetParameterControls(Aws::Vector<ParameterControl>&& value) { m_parameterControlsHasBeenSet = true; m_parameterControls = std::move(value); }

    /**
     * <p>The list of parameter controls that are on a sheet.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/parameters-controls.html">Using
     * a Control with a Parameter in Amazon QuickSight</a> in the <i>Amazon QuickSight
     * User Guide</i>.</p>
     */
    inline SheetDefinition& WithParameterControls(const Aws::Vector<ParameterControl>& value) { SetParameterControls(value); return *this;}

    /**
     * <p>The list of parameter controls that are on a sheet.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/parameters-controls.html">Using
     * a Control with a Parameter in Amazon QuickSight</a> in the <i>Amazon QuickSight
     * User Guide</i>.</p>
     */
    inline SheetDefinition& WithParameterControls(Aws::Vector<ParameterControl>&& value) { SetParameterControls(std::move(value)); return *this;}

    /**
     * <p>The list of parameter controls that are on a sheet.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/parameters-controls.html">Using
     * a Control with a Parameter in Amazon QuickSight</a> in the <i>Amazon QuickSight
     * User Guide</i>.</p>
     */
    inline SheetDefinition& AddParameterControls(const ParameterControl& value) { m_parameterControlsHasBeenSet = true; m_parameterControls.push_back(value); return *this; }

    /**
     * <p>The list of parameter controls that are on a sheet.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/parameters-controls.html">Using
     * a Control with a Parameter in Amazon QuickSight</a> in the <i>Amazon QuickSight
     * User Guide</i>.</p>
     */
    inline SheetDefinition& AddParameterControls(ParameterControl&& value) { m_parameterControlsHasBeenSet = true; m_parameterControls.push_back(std::move(value)); return *this; }


    /**
     * <p>The list of filter controls that are on a sheet.</p> <p>For more information,
     * see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/filter-controls.html">Adding
     * filter controls to analysis sheets</a> in the <i>Amazon QuickSight User
     * Guide</i>.</p>
     */
    inline const Aws::Vector<FilterControl>& GetFilterControls() const{ return m_filterControls; }

    /**
     * <p>The list of filter controls that are on a sheet.</p> <p>For more information,
     * see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/filter-controls.html">Adding
     * filter controls to analysis sheets</a> in the <i>Amazon QuickSight User
     * Guide</i>.</p>
     */
    inline bool FilterControlsHasBeenSet() const { return m_filterControlsHasBeenSet; }

    /**
     * <p>The list of filter controls that are on a sheet.</p> <p>For more information,
     * see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/filter-controls.html">Adding
     * filter controls to analysis sheets</a> in the <i>Amazon QuickSight User
     * Guide</i>.</p>
     */
    inline void SetFilterControls(const Aws::Vector<FilterControl>& value) { m_filterControlsHasBeenSet = true; m_filterControls = value; }

    /**
     * <p>The list of filter controls that are on a sheet.</p> <p>For more information,
     * see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/filter-controls.html">Adding
     * filter controls to analysis sheets</a> in the <i>Amazon QuickSight User
     * Guide</i>.</p>
     */
    inline void SetFilterControls(Aws::Vector<FilterControl>&& value) { m_filterControlsHasBeenSet = true; m_filterControls = std::move(value); }

    /**
     * <p>The list of filter controls that are on a sheet.</p> <p>For more information,
     * see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/filter-controls.html">Adding
     * filter controls to analysis sheets</a> in the <i>Amazon QuickSight User
     * Guide</i>.</p>
     */
    inline SheetDefinition& WithFilterControls(const Aws::Vector<FilterControl>& value) { SetFilterControls(value); return *this;}

    /**
     * <p>The list of filter controls that are on a sheet.</p> <p>For more information,
     * see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/filter-controls.html">Adding
     * filter controls to analysis sheets</a> in the <i>Amazon QuickSight User
     * Guide</i>.</p>
     */
    inline SheetDefinition& WithFilterControls(Aws::Vector<FilterControl>&& value) { SetFilterControls(std::move(value)); return *this;}

    /**
     * <p>The list of filter controls that are on a sheet.</p> <p>For more information,
     * see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/filter-controls.html">Adding
     * filter controls to analysis sheets</a> in the <i>Amazon QuickSight User
     * Guide</i>.</p>
     */
    inline SheetDefinition& AddFilterControls(const FilterControl& value) { m_filterControlsHasBeenSet = true; m_filterControls.push_back(value); return *this; }

    /**
     * <p>The list of filter controls that are on a sheet.</p> <p>For more information,
     * see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/filter-controls.html">Adding
     * filter controls to analysis sheets</a> in the <i>Amazon QuickSight User
     * Guide</i>.</p>
     */
    inline SheetDefinition& AddFilterControls(FilterControl&& value) { m_filterControlsHasBeenSet = true; m_filterControls.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of the visuals that are on a sheet. Visual placement is determined by
     * the layout of the sheet.</p>
     */
    inline const Aws::Vector<Visual>& GetVisuals() const{ return m_visuals; }

    /**
     * <p>A list of the visuals that are on a sheet. Visual placement is determined by
     * the layout of the sheet.</p>
     */
    inline bool VisualsHasBeenSet() const { return m_visualsHasBeenSet; }

    /**
     * <p>A list of the visuals that are on a sheet. Visual placement is determined by
     * the layout of the sheet.</p>
     */
    inline void SetVisuals(const Aws::Vector<Visual>& value) { m_visualsHasBeenSet = true; m_visuals = value; }

    /**
     * <p>A list of the visuals that are on a sheet. Visual placement is determined by
     * the layout of the sheet.</p>
     */
    inline void SetVisuals(Aws::Vector<Visual>&& value) { m_visualsHasBeenSet = true; m_visuals = std::move(value); }

    /**
     * <p>A list of the visuals that are on a sheet. Visual placement is determined by
     * the layout of the sheet.</p>
     */
    inline SheetDefinition& WithVisuals(const Aws::Vector<Visual>& value) { SetVisuals(value); return *this;}

    /**
     * <p>A list of the visuals that are on a sheet. Visual placement is determined by
     * the layout of the sheet.</p>
     */
    inline SheetDefinition& WithVisuals(Aws::Vector<Visual>&& value) { SetVisuals(std::move(value)); return *this;}

    /**
     * <p>A list of the visuals that are on a sheet. Visual placement is determined by
     * the layout of the sheet.</p>
     */
    inline SheetDefinition& AddVisuals(const Visual& value) { m_visualsHasBeenSet = true; m_visuals.push_back(value); return *this; }

    /**
     * <p>A list of the visuals that are on a sheet. Visual placement is determined by
     * the layout of the sheet.</p>
     */
    inline SheetDefinition& AddVisuals(Visual&& value) { m_visualsHasBeenSet = true; m_visuals.push_back(std::move(value)); return *this; }


    /**
     * <p>The text boxes that are on a sheet.</p>
     */
    inline const Aws::Vector<SheetTextBox>& GetTextBoxes() const{ return m_textBoxes; }

    /**
     * <p>The text boxes that are on a sheet.</p>
     */
    inline bool TextBoxesHasBeenSet() const { return m_textBoxesHasBeenSet; }

    /**
     * <p>The text boxes that are on a sheet.</p>
     */
    inline void SetTextBoxes(const Aws::Vector<SheetTextBox>& value) { m_textBoxesHasBeenSet = true; m_textBoxes = value; }

    /**
     * <p>The text boxes that are on a sheet.</p>
     */
    inline void SetTextBoxes(Aws::Vector<SheetTextBox>&& value) { m_textBoxesHasBeenSet = true; m_textBoxes = std::move(value); }

    /**
     * <p>The text boxes that are on a sheet.</p>
     */
    inline SheetDefinition& WithTextBoxes(const Aws::Vector<SheetTextBox>& value) { SetTextBoxes(value); return *this;}

    /**
     * <p>The text boxes that are on a sheet.</p>
     */
    inline SheetDefinition& WithTextBoxes(Aws::Vector<SheetTextBox>&& value) { SetTextBoxes(std::move(value)); return *this;}

    /**
     * <p>The text boxes that are on a sheet.</p>
     */
    inline SheetDefinition& AddTextBoxes(const SheetTextBox& value) { m_textBoxesHasBeenSet = true; m_textBoxes.push_back(value); return *this; }

    /**
     * <p>The text boxes that are on a sheet.</p>
     */
    inline SheetDefinition& AddTextBoxes(SheetTextBox&& value) { m_textBoxesHasBeenSet = true; m_textBoxes.push_back(std::move(value)); return *this; }


    /**
     * <p>Layouts define how the components of a sheet are arranged.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/types-of-layout.html">Types
     * of layout</a> in the <i>Amazon QuickSight User Guide</i>.</p>
     */
    inline const Aws::Vector<Layout>& GetLayouts() const{ return m_layouts; }

    /**
     * <p>Layouts define how the components of a sheet are arranged.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/types-of-layout.html">Types
     * of layout</a> in the <i>Amazon QuickSight User Guide</i>.</p>
     */
    inline bool LayoutsHasBeenSet() const { return m_layoutsHasBeenSet; }

    /**
     * <p>Layouts define how the components of a sheet are arranged.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/types-of-layout.html">Types
     * of layout</a> in the <i>Amazon QuickSight User Guide</i>.</p>
     */
    inline void SetLayouts(const Aws::Vector<Layout>& value) { m_layoutsHasBeenSet = true; m_layouts = value; }

    /**
     * <p>Layouts define how the components of a sheet are arranged.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/types-of-layout.html">Types
     * of layout</a> in the <i>Amazon QuickSight User Guide</i>.</p>
     */
    inline void SetLayouts(Aws::Vector<Layout>&& value) { m_layoutsHasBeenSet = true; m_layouts = std::move(value); }

    /**
     * <p>Layouts define how the components of a sheet are arranged.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/types-of-layout.html">Types
     * of layout</a> in the <i>Amazon QuickSight User Guide</i>.</p>
     */
    inline SheetDefinition& WithLayouts(const Aws::Vector<Layout>& value) { SetLayouts(value); return *this;}

    /**
     * <p>Layouts define how the components of a sheet are arranged.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/types-of-layout.html">Types
     * of layout</a> in the <i>Amazon QuickSight User Guide</i>.</p>
     */
    inline SheetDefinition& WithLayouts(Aws::Vector<Layout>&& value) { SetLayouts(std::move(value)); return *this;}

    /**
     * <p>Layouts define how the components of a sheet are arranged.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/types-of-layout.html">Types
     * of layout</a> in the <i>Amazon QuickSight User Guide</i>.</p>
     */
    inline SheetDefinition& AddLayouts(const Layout& value) { m_layoutsHasBeenSet = true; m_layouts.push_back(value); return *this; }

    /**
     * <p>Layouts define how the components of a sheet are arranged.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/types-of-layout.html">Types
     * of layout</a> in the <i>Amazon QuickSight User Guide</i>.</p>
     */
    inline SheetDefinition& AddLayouts(Layout&& value) { m_layoutsHasBeenSet = true; m_layouts.push_back(std::move(value)); return *this; }


    /**
     * <p>The control layouts of the sheet.</p>
     */
    inline const Aws::Vector<SheetControlLayout>& GetSheetControlLayouts() const{ return m_sheetControlLayouts; }

    /**
     * <p>The control layouts of the sheet.</p>
     */
    inline bool SheetControlLayoutsHasBeenSet() const { return m_sheetControlLayoutsHasBeenSet; }

    /**
     * <p>The control layouts of the sheet.</p>
     */
    inline void SetSheetControlLayouts(const Aws::Vector<SheetControlLayout>& value) { m_sheetControlLayoutsHasBeenSet = true; m_sheetControlLayouts = value; }

    /**
     * <p>The control layouts of the sheet.</p>
     */
    inline void SetSheetControlLayouts(Aws::Vector<SheetControlLayout>&& value) { m_sheetControlLayoutsHasBeenSet = true; m_sheetControlLayouts = std::move(value); }

    /**
     * <p>The control layouts of the sheet.</p>
     */
    inline SheetDefinition& WithSheetControlLayouts(const Aws::Vector<SheetControlLayout>& value) { SetSheetControlLayouts(value); return *this;}

    /**
     * <p>The control layouts of the sheet.</p>
     */
    inline SheetDefinition& WithSheetControlLayouts(Aws::Vector<SheetControlLayout>&& value) { SetSheetControlLayouts(std::move(value)); return *this;}

    /**
     * <p>The control layouts of the sheet.</p>
     */
    inline SheetDefinition& AddSheetControlLayouts(const SheetControlLayout& value) { m_sheetControlLayoutsHasBeenSet = true; m_sheetControlLayouts.push_back(value); return *this; }

    /**
     * <p>The control layouts of the sheet.</p>
     */
    inline SheetDefinition& AddSheetControlLayouts(SheetControlLayout&& value) { m_sheetControlLayoutsHasBeenSet = true; m_sheetControlLayouts.push_back(std::move(value)); return *this; }


    /**
     * <p>The layout content type of the sheet. Choose one of the following
     * options:</p> <ul> <li> <p> <code>PAGINATED</code>: Creates a sheet for a
     * paginated report.</p> </li> <li> <p> <code>INTERACTIVE</code>: Creates a sheet
     * for an interactive dashboard.</p> </li> </ul>
     */
    inline const SheetContentType& GetContentType() const{ return m_contentType; }

    /**
     * <p>The layout content type of the sheet. Choose one of the following
     * options:</p> <ul> <li> <p> <code>PAGINATED</code>: Creates a sheet for a
     * paginated report.</p> </li> <li> <p> <code>INTERACTIVE</code>: Creates a sheet
     * for an interactive dashboard.</p> </li> </ul>
     */
    inline bool ContentTypeHasBeenSet() const { return m_contentTypeHasBeenSet; }

    /**
     * <p>The layout content type of the sheet. Choose one of the following
     * options:</p> <ul> <li> <p> <code>PAGINATED</code>: Creates a sheet for a
     * paginated report.</p> </li> <li> <p> <code>INTERACTIVE</code>: Creates a sheet
     * for an interactive dashboard.</p> </li> </ul>
     */
    inline void SetContentType(const SheetContentType& value) { m_contentTypeHasBeenSet = true; m_contentType = value; }

    /**
     * <p>The layout content type of the sheet. Choose one of the following
     * options:</p> <ul> <li> <p> <code>PAGINATED</code>: Creates a sheet for a
     * paginated report.</p> </li> <li> <p> <code>INTERACTIVE</code>: Creates a sheet
     * for an interactive dashboard.</p> </li> </ul>
     */
    inline void SetContentType(SheetContentType&& value) { m_contentTypeHasBeenSet = true; m_contentType = std::move(value); }

    /**
     * <p>The layout content type of the sheet. Choose one of the following
     * options:</p> <ul> <li> <p> <code>PAGINATED</code>: Creates a sheet for a
     * paginated report.</p> </li> <li> <p> <code>INTERACTIVE</code>: Creates a sheet
     * for an interactive dashboard.</p> </li> </ul>
     */
    inline SheetDefinition& WithContentType(const SheetContentType& value) { SetContentType(value); return *this;}

    /**
     * <p>The layout content type of the sheet. Choose one of the following
     * options:</p> <ul> <li> <p> <code>PAGINATED</code>: Creates a sheet for a
     * paginated report.</p> </li> <li> <p> <code>INTERACTIVE</code>: Creates a sheet
     * for an interactive dashboard.</p> </li> </ul>
     */
    inline SheetDefinition& WithContentType(SheetContentType&& value) { SetContentType(std::move(value)); return *this;}

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

    Aws::Vector<Layout> m_layouts;
    bool m_layoutsHasBeenSet = false;

    Aws::Vector<SheetControlLayout> m_sheetControlLayouts;
    bool m_sheetControlLayoutsHasBeenSet = false;

    SheetContentType m_contentType;
    bool m_contentTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
