/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/model/KPIConditionalFormattingOption.h>
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
   * <p>The conditional formatting of a KPI visual.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/KPIConditionalFormatting">AWS
   * API Reference</a></p>
   */
  class KPIConditionalFormatting
  {
  public:
    AWS_QUICKSIGHT_API KPIConditionalFormatting();
    AWS_QUICKSIGHT_API KPIConditionalFormatting(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API KPIConditionalFormatting& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The conditional formatting options of a KPI visual.</p>
     */
    inline const Aws::Vector<KPIConditionalFormattingOption>& GetConditionalFormattingOptions() const{ return m_conditionalFormattingOptions; }

    /**
     * <p>The conditional formatting options of a KPI visual.</p>
     */
    inline bool ConditionalFormattingOptionsHasBeenSet() const { return m_conditionalFormattingOptionsHasBeenSet; }

    /**
     * <p>The conditional formatting options of a KPI visual.</p>
     */
    inline void SetConditionalFormattingOptions(const Aws::Vector<KPIConditionalFormattingOption>& value) { m_conditionalFormattingOptionsHasBeenSet = true; m_conditionalFormattingOptions = value; }

    /**
     * <p>The conditional formatting options of a KPI visual.</p>
     */
    inline void SetConditionalFormattingOptions(Aws::Vector<KPIConditionalFormattingOption>&& value) { m_conditionalFormattingOptionsHasBeenSet = true; m_conditionalFormattingOptions = std::move(value); }

    /**
     * <p>The conditional formatting options of a KPI visual.</p>
     */
    inline KPIConditionalFormatting& WithConditionalFormattingOptions(const Aws::Vector<KPIConditionalFormattingOption>& value) { SetConditionalFormattingOptions(value); return *this;}

    /**
     * <p>The conditional formatting options of a KPI visual.</p>
     */
    inline KPIConditionalFormatting& WithConditionalFormattingOptions(Aws::Vector<KPIConditionalFormattingOption>&& value) { SetConditionalFormattingOptions(std::move(value)); return *this;}

    /**
     * <p>The conditional formatting options of a KPI visual.</p>
     */
    inline KPIConditionalFormatting& AddConditionalFormattingOptions(const KPIConditionalFormattingOption& value) { m_conditionalFormattingOptionsHasBeenSet = true; m_conditionalFormattingOptions.push_back(value); return *this; }

    /**
     * <p>The conditional formatting options of a KPI visual.</p>
     */
    inline KPIConditionalFormatting& AddConditionalFormattingOptions(KPIConditionalFormattingOption&& value) { m_conditionalFormattingOptionsHasBeenSet = true; m_conditionalFormattingOptions.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<KPIConditionalFormattingOption> m_conditionalFormattingOptions;
    bool m_conditionalFormattingOptionsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
