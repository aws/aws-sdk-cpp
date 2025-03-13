/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/TextConditionalFormat.h>
#include <aws/quicksight/model/PivotTableConditionalFormattingScope.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>The cell conditional formatting option for a pivot table.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/PivotTableCellConditionalFormatting">AWS
   * API Reference</a></p>
   */
  class PivotTableCellConditionalFormatting
  {
  public:
    AWS_QUICKSIGHT_API PivotTableCellConditionalFormatting() = default;
    AWS_QUICKSIGHT_API PivotTableCellConditionalFormatting(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API PivotTableCellConditionalFormatting& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The field ID of the cell for conditional formatting.</p>
     */
    inline const Aws::String& GetFieldId() const { return m_fieldId; }
    inline bool FieldIdHasBeenSet() const { return m_fieldIdHasBeenSet; }
    template<typename FieldIdT = Aws::String>
    void SetFieldId(FieldIdT&& value) { m_fieldIdHasBeenSet = true; m_fieldId = std::forward<FieldIdT>(value); }
    template<typename FieldIdT = Aws::String>
    PivotTableCellConditionalFormatting& WithFieldId(FieldIdT&& value) { SetFieldId(std::forward<FieldIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The text format of the cell for conditional formatting.</p>
     */
    inline const TextConditionalFormat& GetTextFormat() const { return m_textFormat; }
    inline bool TextFormatHasBeenSet() const { return m_textFormatHasBeenSet; }
    template<typename TextFormatT = TextConditionalFormat>
    void SetTextFormat(TextFormatT&& value) { m_textFormatHasBeenSet = true; m_textFormat = std::forward<TextFormatT>(value); }
    template<typename TextFormatT = TextConditionalFormat>
    PivotTableCellConditionalFormatting& WithTextFormat(TextFormatT&& value) { SetTextFormat(std::forward<TextFormatT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The scope of the cell for conditional formatting.</p>
     */
    inline const PivotTableConditionalFormattingScope& GetScope() const { return m_scope; }
    inline bool ScopeHasBeenSet() const { return m_scopeHasBeenSet; }
    template<typename ScopeT = PivotTableConditionalFormattingScope>
    void SetScope(ScopeT&& value) { m_scopeHasBeenSet = true; m_scope = std::forward<ScopeT>(value); }
    template<typename ScopeT = PivotTableConditionalFormattingScope>
    PivotTableCellConditionalFormatting& WithScope(ScopeT&& value) { SetScope(std::forward<ScopeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of cell scopes for conditional formatting.</p>
     */
    inline const Aws::Vector<PivotTableConditionalFormattingScope>& GetScopes() const { return m_scopes; }
    inline bool ScopesHasBeenSet() const { return m_scopesHasBeenSet; }
    template<typename ScopesT = Aws::Vector<PivotTableConditionalFormattingScope>>
    void SetScopes(ScopesT&& value) { m_scopesHasBeenSet = true; m_scopes = std::forward<ScopesT>(value); }
    template<typename ScopesT = Aws::Vector<PivotTableConditionalFormattingScope>>
    PivotTableCellConditionalFormatting& WithScopes(ScopesT&& value) { SetScopes(std::forward<ScopesT>(value)); return *this;}
    template<typename ScopesT = PivotTableConditionalFormattingScope>
    PivotTableCellConditionalFormatting& AddScopes(ScopesT&& value) { m_scopesHasBeenSet = true; m_scopes.emplace_back(std::forward<ScopesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_fieldId;
    bool m_fieldIdHasBeenSet = false;

    TextConditionalFormat m_textFormat;
    bool m_textFormatHasBeenSet = false;

    PivotTableConditionalFormattingScope m_scope;
    bool m_scopeHasBeenSet = false;

    Aws::Vector<PivotTableConditionalFormattingScope> m_scopes;
    bool m_scopesHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
