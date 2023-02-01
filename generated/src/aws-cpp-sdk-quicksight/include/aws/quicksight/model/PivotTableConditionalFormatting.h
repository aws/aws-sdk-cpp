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
    AWS_QUICKSIGHT_API PivotTableConditionalFormatting();
    AWS_QUICKSIGHT_API PivotTableConditionalFormatting(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API PivotTableConditionalFormatting& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Conditional formatting options for a <code>PivotTableVisual</code>.</p>
     */
    inline const Aws::Vector<PivotTableConditionalFormattingOption>& GetConditionalFormattingOptions() const{ return m_conditionalFormattingOptions; }

    /**
     * <p>Conditional formatting options for a <code>PivotTableVisual</code>.</p>
     */
    inline bool ConditionalFormattingOptionsHasBeenSet() const { return m_conditionalFormattingOptionsHasBeenSet; }

    /**
     * <p>Conditional formatting options for a <code>PivotTableVisual</code>.</p>
     */
    inline void SetConditionalFormattingOptions(const Aws::Vector<PivotTableConditionalFormattingOption>& value) { m_conditionalFormattingOptionsHasBeenSet = true; m_conditionalFormattingOptions = value; }

    /**
     * <p>Conditional formatting options for a <code>PivotTableVisual</code>.</p>
     */
    inline void SetConditionalFormattingOptions(Aws::Vector<PivotTableConditionalFormattingOption>&& value) { m_conditionalFormattingOptionsHasBeenSet = true; m_conditionalFormattingOptions = std::move(value); }

    /**
     * <p>Conditional formatting options for a <code>PivotTableVisual</code>.</p>
     */
    inline PivotTableConditionalFormatting& WithConditionalFormattingOptions(const Aws::Vector<PivotTableConditionalFormattingOption>& value) { SetConditionalFormattingOptions(value); return *this;}

    /**
     * <p>Conditional formatting options for a <code>PivotTableVisual</code>.</p>
     */
    inline PivotTableConditionalFormatting& WithConditionalFormattingOptions(Aws::Vector<PivotTableConditionalFormattingOption>&& value) { SetConditionalFormattingOptions(std::move(value)); return *this;}

    /**
     * <p>Conditional formatting options for a <code>PivotTableVisual</code>.</p>
     */
    inline PivotTableConditionalFormatting& AddConditionalFormattingOptions(const PivotTableConditionalFormattingOption& value) { m_conditionalFormattingOptionsHasBeenSet = true; m_conditionalFormattingOptions.push_back(value); return *this; }

    /**
     * <p>Conditional formatting options for a <code>PivotTableVisual</code>.</p>
     */
    inline PivotTableConditionalFormatting& AddConditionalFormattingOptions(PivotTableConditionalFormattingOption&& value) { m_conditionalFormattingOptionsHasBeenSet = true; m_conditionalFormattingOptions.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<PivotTableConditionalFormattingOption> m_conditionalFormattingOptions;
    bool m_conditionalFormattingOptionsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
