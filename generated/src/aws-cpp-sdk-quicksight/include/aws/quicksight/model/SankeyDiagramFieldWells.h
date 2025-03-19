/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/SankeyDiagramAggregatedFieldWells.h>
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
   * <p>The field well configuration of a sankey diagram.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/SankeyDiagramFieldWells">AWS
   * API Reference</a></p>
   */
  class SankeyDiagramFieldWells
  {
  public:
    AWS_QUICKSIGHT_API SankeyDiagramFieldWells() = default;
    AWS_QUICKSIGHT_API SankeyDiagramFieldWells(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API SankeyDiagramFieldWells& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The field well configuration of a sankey diagram.</p>
     */
    inline const SankeyDiagramAggregatedFieldWells& GetSankeyDiagramAggregatedFieldWells() const { return m_sankeyDiagramAggregatedFieldWells; }
    inline bool SankeyDiagramAggregatedFieldWellsHasBeenSet() const { return m_sankeyDiagramAggregatedFieldWellsHasBeenSet; }
    template<typename SankeyDiagramAggregatedFieldWellsT = SankeyDiagramAggregatedFieldWells>
    void SetSankeyDiagramAggregatedFieldWells(SankeyDiagramAggregatedFieldWellsT&& value) { m_sankeyDiagramAggregatedFieldWellsHasBeenSet = true; m_sankeyDiagramAggregatedFieldWells = std::forward<SankeyDiagramAggregatedFieldWellsT>(value); }
    template<typename SankeyDiagramAggregatedFieldWellsT = SankeyDiagramAggregatedFieldWells>
    SankeyDiagramFieldWells& WithSankeyDiagramAggregatedFieldWells(SankeyDiagramAggregatedFieldWellsT&& value) { SetSankeyDiagramAggregatedFieldWells(std::forward<SankeyDiagramAggregatedFieldWellsT>(value)); return *this;}
    ///@}
  private:

    SankeyDiagramAggregatedFieldWells m_sankeyDiagramAggregatedFieldWells;
    bool m_sankeyDiagramAggregatedFieldWellsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
