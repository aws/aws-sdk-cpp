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
    AWS_QUICKSIGHT_API TableConditionalFormatting();
    AWS_QUICKSIGHT_API TableConditionalFormatting(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API TableConditionalFormatting& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Conditional formatting options for a <code>PivotTableVisual</code>.</p>
     */
    inline const Aws::Vector<TableConditionalFormattingOption>& GetConditionalFormattingOptions() const{ return m_conditionalFormattingOptions; }

    /**
     * <p>Conditional formatting options for a <code>PivotTableVisual</code>.</p>
     */
    inline bool ConditionalFormattingOptionsHasBeenSet() const { return m_conditionalFormattingOptionsHasBeenSet; }

    /**
     * <p>Conditional formatting options for a <code>PivotTableVisual</code>.</p>
     */
    inline void SetConditionalFormattingOptions(const Aws::Vector<TableConditionalFormattingOption>& value) { m_conditionalFormattingOptionsHasBeenSet = true; m_conditionalFormattingOptions = value; }

    /**
     * <p>Conditional formatting options for a <code>PivotTableVisual</code>.</p>
     */
    inline void SetConditionalFormattingOptions(Aws::Vector<TableConditionalFormattingOption>&& value) { m_conditionalFormattingOptionsHasBeenSet = true; m_conditionalFormattingOptions = std::move(value); }

    /**
     * <p>Conditional formatting options for a <code>PivotTableVisual</code>.</p>
     */
    inline TableConditionalFormatting& WithConditionalFormattingOptions(const Aws::Vector<TableConditionalFormattingOption>& value) { SetConditionalFormattingOptions(value); return *this;}

    /**
     * <p>Conditional formatting options for a <code>PivotTableVisual</code>.</p>
     */
    inline TableConditionalFormatting& WithConditionalFormattingOptions(Aws::Vector<TableConditionalFormattingOption>&& value) { SetConditionalFormattingOptions(std::move(value)); return *this;}

    /**
     * <p>Conditional formatting options for a <code>PivotTableVisual</code>.</p>
     */
    inline TableConditionalFormatting& AddConditionalFormattingOptions(const TableConditionalFormattingOption& value) { m_conditionalFormattingOptionsHasBeenSet = true; m_conditionalFormattingOptions.push_back(value); return *this; }

    /**
     * <p>Conditional formatting options for a <code>PivotTableVisual</code>.</p>
     */
    inline TableConditionalFormatting& AddConditionalFormattingOptions(TableConditionalFormattingOption&& value) { m_conditionalFormattingOptionsHasBeenSet = true; m_conditionalFormattingOptions.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<TableConditionalFormattingOption> m_conditionalFormattingOptions;
    bool m_conditionalFormattingOptionsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
