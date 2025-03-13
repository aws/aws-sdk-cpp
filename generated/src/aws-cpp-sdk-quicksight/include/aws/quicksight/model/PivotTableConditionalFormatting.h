/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/model/PivotTableConditionalFormattingOption.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/PivotTableConditionalFormatting">AWS
   * API Reference</a></p>
   */
  class PivotTableConditionalFormatting
  {
  public:
    AWS_QUICKSIGHT_API PivotTableConditionalFormatting() = default;
    AWS_QUICKSIGHT_API PivotTableConditionalFormatting(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API PivotTableConditionalFormatting& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Conditional formatting options for a <code>PivotTableVisual</code>.</p>
     */
    inline const Aws::Vector<PivotTableConditionalFormattingOption>& GetConditionalFormattingOptions() const { return m_conditionalFormattingOptions; }
    inline bool ConditionalFormattingOptionsHasBeenSet() const { return m_conditionalFormattingOptionsHasBeenSet; }
    template<typename ConditionalFormattingOptionsT = Aws::Vector<PivotTableConditionalFormattingOption>>
    void SetConditionalFormattingOptions(ConditionalFormattingOptionsT&& value) { m_conditionalFormattingOptionsHasBeenSet = true; m_conditionalFormattingOptions = std::forward<ConditionalFormattingOptionsT>(value); }
    template<typename ConditionalFormattingOptionsT = Aws::Vector<PivotTableConditionalFormattingOption>>
    PivotTableConditionalFormatting& WithConditionalFormattingOptions(ConditionalFormattingOptionsT&& value) { SetConditionalFormattingOptions(std::forward<ConditionalFormattingOptionsT>(value)); return *this;}
    template<typename ConditionalFormattingOptionsT = PivotTableConditionalFormattingOption>
    PivotTableConditionalFormatting& AddConditionalFormattingOptions(ConditionalFormattingOptionsT&& value) { m_conditionalFormattingOptionsHasBeenSet = true; m_conditionalFormattingOptions.emplace_back(std::forward<ConditionalFormattingOptionsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<PivotTableConditionalFormattingOption> m_conditionalFormattingOptions;
    bool m_conditionalFormattingOptionsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
