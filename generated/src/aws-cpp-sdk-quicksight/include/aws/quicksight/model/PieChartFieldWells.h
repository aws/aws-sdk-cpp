/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/PieChartAggregatedFieldWells.h>
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
   * <p>The field well configuration of a pie chart.</p> <p>This is a union type
   * structure. For this structure to be valid, only one of the attributes can be
   * defined.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/PieChartFieldWells">AWS
   * API Reference</a></p>
   */
  class PieChartFieldWells
  {
  public:
    AWS_QUICKSIGHT_API PieChartFieldWells() = default;
    AWS_QUICKSIGHT_API PieChartFieldWells(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API PieChartFieldWells& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The field well configuration of a pie chart.</p>
     */
    inline const PieChartAggregatedFieldWells& GetPieChartAggregatedFieldWells() const { return m_pieChartAggregatedFieldWells; }
    inline bool PieChartAggregatedFieldWellsHasBeenSet() const { return m_pieChartAggregatedFieldWellsHasBeenSet; }
    template<typename PieChartAggregatedFieldWellsT = PieChartAggregatedFieldWells>
    void SetPieChartAggregatedFieldWells(PieChartAggregatedFieldWellsT&& value) { m_pieChartAggregatedFieldWellsHasBeenSet = true; m_pieChartAggregatedFieldWells = std::forward<PieChartAggregatedFieldWellsT>(value); }
    template<typename PieChartAggregatedFieldWellsT = PieChartAggregatedFieldWells>
    PieChartFieldWells& WithPieChartAggregatedFieldWells(PieChartAggregatedFieldWellsT&& value) { SetPieChartAggregatedFieldWells(std::forward<PieChartAggregatedFieldWellsT>(value)); return *this;}
    ///@}
  private:

    PieChartAggregatedFieldWells m_pieChartAggregatedFieldWells;
    bool m_pieChartAggregatedFieldWellsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
