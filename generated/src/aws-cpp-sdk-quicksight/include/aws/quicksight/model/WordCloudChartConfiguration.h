/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/WordCloudFieldWells.h>
#include <aws/quicksight/model/WordCloudSortConfiguration.h>
#include <aws/quicksight/model/ChartAxisLabelOptions.h>
#include <aws/quicksight/model/WordCloudOptions.h>
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
   * <p>The configuration of a word cloud visual.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/WordCloudChartConfiguration">AWS
   * API Reference</a></p>
   */
  class WordCloudChartConfiguration
  {
  public:
    AWS_QUICKSIGHT_API WordCloudChartConfiguration();
    AWS_QUICKSIGHT_API WordCloudChartConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API WordCloudChartConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The field wells of the visual.</p>
     */
    inline const WordCloudFieldWells& GetFieldWells() const{ return m_fieldWells; }
    inline bool FieldWellsHasBeenSet() const { return m_fieldWellsHasBeenSet; }
    inline void SetFieldWells(const WordCloudFieldWells& value) { m_fieldWellsHasBeenSet = true; m_fieldWells = value; }
    inline void SetFieldWells(WordCloudFieldWells&& value) { m_fieldWellsHasBeenSet = true; m_fieldWells = std::move(value); }
    inline WordCloudChartConfiguration& WithFieldWells(const WordCloudFieldWells& value) { SetFieldWells(value); return *this;}
    inline WordCloudChartConfiguration& WithFieldWells(WordCloudFieldWells&& value) { SetFieldWells(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sort configuration of a word cloud visual.</p>
     */
    inline const WordCloudSortConfiguration& GetSortConfiguration() const{ return m_sortConfiguration; }
    inline bool SortConfigurationHasBeenSet() const { return m_sortConfigurationHasBeenSet; }
    inline void SetSortConfiguration(const WordCloudSortConfiguration& value) { m_sortConfigurationHasBeenSet = true; m_sortConfiguration = value; }
    inline void SetSortConfiguration(WordCloudSortConfiguration&& value) { m_sortConfigurationHasBeenSet = true; m_sortConfiguration = std::move(value); }
    inline WordCloudChartConfiguration& WithSortConfiguration(const WordCloudSortConfiguration& value) { SetSortConfiguration(value); return *this;}
    inline WordCloudChartConfiguration& WithSortConfiguration(WordCloudSortConfiguration&& value) { SetSortConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The label options (label text, label visibility, and sort icon visibility)
     * for the word cloud category.</p>
     */
    inline const ChartAxisLabelOptions& GetCategoryLabelOptions() const{ return m_categoryLabelOptions; }
    inline bool CategoryLabelOptionsHasBeenSet() const { return m_categoryLabelOptionsHasBeenSet; }
    inline void SetCategoryLabelOptions(const ChartAxisLabelOptions& value) { m_categoryLabelOptionsHasBeenSet = true; m_categoryLabelOptions = value; }
    inline void SetCategoryLabelOptions(ChartAxisLabelOptions&& value) { m_categoryLabelOptionsHasBeenSet = true; m_categoryLabelOptions = std::move(value); }
    inline WordCloudChartConfiguration& WithCategoryLabelOptions(const ChartAxisLabelOptions& value) { SetCategoryLabelOptions(value); return *this;}
    inline WordCloudChartConfiguration& WithCategoryLabelOptions(ChartAxisLabelOptions&& value) { SetCategoryLabelOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The options for a word cloud visual.</p>
     */
    inline const WordCloudOptions& GetWordCloudOptions() const{ return m_wordCloudOptions; }
    inline bool WordCloudOptionsHasBeenSet() const { return m_wordCloudOptionsHasBeenSet; }
    inline void SetWordCloudOptions(const WordCloudOptions& value) { m_wordCloudOptionsHasBeenSet = true; m_wordCloudOptions = value; }
    inline void SetWordCloudOptions(WordCloudOptions&& value) { m_wordCloudOptionsHasBeenSet = true; m_wordCloudOptions = std::move(value); }
    inline WordCloudChartConfiguration& WithWordCloudOptions(const WordCloudOptions& value) { SetWordCloudOptions(value); return *this;}
    inline WordCloudChartConfiguration& WithWordCloudOptions(WordCloudOptions&& value) { SetWordCloudOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The general visual interactions setup for a visual.</p>
     */
    inline const VisualInteractionOptions& GetInteractions() const{ return m_interactions; }
    inline bool InteractionsHasBeenSet() const { return m_interactionsHasBeenSet; }
    inline void SetInteractions(const VisualInteractionOptions& value) { m_interactionsHasBeenSet = true; m_interactions = value; }
    inline void SetInteractions(VisualInteractionOptions&& value) { m_interactionsHasBeenSet = true; m_interactions = std::move(value); }
    inline WordCloudChartConfiguration& WithInteractions(const VisualInteractionOptions& value) { SetInteractions(value); return *this;}
    inline WordCloudChartConfiguration& WithInteractions(VisualInteractionOptions&& value) { SetInteractions(std::move(value)); return *this;}
    ///@}
  private:

    WordCloudFieldWells m_fieldWells;
    bool m_fieldWellsHasBeenSet = false;

    WordCloudSortConfiguration m_sortConfiguration;
    bool m_sortConfigurationHasBeenSet = false;

    ChartAxisLabelOptions m_categoryLabelOptions;
    bool m_categoryLabelOptionsHasBeenSet = false;

    WordCloudOptions m_wordCloudOptions;
    bool m_wordCloudOptionsHasBeenSet = false;

    VisualInteractionOptions m_interactions;
    bool m_interactionsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
