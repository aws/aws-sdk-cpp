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
    AWS_QUICKSIGHT_API ScatterPlotFieldWells() = default;
    AWS_QUICKSIGHT_API ScatterPlotFieldWells(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API ScatterPlotFieldWells& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The aggregated field wells of a scatter plot. The x and y-axes of scatter
     * plots with aggregated field wells are aggregated by category, label, or
     * both.</p>
     */
    inline const ScatterPlotCategoricallyAggregatedFieldWells& GetScatterPlotCategoricallyAggregatedFieldWells() const { return m_scatterPlotCategoricallyAggregatedFieldWells; }
    inline bool ScatterPlotCategoricallyAggregatedFieldWellsHasBeenSet() const { return m_scatterPlotCategoricallyAggregatedFieldWellsHasBeenSet; }
    template<typename ScatterPlotCategoricallyAggregatedFieldWellsT = ScatterPlotCategoricallyAggregatedFieldWells>
    void SetScatterPlotCategoricallyAggregatedFieldWells(ScatterPlotCategoricallyAggregatedFieldWellsT&& value) { m_scatterPlotCategoricallyAggregatedFieldWellsHasBeenSet = true; m_scatterPlotCategoricallyAggregatedFieldWells = std::forward<ScatterPlotCategoricallyAggregatedFieldWellsT>(value); }
    template<typename ScatterPlotCategoricallyAggregatedFieldWellsT = ScatterPlotCategoricallyAggregatedFieldWells>
    ScatterPlotFieldWells& WithScatterPlotCategoricallyAggregatedFieldWells(ScatterPlotCategoricallyAggregatedFieldWellsT&& value) { SetScatterPlotCategoricallyAggregatedFieldWells(std::forward<ScatterPlotCategoricallyAggregatedFieldWellsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unaggregated field wells of a scatter plot. The x and y-axes of these
     * scatter plots are unaggregated.</p>
     */
    inline const ScatterPlotUnaggregatedFieldWells& GetScatterPlotUnaggregatedFieldWells() const { return m_scatterPlotUnaggregatedFieldWells; }
    inline bool ScatterPlotUnaggregatedFieldWellsHasBeenSet() const { return m_scatterPlotUnaggregatedFieldWellsHasBeenSet; }
    template<typename ScatterPlotUnaggregatedFieldWellsT = ScatterPlotUnaggregatedFieldWells>
    void SetScatterPlotUnaggregatedFieldWells(ScatterPlotUnaggregatedFieldWellsT&& value) { m_scatterPlotUnaggregatedFieldWellsHasBeenSet = true; m_scatterPlotUnaggregatedFieldWells = std::forward<ScatterPlotUnaggregatedFieldWellsT>(value); }
    template<typename ScatterPlotUnaggregatedFieldWellsT = ScatterPlotUnaggregatedFieldWells>
    ScatterPlotFieldWells& WithScatterPlotUnaggregatedFieldWells(ScatterPlotUnaggregatedFieldWellsT&& value) { SetScatterPlotUnaggregatedFieldWells(std::forward<ScatterPlotUnaggregatedFieldWellsT>(value)); return *this;}
    ///@}
  private:

    ScatterPlotCategoricallyAggregatedFieldWells m_scatterPlotCategoricallyAggregatedFieldWells;
    bool m_scatterPlotCategoricallyAggregatedFieldWellsHasBeenSet = false;

    ScatterPlotUnaggregatedFieldWells m_scatterPlotUnaggregatedFieldWells;
    bool m_scatterPlotUnaggregatedFieldWellsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
