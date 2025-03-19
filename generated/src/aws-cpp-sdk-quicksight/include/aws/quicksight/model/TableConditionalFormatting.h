/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/model/TableConditionalFormattingOption.h>
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
   * <p>The conditional formatting for a <code>PivotTableVisual</code>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/TableConditionalFormatting">AWS
   * API Reference</a></p>
   */
  class TableConditionalFormatting
  {
  public:
    AWS_QUICKSIGHT_API TableConditionalFormatting() = default;
    AWS_QUICKSIGHT_API TableConditionalFormatting(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API TableConditionalFormatting& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Conditional formatting options for a <code>PivotTableVisual</code>.</p>
     */
    inline const Aws::Vector<TableConditionalFormattingOption>& GetConditionalFormattingOptions() const { return m_conditionalFormattingOptions; }
    inline bool ConditionalFormattingOptionsHasBeenSet() const { return m_conditionalFormattingOptionsHasBeenSet; }
    template<typename ConditionalFormattingOptionsT = Aws::Vector<TableConditionalFormattingOption>>
    void SetConditionalFormattingOptions(ConditionalFormattingOptionsT&& value) { m_conditionalFormattingOptionsHasBeenSet = true; m_conditionalFormattingOptions = std::forward<ConditionalFormattingOptionsT>(value); }
    template<typename ConditionalFormattingOptionsT = Aws::Vector<TableConditionalFormattingOption>>
    TableConditionalFormatting& WithConditionalFormattingOptions(ConditionalFormattingOptionsT&& value) { SetConditionalFormattingOptions(std::forward<ConditionalFormattingOptionsT>(value)); return *this;}
    template<typename ConditionalFormattingOptionsT = TableConditionalFormattingOption>
    TableConditionalFormatting& AddConditionalFormattingOptions(ConditionalFormattingOptionsT&& value) { m_conditionalFormattingOptionsHasBeenSet = true; m_conditionalFormattingOptions.emplace_back(std::forward<ConditionalFormattingOptionsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<TableConditionalFormattingOption> m_conditionalFormattingOptions;
    bool m_conditionalFormattingOptionsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
