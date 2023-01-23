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
    AWS_QUICKSIGHT_API SankeyDiagramAggregatedFieldWells();
    AWS_QUICKSIGHT_API SankeyDiagramAggregatedFieldWells(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API SankeyDiagramAggregatedFieldWells& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The source field wells of a sankey diagram.</p>
     */
    inline const Aws::Vector<DimensionField>& GetSource() const{ return m_source; }

    /**
     * <p>The source field wells of a sankey diagram.</p>
     */
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }

    /**
     * <p>The source field wells of a sankey diagram.</p>
     */
    inline void SetSource(const Aws::Vector<DimensionField>& value) { m_sourceHasBeenSet = true; m_source = value; }

    /**
     * <p>The source field wells of a sankey diagram.</p>
     */
    inline void SetSource(Aws::Vector<DimensionField>&& value) { m_sourceHasBeenSet = true; m_source = std::move(value); }

    /**
     * <p>The source field wells of a sankey diagram.</p>
     */
    inline SankeyDiagramAggregatedFieldWells& WithSource(const Aws::Vector<DimensionField>& value) { SetSource(value); return *this;}

    /**
     * <p>The source field wells of a sankey diagram.</p>
     */
    inline SankeyDiagramAggregatedFieldWells& WithSource(Aws::Vector<DimensionField>&& value) { SetSource(std::move(value)); return *this;}

    /**
     * <p>The source field wells of a sankey diagram.</p>
     */
    inline SankeyDiagramAggregatedFieldWells& AddSource(const DimensionField& value) { m_sourceHasBeenSet = true; m_source.push_back(value); return *this; }

    /**
     * <p>The source field wells of a sankey diagram.</p>
     */
    inline SankeyDiagramAggregatedFieldWells& AddSource(DimensionField&& value) { m_sourceHasBeenSet = true; m_source.push_back(std::move(value)); return *this; }


    /**
     * <p>The destination field wells of a sankey diagram.</p>
     */
    inline const Aws::Vector<DimensionField>& GetDestination() const{ return m_destination; }

    /**
     * <p>The destination field wells of a sankey diagram.</p>
     */
    inline bool DestinationHasBeenSet() const { return m_destinationHasBeenSet; }

    /**
     * <p>The destination field wells of a sankey diagram.</p>
     */
    inline void SetDestination(const Aws::Vector<DimensionField>& value) { m_destinationHasBeenSet = true; m_destination = value; }

    /**
     * <p>The destination field wells of a sankey diagram.</p>
     */
    inline void SetDestination(Aws::Vector<DimensionField>&& value) { m_destinationHasBeenSet = true; m_destination = std::move(value); }

    /**
     * <p>The destination field wells of a sankey diagram.</p>
     */
    inline SankeyDiagramAggregatedFieldWells& WithDestination(const Aws::Vector<DimensionField>& value) { SetDestination(value); return *this;}

    /**
     * <p>The destination field wells of a sankey diagram.</p>
     */
    inline SankeyDiagramAggregatedFieldWells& WithDestination(Aws::Vector<DimensionField>&& value) { SetDestination(std::move(value)); return *this;}

    /**
     * <p>The destination field wells of a sankey diagram.</p>
     */
    inline SankeyDiagramAggregatedFieldWells& AddDestination(const DimensionField& value) { m_destinationHasBeenSet = true; m_destination.push_back(value); return *this; }

    /**
     * <p>The destination field wells of a sankey diagram.</p>
     */
    inline SankeyDiagramAggregatedFieldWells& AddDestination(DimensionField&& value) { m_destinationHasBeenSet = true; m_destination.push_back(std::move(value)); return *this; }


    /**
     * <p>The weight field wells of a sankey diagram.</p>
     */
    inline const Aws::Vector<MeasureField>& GetWeight() const{ return m_weight; }

    /**
     * <p>The weight field wells of a sankey diagram.</p>
     */
    inline bool WeightHasBeenSet() const { return m_weightHasBeenSet; }

    /**
     * <p>The weight field wells of a sankey diagram.</p>
     */
    inline void SetWeight(const Aws::Vector<MeasureField>& value) { m_weightHasBeenSet = true; m_weight = value; }

    /**
     * <p>The weight field wells of a sankey diagram.</p>
     */
    inline void SetWeight(Aws::Vector<MeasureField>&& value) { m_weightHasBeenSet = true; m_weight = std::move(value); }

    /**
     * <p>The weight field wells of a sankey diagram.</p>
     */
    inline SankeyDiagramAggregatedFieldWells& WithWeight(const Aws::Vector<MeasureField>& value) { SetWeight(value); return *this;}

    /**
     * <p>The weight field wells of a sankey diagram.</p>
     */
    inline SankeyDiagramAggregatedFieldWells& WithWeight(Aws::Vector<MeasureField>&& value) { SetWeight(std::move(value)); return *this;}

    /**
     * <p>The weight field wells of a sankey diagram.</p>
     */
    inline SankeyDiagramAggregatedFieldWells& AddWeight(const MeasureField& value) { m_weightHasBeenSet = true; m_weight.push_back(value); return *this; }

    /**
     * <p>The weight field wells of a sankey diagram.</p>
     */
    inline SankeyDiagramAggregatedFieldWells& AddWeight(MeasureField&& value) { m_weightHasBeenSet = true; m_weight.push_back(std::move(value)); return *this; }

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
