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
    AWS_QUICKSIGHT_API KPIConditionalFormatting() = default;
    AWS_QUICKSIGHT_API KPIConditionalFormatting(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API KPIConditionalFormatting& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The conditional formatting options of a KPI visual.</p>
     */
    inline const Aws::Vector<KPIConditionalFormattingOption>& GetConditionalFormattingOptions() const { return m_conditionalFormattingOptions; }
    inline bool ConditionalFormattingOptionsHasBeenSet() const { return m_conditionalFormattingOptionsHasBeenSet; }
    template<typename ConditionalFormattingOptionsT = Aws::Vector<KPIConditionalFormattingOption>>
    void SetConditionalFormattingOptions(ConditionalFormattingOptionsT&& value) { m_conditionalFormattingOptionsHasBeenSet = true; m_conditionalFormattingOptions = std::forward<ConditionalFormattingOptionsT>(value); }
    template<typename ConditionalFormattingOptionsT = Aws::Vector<KPIConditionalFormattingOption>>
    KPIConditionalFormatting& WithConditionalFormattingOptions(ConditionalFormattingOptionsT&& value) { SetConditionalFormattingOptions(std::forward<ConditionalFormattingOptionsT>(value)); return *this;}
    template<typename ConditionalFormattingOptionsT = KPIConditionalFormattingOption>
    KPIConditionalFormatting& AddConditionalFormattingOptions(ConditionalFormattingOptionsT&& value) { m_conditionalFormattingOptionsHasBeenSet = true; m_conditionalFormattingOptions.emplace_back(std::forward<ConditionalFormattingOptionsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<KPIConditionalFormattingOption> m_conditionalFormattingOptions;
    bool m_conditionalFormattingOptionsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
