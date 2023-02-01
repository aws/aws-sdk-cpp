/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/FunnelChartAggregatedFieldWells.h>
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
   * <p>The field well configuration of a <code>FunnelChartVisual</code>.</p> <p>This
   * is a union type structure. For this structure to be valid, only one of the
   * attributes can be defined.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/FunnelChartFieldWells">AWS
   * API Reference</a></p>
   */
  class FunnelChartFieldWells
  {
  public:
    AWS_QUICKSIGHT_API FunnelChartFieldWells();
    AWS_QUICKSIGHT_API FunnelChartFieldWells(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API FunnelChartFieldWells& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The field well configuration of a <code>FunnelChartVisual</code>.</p>
     */
    inline const FunnelChartAggregatedFieldWells& GetFunnelChartAggregatedFieldWells() const{ return m_funnelChartAggregatedFieldWells; }

    /**
     * <p>The field well configuration of a <code>FunnelChartVisual</code>.</p>
     */
    inline bool FunnelChartAggregatedFieldWellsHasBeenSet() const { return m_funnelChartAggregatedFieldWellsHasBeenSet; }

    /**
     * <p>The field well configuration of a <code>FunnelChartVisual</code>.</p>
     */
    inline void SetFunnelChartAggregatedFieldWells(const FunnelChartAggregatedFieldWells& value) { m_funnelChartAggregatedFieldWellsHasBeenSet = true; m_funnelChartAggregatedFieldWells = value; }

    /**
     * <p>The field well configuration of a <code>FunnelChartVisual</code>.</p>
     */
    inline void SetFunnelChartAggregatedFieldWells(FunnelChartAggregatedFieldWells&& value) { m_funnelChartAggregatedFieldWellsHasBeenSet = true; m_funnelChartAggregatedFieldWells = std::move(value); }

    /**
     * <p>The field well configuration of a <code>FunnelChartVisual</code>.</p>
     */
    inline FunnelChartFieldWells& WithFunnelChartAggregatedFieldWells(const FunnelChartAggregatedFieldWells& value) { SetFunnelChartAggregatedFieldWells(value); return *this;}

    /**
     * <p>The field well configuration of a <code>FunnelChartVisual</code>.</p>
     */
    inline FunnelChartFieldWells& WithFunnelChartAggregatedFieldWells(FunnelChartAggregatedFieldWells&& value) { SetFunnelChartAggregatedFieldWells(std::move(value)); return *this;}

  private:

    FunnelChartAggregatedFieldWells m_funnelChartAggregatedFieldWells;
    bool m_funnelChartAggregatedFieldWellsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
