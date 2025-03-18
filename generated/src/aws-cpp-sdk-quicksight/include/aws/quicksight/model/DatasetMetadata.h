/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/DataAggregation.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/model/TopicFilter.h>
#include <aws/quicksight/model/TopicColumn.h>
#include <aws/quicksight/model/TopicCalculatedField.h>
#include <aws/quicksight/model/TopicNamedEntity.h>
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
   * <p>A structure that represents a dataset.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DatasetMetadata">AWS
   * API Reference</a></p>
   */
  class DatasetMetadata
  {
  public:
    AWS_QUICKSIGHT_API DatasetMetadata() = default;
    AWS_QUICKSIGHT_API DatasetMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API DatasetMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the dataset.</p>
     */
    inline const Aws::String& GetDatasetArn() const { return m_datasetArn; }
    inline bool DatasetArnHasBeenSet() const { return m_datasetArnHasBeenSet; }
    template<typename DatasetArnT = Aws::String>
    void SetDatasetArn(DatasetArnT&& value) { m_datasetArnHasBeenSet = true; m_datasetArn = std::forward<DatasetArnT>(value); }
    template<typename DatasetArnT = Aws::String>
    DatasetMetadata& WithDatasetArn(DatasetArnT&& value) { SetDatasetArn(std::forward<DatasetArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the dataset.</p>
     */
    inline const Aws::String& GetDatasetName() const { return m_datasetName; }
    inline bool DatasetNameHasBeenSet() const { return m_datasetNameHasBeenSet; }
    template<typename DatasetNameT = Aws::String>
    void SetDatasetName(DatasetNameT&& value) { m_datasetNameHasBeenSet = true; m_datasetName = std::forward<DatasetNameT>(value); }
    template<typename DatasetNameT = Aws::String>
    DatasetMetadata& WithDatasetName(DatasetNameT&& value) { SetDatasetName(std::forward<DatasetNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the dataset.</p>
     */
    inline const Aws::String& GetDatasetDescription() const { return m_datasetDescription; }
    inline bool DatasetDescriptionHasBeenSet() const { return m_datasetDescriptionHasBeenSet; }
    template<typename DatasetDescriptionT = Aws::String>
    void SetDatasetDescription(DatasetDescriptionT&& value) { m_datasetDescriptionHasBeenSet = true; m_datasetDescription = std::forward<DatasetDescriptionT>(value); }
    template<typename DatasetDescriptionT = Aws::String>
    DatasetMetadata& WithDatasetDescription(DatasetDescriptionT&& value) { SetDatasetDescription(std::forward<DatasetDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The definition of a data aggregation.</p>
     */
    inline const DataAggregation& GetDataAggregation() const { return m_dataAggregation; }
    inline bool DataAggregationHasBeenSet() const { return m_dataAggregationHasBeenSet; }
    template<typename DataAggregationT = DataAggregation>
    void SetDataAggregation(DataAggregationT&& value) { m_dataAggregationHasBeenSet = true; m_dataAggregation = std::forward<DataAggregationT>(value); }
    template<typename DataAggregationT = DataAggregation>
    DatasetMetadata& WithDataAggregation(DataAggregationT&& value) { SetDataAggregation(std::forward<DataAggregationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of filter definitions.</p>
     */
    inline const Aws::Vector<TopicFilter>& GetFilters() const { return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    template<typename FiltersT = Aws::Vector<TopicFilter>>
    void SetFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters = std::forward<FiltersT>(value); }
    template<typename FiltersT = Aws::Vector<TopicFilter>>
    DatasetMetadata& WithFilters(FiltersT&& value) { SetFilters(std::forward<FiltersT>(value)); return *this;}
    template<typename FiltersT = TopicFilter>
    DatasetMetadata& AddFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters.emplace_back(std::forward<FiltersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The list of column definitions.</p>
     */
    inline const Aws::Vector<TopicColumn>& GetColumns() const { return m_columns; }
    inline bool ColumnsHasBeenSet() const { return m_columnsHasBeenSet; }
    template<typename ColumnsT = Aws::Vector<TopicColumn>>
    void SetColumns(ColumnsT&& value) { m_columnsHasBeenSet = true; m_columns = std::forward<ColumnsT>(value); }
    template<typename ColumnsT = Aws::Vector<TopicColumn>>
    DatasetMetadata& WithColumns(ColumnsT&& value) { SetColumns(std::forward<ColumnsT>(value)); return *this;}
    template<typename ColumnsT = TopicColumn>
    DatasetMetadata& AddColumns(ColumnsT&& value) { m_columnsHasBeenSet = true; m_columns.emplace_back(std::forward<ColumnsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The list of calculated field definitions.</p>
     */
    inline const Aws::Vector<TopicCalculatedField>& GetCalculatedFields() const { return m_calculatedFields; }
    inline bool CalculatedFieldsHasBeenSet() const { return m_calculatedFieldsHasBeenSet; }
    template<typename CalculatedFieldsT = Aws::Vector<TopicCalculatedField>>
    void SetCalculatedFields(CalculatedFieldsT&& value) { m_calculatedFieldsHasBeenSet = true; m_calculatedFields = std::forward<CalculatedFieldsT>(value); }
    template<typename CalculatedFieldsT = Aws::Vector<TopicCalculatedField>>
    DatasetMetadata& WithCalculatedFields(CalculatedFieldsT&& value) { SetCalculatedFields(std::forward<CalculatedFieldsT>(value)); return *this;}
    template<typename CalculatedFieldsT = TopicCalculatedField>
    DatasetMetadata& AddCalculatedFields(CalculatedFieldsT&& value) { m_calculatedFieldsHasBeenSet = true; m_calculatedFields.emplace_back(std::forward<CalculatedFieldsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The list of named entities definitions.</p>
     */
    inline const Aws::Vector<TopicNamedEntity>& GetNamedEntities() const { return m_namedEntities; }
    inline bool NamedEntitiesHasBeenSet() const { return m_namedEntitiesHasBeenSet; }
    template<typename NamedEntitiesT = Aws::Vector<TopicNamedEntity>>
    void SetNamedEntities(NamedEntitiesT&& value) { m_namedEntitiesHasBeenSet = true; m_namedEntities = std::forward<NamedEntitiesT>(value); }
    template<typename NamedEntitiesT = Aws::Vector<TopicNamedEntity>>
    DatasetMetadata& WithNamedEntities(NamedEntitiesT&& value) { SetNamedEntities(std::forward<NamedEntitiesT>(value)); return *this;}
    template<typename NamedEntitiesT = TopicNamedEntity>
    DatasetMetadata& AddNamedEntities(NamedEntitiesT&& value) { m_namedEntitiesHasBeenSet = true; m_namedEntities.emplace_back(std::forward<NamedEntitiesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_datasetArn;
    bool m_datasetArnHasBeenSet = false;

    Aws::String m_datasetName;
    bool m_datasetNameHasBeenSet = false;

    Aws::String m_datasetDescription;
    bool m_datasetDescriptionHasBeenSet = false;

    DataAggregation m_dataAggregation;
    bool m_dataAggregationHasBeenSet = false;

    Aws::Vector<TopicFilter> m_filters;
    bool m_filtersHasBeenSet = false;

    Aws::Vector<TopicColumn> m_columns;
    bool m_columnsHasBeenSet = false;

    Aws::Vector<TopicCalculatedField> m_calculatedFields;
    bool m_calculatedFieldsHasBeenSet = false;

    Aws::Vector<TopicNamedEntity> m_namedEntities;
    bool m_namedEntitiesHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
