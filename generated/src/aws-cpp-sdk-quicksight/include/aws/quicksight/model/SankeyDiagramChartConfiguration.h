/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/SankeyDiagramFieldWells.h>
#include <aws/quicksight/model/SankeyDiagramSortConfiguration.h>
#include <aws/quicksight/model/DataLabelOptions.h>
#include <aws/quicksight/model/VisualInteractionOptions.h>
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
   * <p>The configuration of a sankey diagram.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/SankeyDiagramChartConfiguration">AWS
   * API Reference</a></p>
   */
  class SankeyDiagramChartConfiguration
  {
  public:
    AWS_QUICKSIGHT_API SankeyDiagramChartConfiguration();
    AWS_QUICKSIGHT_API SankeyDiagramChartConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API SankeyDiagramChartConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The field well configuration of a sankey diagram.</p>
     */
    inline const SankeyDiagramFieldWells& GetFieldWells() const{ return m_fieldWells; }
    inline bool FieldWellsHasBeenSet() const { return m_fieldWellsHasBeenSet; }
    inline void SetFieldWells(const SankeyDiagramFieldWells& value) { m_fieldWellsHasBeenSet = true; m_fieldWells = value; }
    inline void SetFieldWells(SankeyDiagramFieldWells&& value) { m_fieldWellsHasBeenSet = true; m_fieldWells = std::move(value); }
    inline SankeyDiagramChartConfiguration& WithFieldWells(const SankeyDiagramFieldWells& value) { SetFieldWells(value); return *this;}
    inline SankeyDiagramChartConfiguration& WithFieldWells(SankeyDiagramFieldWells&& value) { SetFieldWells(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sort configuration of a sankey diagram.</p>
     */
    inline const SankeyDiagramSortConfiguration& GetSortConfiguration() const{ return m_sortConfiguration; }
    inline bool SortConfigurationHasBeenSet() const { return m_sortConfigurationHasBeenSet; }
    inline void SetSortConfiguration(const SankeyDiagramSortConfiguration& value) { m_sortConfigurationHasBeenSet = true; m_sortConfiguration = value; }
    inline void SetSortConfiguration(SankeyDiagramSortConfiguration&& value) { m_sortConfigurationHasBeenSet = true; m_sortConfiguration = std::move(value); }
    inline SankeyDiagramChartConfiguration& WithSortConfiguration(const SankeyDiagramSortConfiguration& value) { SetSortConfiguration(value); return *this;}
    inline SankeyDiagramChartConfiguration& WithSortConfiguration(SankeyDiagramSortConfiguration&& value) { SetSortConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data label configuration of a sankey diagram.</p>
     */
    inline const DataLabelOptions& GetDataLabels() const{ return m_dataLabels; }
    inline bool DataLabelsHasBeenSet() const { return m_dataLabelsHasBeenSet; }
    inline void SetDataLabels(const DataLabelOptions& value) { m_dataLabelsHasBeenSet = true; m_dataLabels = value; }
    inline void SetDataLabels(DataLabelOptions&& value) { m_dataLabelsHasBeenSet = true; m_dataLabels = std::move(value); }
    inline SankeyDiagramChartConfiguration& WithDataLabels(const DataLabelOptions& value) { SetDataLabels(value); return *this;}
    inline SankeyDiagramChartConfiguration& WithDataLabels(DataLabelOptions&& value) { SetDataLabels(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The general visual interactions setup for a visual.</p>
     */
    inline const VisualInteractionOptions& GetInteractions() const{ return m_interactions; }
    inline bool InteractionsHasBeenSet() const { return m_interactionsHasBeenSet; }
    inline void SetInteractions(const VisualInteractionOptions& value) { m_interactionsHasBeenSet = true; m_interactions = value; }
    inline void SetInteractions(VisualInteractionOptions&& value) { m_interactionsHasBeenSet = true; m_interactions = std::move(value); }
    inline SankeyDiagramChartConfiguration& WithInteractions(const VisualInteractionOptions& value) { SetInteractions(value); return *this;}
    inline SankeyDiagramChartConfiguration& WithInteractions(VisualInteractionOptions&& value) { SetInteractions(std::move(value)); return *this;}
    ///@}
  private:

    SankeyDiagramFieldWells m_fieldWells;
    bool m_fieldWellsHasBeenSet = false;

    SankeyDiagramSortConfiguration m_sortConfiguration;
    bool m_sortConfigurationHasBeenSet = false;

    DataLabelOptions m_dataLabels;
    bool m_dataLabelsHasBeenSet = false;

    VisualInteractionOptions m_interactions;
    bool m_interactionsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
