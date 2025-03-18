/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/TextConditionalFormat.h>
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
   * <p>The cell conditional formatting option for a table.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/TableCellConditionalFormatting">AWS
   * API Reference</a></p>
   */
  class TableCellConditionalFormatting
  {
  public:
    AWS_QUICKSIGHT_API TableCellConditionalFormatting() = default;
    AWS_QUICKSIGHT_API TableCellConditionalFormatting(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API TableCellConditionalFormatting& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    TableCellConditionalFormatting& WithFieldId(FieldIdT&& value) { SetFieldId(std::forward<FieldIdT>(value)); return *this;}
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
    TableCellConditionalFormatting& WithTextFormat(TextFormatT&& value) { SetTextFormat(std::forward<TextFormatT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_fieldId;
    bool m_fieldIdHasBeenSet = false;

    TextConditionalFormat m_textFormat;
    bool m_textFormatHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
