/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/ScatterPlotCategoricallyAggregatedFieldWells.h>
#include <aws/quicksight/model/ScatterPlotUnaggregatedFieldWells.h>
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
   * <p>The field well configuration of a scatter plot.</p> <p>This is a union type
   * structure. For this structure to be valid, only one of the attributes can be
   * defined.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ScatterPlotFieldWells">AWS
   * API Reference</a></p>
   */
  class ScatterPlotFieldWells
  {
  public:
    AWS_QUICKSIGHT_API ScatterPlotFieldWells();
    AWS_QUICKSIGHT_API ScatterPlotFieldWells(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API ScatterPlotFieldWells& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The aggregated field wells of a scatter plot. Scatter plots that have a field
     * in the category (group/color) field will have aggregated field wells. The x and
     * y-axes of these scatter plots are aggregated by category.</p>
     */
    inline const ScatterPlotCategoricallyAggregatedFieldWells& GetScatterPlotCategoricallyAggregatedFieldWells() const{ return m_scatterPlotCategoricallyAggregatedFieldWells; }

    /**
     * <p>The aggregated field wells of a scatter plot. Scatter plots that have a field
     * in the category (group/color) field will have aggregated field wells. The x and
     * y-axes of these scatter plots are aggregated by category.</p>
     */
    inline bool ScatterPlotCategoricallyAggregatedFieldWellsHasBeenSet() const { return m_scatterPlotCategoricallyAggregatedFieldWellsHasBeenSet; }

    /**
     * <p>The aggregated field wells of a scatter plot. Scatter plots that have a field
     * in the category (group/color) field will have aggregated field wells. The x and
     * y-axes of these scatter plots are aggregated by category.</p>
     */
    inline void SetScatterPlotCategoricallyAggregatedFieldWells(const ScatterPlotCategoricallyAggregatedFieldWells& value) { m_scatterPlotCategoricallyAggregatedFieldWellsHasBeenSet = true; m_scatterPlotCategoricallyAggregatedFieldWells = value; }

    /**
     * <p>The aggregated field wells of a scatter plot. Scatter plots that have a field
     * in the category (group/color) field will have aggregated field wells. The x and
     * y-axes of these scatter plots are aggregated by category.</p>
     */
    inline void SetScatterPlotCategoricallyAggregatedFieldWells(ScatterPlotCategoricallyAggregatedFieldWells&& value) { m_scatterPlotCategoricallyAggregatedFieldWellsHasBeenSet = true; m_scatterPlotCategoricallyAggregatedFieldWells = std::move(value); }

    /**
     * <p>The aggregated field wells of a scatter plot. Scatter plots that have a field
     * in the category (group/color) field will have aggregated field wells. The x and
     * y-axes of these scatter plots are aggregated by category.</p>
     */
    inline ScatterPlotFieldWells& WithScatterPlotCategoricallyAggregatedFieldWells(const ScatterPlotCategoricallyAggregatedFieldWells& value) { SetScatterPlotCategoricallyAggregatedFieldWells(value); return *this;}

    /**
     * <p>The aggregated field wells of a scatter plot. Scatter plots that have a field
     * in the category (group/color) field will have aggregated field wells. The x and
     * y-axes of these scatter plots are aggregated by category.</p>
     */
    inline ScatterPlotFieldWells& WithScatterPlotCategoricallyAggregatedFieldWells(ScatterPlotCategoricallyAggregatedFieldWells&& value) { SetScatterPlotCategoricallyAggregatedFieldWells(std::move(value)); return *this;}


    /**
     * <p>The unaggregated field wells of a scatter plot. Scatter plots without a
     * category field well have unaggregated field wells. The x and y-axes of these
     * scatter plots are unaggregated.</p>
     */
    inline const ScatterPlotUnaggregatedFieldWells& GetScatterPlotUnaggregatedFieldWells() const{ return m_scatterPlotUnaggregatedFieldWells; }

    /**
     * <p>The unaggregated field wells of a scatter plot. Scatter plots without a
     * category field well have unaggregated field wells. The x and y-axes of these
     * scatter plots are unaggregated.</p>
     */
    inline bool ScatterPlotUnaggregatedFieldWellsHasBeenSet() const { return m_scatterPlotUnaggregatedFieldWellsHasBeenSet; }

    /**
     * <p>The unaggregated field wells of a scatter plot. Scatter plots without a
     * category field well have unaggregated field wells. The x and y-axes of these
     * scatter plots are unaggregated.</p>
     */
    inline void SetScatterPlotUnaggregatedFieldWells(const ScatterPlotUnaggregatedFieldWells& value) { m_scatterPlotUnaggregatedFieldWellsHasBeenSet = true; m_scatterPlotUnaggregatedFieldWells = value; }

    /**
     * <p>The unaggregated field wells of a scatter plot. Scatter plots without a
     * category field well have unaggregated field wells. The x and y-axes of these
     * scatter plots are unaggregated.</p>
     */
    inline void SetScatterPlotUnaggregatedFieldWells(ScatterPlotUnaggregatedFieldWells&& value) { m_scatterPlotUnaggregatedFieldWellsHasBeenSet = true; m_scatterPlotUnaggregatedFieldWells = std::move(value); }

    /**
     * <p>The unaggregated field wells of a scatter plot. Scatter plots without a
     * category field well have unaggregated field wells. The x and y-axes of these
     * scatter plots are unaggregated.</p>
     */
    inline ScatterPlotFieldWells& WithScatterPlotUnaggregatedFieldWells(const ScatterPlotUnaggregatedFieldWells& value) { SetScatterPlotUnaggregatedFieldWells(value); return *this;}

    /**
     * <p>The unaggregated field wells of a scatter plot. Scatter plots without a
     * category field well have unaggregated field wells. The x and y-axes of these
     * scatter plots are unaggregated.</p>
     */
    inline ScatterPlotFieldWells& WithScatterPlotUnaggregatedFieldWells(ScatterPlotUnaggregatedFieldWells&& value) { SetScatterPlotUnaggregatedFieldWells(std::move(value)); return *this;}

  private:

    ScatterPlotCategoricallyAggregatedFieldWells m_scatterPlotCategoricallyAggregatedFieldWells;
    bool m_scatterPlotCategoricallyAggregatedFieldWellsHasBeenSet = false;

    ScatterPlotUnaggregatedFieldWells m_scatterPlotUnaggregatedFieldWells;
    bool m_scatterPlotUnaggregatedFieldWellsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
