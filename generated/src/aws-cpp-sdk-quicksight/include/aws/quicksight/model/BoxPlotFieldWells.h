/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/BoxPlotAggregatedFieldWells.h>
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
   * <p>The field wells of a <code>BoxPlotVisual</code>.</p> <p>This is a union type
   * structure. For this structure to be valid, only one of the attributes can be
   * defined.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/BoxPlotFieldWells">AWS
   * API Reference</a></p>
   */
  class BoxPlotFieldWells
  {
  public:
    AWS_QUICKSIGHT_API BoxPlotFieldWells();
    AWS_QUICKSIGHT_API BoxPlotFieldWells(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API BoxPlotFieldWells& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The aggregated field wells of a box plot.</p>
     */
    inline const BoxPlotAggregatedFieldWells& GetBoxPlotAggregatedFieldWells() const{ return m_boxPlotAggregatedFieldWells; }

    /**
     * <p>The aggregated field wells of a box plot.</p>
     */
    inline bool BoxPlotAggregatedFieldWellsHasBeenSet() const { return m_boxPlotAggregatedFieldWellsHasBeenSet; }

    /**
     * <p>The aggregated field wells of a box plot.</p>
     */
    inline void SetBoxPlotAggregatedFieldWells(const BoxPlotAggregatedFieldWells& value) { m_boxPlotAggregatedFieldWellsHasBeenSet = true; m_boxPlotAggregatedFieldWells = value; }

    /**
     * <p>The aggregated field wells of a box plot.</p>
     */
    inline void SetBoxPlotAggregatedFieldWells(BoxPlotAggregatedFieldWells&& value) { m_boxPlotAggregatedFieldWellsHasBeenSet = true; m_boxPlotAggregatedFieldWells = std::move(value); }

    /**
     * <p>The aggregated field wells of a box plot.</p>
     */
    inline BoxPlotFieldWells& WithBoxPlotAggregatedFieldWells(const BoxPlotAggregatedFieldWells& value) { SetBoxPlotAggregatedFieldWells(value); return *this;}

    /**
     * <p>The aggregated field wells of a box plot.</p>
     */
    inline BoxPlotFieldWells& WithBoxPlotAggregatedFieldWells(BoxPlotAggregatedFieldWells&& value) { SetBoxPlotAggregatedFieldWells(std::move(value)); return *this;}

  private:

    BoxPlotAggregatedFieldWells m_boxPlotAggregatedFieldWells;
    bool m_boxPlotAggregatedFieldWellsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
