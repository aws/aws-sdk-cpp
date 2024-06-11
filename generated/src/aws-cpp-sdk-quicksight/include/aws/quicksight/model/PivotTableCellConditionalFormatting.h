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
    AWS_QUICKSIGHT_API PivotTableCellConditionalFormatting();
    AWS_QUICKSIGHT_API PivotTableCellConditionalFormatting(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API PivotTableCellConditionalFormatting& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The field ID of the cell for conditional formatting.</p>
     */
    inline const Aws::String& GetFieldId() const{ return m_fieldId; }
    inline bool FieldIdHasBeenSet() const { return m_fieldIdHasBeenSet; }
    inline void SetFieldId(const Aws::String& value) { m_fieldIdHasBeenSet = true; m_fieldId = value; }
    inline void SetFieldId(Aws::String&& value) { m_fieldIdHasBeenSet = true; m_fieldId = std::move(value); }
    inline void SetFieldId(const char* value) { m_fieldIdHasBeenSet = true; m_fieldId.assign(value); }
    inline PivotTableCellConditionalFormatting& WithFieldId(const Aws::String& value) { SetFieldId(value); return *this;}
    inline PivotTableCellConditionalFormatting& WithFieldId(Aws::String&& value) { SetFieldId(std::move(value)); return *this;}
    inline PivotTableCellConditionalFormatting& WithFieldId(const char* value) { SetFieldId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The text format of the cell for conditional formatting.</p>
     */
    inline const TextConditionalFormat& GetTextFormat() const{ return m_textFormat; }
    inline bool TextFormatHasBeenSet() const { return m_textFormatHasBeenSet; }
    inline void SetTextFormat(const TextConditionalFormat& value) { m_textFormatHasBeenSet = true; m_textFormat = value; }
    inline void SetTextFormat(TextConditionalFormat&& value) { m_textFormatHasBeenSet = true; m_textFormat = std::move(value); }
    inline PivotTableCellConditionalFormatting& WithTextFormat(const TextConditionalFormat& value) { SetTextFormat(value); return *this;}
    inline PivotTableCellConditionalFormatting& WithTextFormat(TextConditionalFormat&& value) { SetTextFormat(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The scope of the cell for conditional formatting.</p>
     */
    inline const PivotTableConditionalFormattingScope& GetScope() const{ return m_scope; }
    inline bool ScopeHasBeenSet() const { return m_scopeHasBeenSet; }
    inline void SetScope(const PivotTableConditionalFormattingScope& value) { m_scopeHasBeenSet = true; m_scope = value; }
    inline void SetScope(PivotTableConditionalFormattingScope&& value) { m_scopeHasBeenSet = true; m_scope = std::move(value); }
    inline PivotTableCellConditionalFormatting& WithScope(const PivotTableConditionalFormattingScope& value) { SetScope(value); return *this;}
    inline PivotTableCellConditionalFormatting& WithScope(PivotTableConditionalFormattingScope&& value) { SetScope(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of cell scopes for conditional formatting.</p>
     */
    inline const Aws::Vector<PivotTableConditionalFormattingScope>& GetScopes() const{ return m_scopes; }
    inline bool ScopesHasBeenSet() const { return m_scopesHasBeenSet; }
    inline void SetScopes(const Aws::Vector<PivotTableConditionalFormattingScope>& value) { m_scopesHasBeenSet = true; m_scopes = value; }
    inline void SetScopes(Aws::Vector<PivotTableConditionalFormattingScope>&& value) { m_scopesHasBeenSet = true; m_scopes = std::move(value); }
    inline PivotTableCellConditionalFormatting& WithScopes(const Aws::Vector<PivotTableConditionalFormattingScope>& value) { SetScopes(value); return *this;}
    inline PivotTableCellConditionalFormatting& WithScopes(Aws::Vector<PivotTableConditionalFormattingScope>&& value) { SetScopes(std::move(value)); return *this;}
    inline PivotTableCellConditionalFormatting& AddScopes(const PivotTableConditionalFormattingScope& value) { m_scopesHasBeenSet = true; m_scopes.push_back(value); return *this; }
    inline PivotTableCellConditionalFormatting& AddScopes(PivotTableConditionalFormattingScope&& value) { m_scopesHasBeenSet = true; m_scopes.push_back(std::move(value)); return *this; }
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
