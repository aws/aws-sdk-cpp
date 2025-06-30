/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/TextBoxInteractionOptions.h>
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
   * <p>A text box.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/SheetTextBox">AWS
   * API Reference</a></p>
   */
  class SheetTextBox
  {
  public:
    AWS_QUICKSIGHT_API SheetTextBox() = default;
    AWS_QUICKSIGHT_API SheetTextBox(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API SheetTextBox& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier for a text box. This identifier must be unique within
     * the context of a dashboard, template, or analysis. Two dashboards, analyses, or
     * templates can have text boxes that share identifiers.</p>
     */
    inline const Aws::String& GetSheetTextBoxId() const { return m_sheetTextBoxId; }
    inline bool SheetTextBoxIdHasBeenSet() const { return m_sheetTextBoxIdHasBeenSet; }
    template<typename SheetTextBoxIdT = Aws::String>
    void SetSheetTextBoxId(SheetTextBoxIdT&& value) { m_sheetTextBoxIdHasBeenSet = true; m_sheetTextBoxId = std::forward<SheetTextBoxIdT>(value); }
    template<typename SheetTextBoxIdT = Aws::String>
    SheetTextBox& WithSheetTextBoxId(SheetTextBoxIdT&& value) { SetSheetTextBoxId(std::forward<SheetTextBoxIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The content that is displayed in the text box.</p>
     */
    inline const Aws::String& GetContent() const { return m_content; }
    inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }
    template<typename ContentT = Aws::String>
    void SetContent(ContentT&& value) { m_contentHasBeenSet = true; m_content = std::forward<ContentT>(value); }
    template<typename ContentT = Aws::String>
    SheetTextBox& WithContent(ContentT&& value) { SetContent(std::forward<ContentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The general textbox interactions setup for a textbox.</p>
     */
    inline const TextBoxInteractionOptions& GetInteractions() const { return m_interactions; }
    inline bool InteractionsHasBeenSet() const { return m_interactionsHasBeenSet; }
    template<typename InteractionsT = TextBoxInteractionOptions>
    void SetInteractions(InteractionsT&& value) { m_interactionsHasBeenSet = true; m_interactions = std::forward<InteractionsT>(value); }
    template<typename InteractionsT = TextBoxInteractionOptions>
    SheetTextBox& WithInteractions(InteractionsT&& value) { SetInteractions(std::forward<InteractionsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_sheetTextBoxId;
    bool m_sheetTextBoxIdHasBeenSet = false;

    Aws::String m_content;
    bool m_contentHasBeenSet = false;

    TextBoxInteractionOptions m_interactions;
    bool m_interactionsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
