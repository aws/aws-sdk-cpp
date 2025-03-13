/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>The options that determine the presentation of a waterfall
   * visual.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/WaterfallChartOptions">AWS
   * API Reference</a></p>
   */
  class WaterfallChartOptions
  {
  public:
    AWS_QUICKSIGHT_API WaterfallChartOptions() = default;
    AWS_QUICKSIGHT_API WaterfallChartOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API WaterfallChartOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>This option determines the total bar label of a waterfall visual.</p>
     */
    inline const Aws::String& GetTotalBarLabel() const { return m_totalBarLabel; }
    inline bool TotalBarLabelHasBeenSet() const { return m_totalBarLabelHasBeenSet; }
    template<typename TotalBarLabelT = Aws::String>
    void SetTotalBarLabel(TotalBarLabelT&& value) { m_totalBarLabelHasBeenSet = true; m_totalBarLabel = std::forward<TotalBarLabelT>(value); }
    template<typename TotalBarLabelT = Aws::String>
    WaterfallChartOptions& WithTotalBarLabel(TotalBarLabelT&& value) { SetTotalBarLabel(std::forward<TotalBarLabelT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_totalBarLabel;
    bool m_totalBarLabelHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
