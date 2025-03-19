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
    AWS_QUICKSIGHT_API WordCloudChartConfiguration() = default;
    AWS_QUICKSIGHT_API WordCloudChartConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API WordCloudChartConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The field wells of the visual.</p>
     */
    inline const WordCloudFieldWells& GetFieldWells() const { return m_fieldWells; }
    inline bool FieldWellsHasBeenSet() const { return m_fieldWellsHasBeenSet; }
    template<typename FieldWellsT = WordCloudFieldWells>
    void SetFieldWells(FieldWellsT&& value) { m_fieldWellsHasBeenSet = true; m_fieldWells = std::forward<FieldWellsT>(value); }
    template<typename FieldWellsT = WordCloudFieldWells>
    WordCloudChartConfiguration& WithFieldWells(FieldWellsT&& value) { SetFieldWells(std::forward<FieldWellsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sort configuration of a word cloud visual.</p>
     */
    inline const WordCloudSortConfiguration& GetSortConfiguration() const { return m_sortConfiguration; }
    inline bool SortConfigurationHasBeenSet() const { return m_sortConfigurationHasBeenSet; }
    template<typename SortConfigurationT = WordCloudSortConfiguration>
    void SetSortConfiguration(SortConfigurationT&& value) { m_sortConfigurationHasBeenSet = true; m_sortConfiguration = std::forward<SortConfigurationT>(value); }
    template<typename SortConfigurationT = WordCloudSortConfiguration>
    WordCloudChartConfiguration& WithSortConfiguration(SortConfigurationT&& value) { SetSortConfiguration(std::forward<SortConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The label options (label text, label visibility, and sort icon visibility)
     * for the word cloud category.</p>
     */
    inline const ChartAxisLabelOptions& GetCategoryLabelOptions() const { return m_categoryLabelOptions; }
    inline bool CategoryLabelOptionsHasBeenSet() const { return m_categoryLabelOptionsHasBeenSet; }
    template<typename CategoryLabelOptionsT = ChartAxisLabelOptions>
    void SetCategoryLabelOptions(CategoryLabelOptionsT&& value) { m_categoryLabelOptionsHasBeenSet = true; m_categoryLabelOptions = std::forward<CategoryLabelOptionsT>(value); }
    template<typename CategoryLabelOptionsT = ChartAxisLabelOptions>
    WordCloudChartConfiguration& WithCategoryLabelOptions(CategoryLabelOptionsT&& value) { SetCategoryLabelOptions(std::forward<CategoryLabelOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The options for a word cloud visual.</p>
     */
    inline const WordCloudOptions& GetWordCloudOptions() const { return m_wordCloudOptions; }
    inline bool WordCloudOptionsHasBeenSet() const { return m_wordCloudOptionsHasBeenSet; }
    template<typename WordCloudOptionsT = WordCloudOptions>
    void SetWordCloudOptions(WordCloudOptionsT&& value) { m_wordCloudOptionsHasBeenSet = true; m_wordCloudOptions = std::forward<WordCloudOptionsT>(value); }
    template<typename WordCloudOptionsT = WordCloudOptions>
    WordCloudChartConfiguration& WithWordCloudOptions(WordCloudOptionsT&& value) { SetWordCloudOptions(std::forward<WordCloudOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The general visual interactions setup for a visual.</p>
     */
    inline const VisualInteractionOptions& GetInteractions() const { return m_interactions; }
    inline bool InteractionsHasBeenSet() const { return m_interactionsHasBeenSet; }
    template<typename InteractionsT = VisualInteractionOptions>
    void SetInteractions(InteractionsT&& value) { m_interactionsHasBeenSet = true; m_interactions = std::forward<InteractionsT>(value); }
    template<typename InteractionsT = VisualInteractionOptions>
    WordCloudChartConfiguration& WithInteractions(InteractionsT&& value) { SetInteractions(std::forward<InteractionsT>(value)); return *this;}
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
