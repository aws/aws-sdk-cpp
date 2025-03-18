/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/model/DimensionField.h>
#include <aws/quicksight/model/MeasureField.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/SankeyDiagramAggregatedFieldWells">AWS
   * API Reference</a></p>
   */
  class SankeyDiagramAggregatedFieldWells
  {
  public:
    AWS_QUICKSIGHT_API SankeyDiagramAggregatedFieldWells() = default;
    AWS_QUICKSIGHT_API SankeyDiagramAggregatedFieldWells(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API SankeyDiagramAggregatedFieldWells& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The source field wells of a sankey diagram.</p>
     */
    inline const Aws::Vector<DimensionField>& GetSource() const { return m_source; }
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
    template<typename SourceT = Aws::Vector<DimensionField>>
    void SetSource(SourceT&& value) { m_sourceHasBeenSet = true; m_source = std::forward<SourceT>(value); }
    template<typename SourceT = Aws::Vector<DimensionField>>
    SankeyDiagramAggregatedFieldWells& WithSource(SourceT&& value) { SetSource(std::forward<SourceT>(value)); return *this;}
    template<typename SourceT = DimensionField>
    SankeyDiagramAggregatedFieldWells& AddSource(SourceT&& value) { m_sourceHasBeenSet = true; m_source.emplace_back(std::forward<SourceT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The destination field wells of a sankey diagram.</p>
     */
    inline const Aws::Vector<DimensionField>& GetDestination() const { return m_destination; }
    inline bool DestinationHasBeenSet() const { return m_destinationHasBeenSet; }
    template<typename DestinationT = Aws::Vector<DimensionField>>
    void SetDestination(DestinationT&& value) { m_destinationHasBeenSet = true; m_destination = std::forward<DestinationT>(value); }
    template<typename DestinationT = Aws::Vector<DimensionField>>
    SankeyDiagramAggregatedFieldWells& WithDestination(DestinationT&& value) { SetDestination(std::forward<DestinationT>(value)); return *this;}
    template<typename DestinationT = DimensionField>
    SankeyDiagramAggregatedFieldWells& AddDestination(DestinationT&& value) { m_destinationHasBeenSet = true; m_destination.emplace_back(std::forward<DestinationT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The weight field wells of a sankey diagram.</p>
     */
    inline const Aws::Vector<MeasureField>& GetWeight() const { return m_weight; }
    inline bool WeightHasBeenSet() const { return m_weightHasBeenSet; }
    template<typename WeightT = Aws::Vector<MeasureField>>
    void SetWeight(WeightT&& value) { m_weightHasBeenSet = true; m_weight = std::forward<WeightT>(value); }
    template<typename WeightT = Aws::Vector<MeasureField>>
    SankeyDiagramAggregatedFieldWells& WithWeight(WeightT&& value) { SetWeight(std::forward<WeightT>(value)); return *this;}
    template<typename WeightT = MeasureField>
    SankeyDiagramAggregatedFieldWells& AddWeight(WeightT&& value) { m_weightHasBeenSet = true; m_weight.emplace_back(std::forward<WeightT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<DimensionField> m_source;
    bool m_sourceHasBeenSet = false;

    Aws::Vector<DimensionField> m_destination;
    bool m_destinationHasBeenSet = false;

    Aws::Vector<MeasureField> m_weight;
    bool m_weightHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
