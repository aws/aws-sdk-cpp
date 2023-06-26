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
    AWS_QUICKSIGHT_API DatasetMetadata();
    AWS_QUICKSIGHT_API DatasetMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API DatasetMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the dataset.</p>
     */
    inline const Aws::String& GetDatasetArn() const{ return m_datasetArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the dataset.</p>
     */
    inline bool DatasetArnHasBeenSet() const { return m_datasetArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the dataset.</p>
     */
    inline void SetDatasetArn(const Aws::String& value) { m_datasetArnHasBeenSet = true; m_datasetArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the dataset.</p>
     */
    inline void SetDatasetArn(Aws::String&& value) { m_datasetArnHasBeenSet = true; m_datasetArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the dataset.</p>
     */
    inline void SetDatasetArn(const char* value) { m_datasetArnHasBeenSet = true; m_datasetArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the dataset.</p>
     */
    inline DatasetMetadata& WithDatasetArn(const Aws::String& value) { SetDatasetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the dataset.</p>
     */
    inline DatasetMetadata& WithDatasetArn(Aws::String&& value) { SetDatasetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the dataset.</p>
     */
    inline DatasetMetadata& WithDatasetArn(const char* value) { SetDatasetArn(value); return *this;}


    /**
     * <p>The name of the dataset.</p>
     */
    inline const Aws::String& GetDatasetName() const{ return m_datasetName; }

    /**
     * <p>The name of the dataset.</p>
     */
    inline bool DatasetNameHasBeenSet() const { return m_datasetNameHasBeenSet; }

    /**
     * <p>The name of the dataset.</p>
     */
    inline void SetDatasetName(const Aws::String& value) { m_datasetNameHasBeenSet = true; m_datasetName = value; }

    /**
     * <p>The name of the dataset.</p>
     */
    inline void SetDatasetName(Aws::String&& value) { m_datasetNameHasBeenSet = true; m_datasetName = std::move(value); }

    /**
     * <p>The name of the dataset.</p>
     */
    inline void SetDatasetName(const char* value) { m_datasetNameHasBeenSet = true; m_datasetName.assign(value); }

    /**
     * <p>The name of the dataset.</p>
     */
    inline DatasetMetadata& WithDatasetName(const Aws::String& value) { SetDatasetName(value); return *this;}

    /**
     * <p>The name of the dataset.</p>
     */
    inline DatasetMetadata& WithDatasetName(Aws::String&& value) { SetDatasetName(std::move(value)); return *this;}

    /**
     * <p>The name of the dataset.</p>
     */
    inline DatasetMetadata& WithDatasetName(const char* value) { SetDatasetName(value); return *this;}


    /**
     * <p>The description of the dataset.</p>
     */
    inline const Aws::String& GetDatasetDescription() const{ return m_datasetDescription; }

    /**
     * <p>The description of the dataset.</p>
     */
    inline bool DatasetDescriptionHasBeenSet() const { return m_datasetDescriptionHasBeenSet; }

    /**
     * <p>The description of the dataset.</p>
     */
    inline void SetDatasetDescription(const Aws::String& value) { m_datasetDescriptionHasBeenSet = true; m_datasetDescription = value; }

    /**
     * <p>The description of the dataset.</p>
     */
    inline void SetDatasetDescription(Aws::String&& value) { m_datasetDescriptionHasBeenSet = true; m_datasetDescription = std::move(value); }

    /**
     * <p>The description of the dataset.</p>
     */
    inline void SetDatasetDescription(const char* value) { m_datasetDescriptionHasBeenSet = true; m_datasetDescription.assign(value); }

    /**
     * <p>The description of the dataset.</p>
     */
    inline DatasetMetadata& WithDatasetDescription(const Aws::String& value) { SetDatasetDescription(value); return *this;}

    /**
     * <p>The description of the dataset.</p>
     */
    inline DatasetMetadata& WithDatasetDescription(Aws::String&& value) { SetDatasetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the dataset.</p>
     */
    inline DatasetMetadata& WithDatasetDescription(const char* value) { SetDatasetDescription(value); return *this;}


    /**
     * <p>The definition of a data aggregation.</p>
     */
    inline const DataAggregation& GetDataAggregation() const{ return m_dataAggregation; }

    /**
     * <p>The definition of a data aggregation.</p>
     */
    inline bool DataAggregationHasBeenSet() const { return m_dataAggregationHasBeenSet; }

    /**
     * <p>The definition of a data aggregation.</p>
     */
    inline void SetDataAggregation(const DataAggregation& value) { m_dataAggregationHasBeenSet = true; m_dataAggregation = value; }

    /**
     * <p>The definition of a data aggregation.</p>
     */
    inline void SetDataAggregation(DataAggregation&& value) { m_dataAggregationHasBeenSet = true; m_dataAggregation = std::move(value); }

    /**
     * <p>The definition of a data aggregation.</p>
     */
    inline DatasetMetadata& WithDataAggregation(const DataAggregation& value) { SetDataAggregation(value); return *this;}

    /**
     * <p>The definition of a data aggregation.</p>
     */
    inline DatasetMetadata& WithDataAggregation(DataAggregation&& value) { SetDataAggregation(std::move(value)); return *this;}


    /**
     * <p>The list of filter definitions.</p>
     */
    inline const Aws::Vector<TopicFilter>& GetFilters() const{ return m_filters; }

    /**
     * <p>The list of filter definitions.</p>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>The list of filter definitions.</p>
     */
    inline void SetFilters(const Aws::Vector<TopicFilter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>The list of filter definitions.</p>
     */
    inline void SetFilters(Aws::Vector<TopicFilter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>The list of filter definitions.</p>
     */
    inline DatasetMetadata& WithFilters(const Aws::Vector<TopicFilter>& value) { SetFilters(value); return *this;}

    /**
     * <p>The list of filter definitions.</p>
     */
    inline DatasetMetadata& WithFilters(Aws::Vector<TopicFilter>&& value) { SetFilters(std::move(value)); return *this;}

    /**
     * <p>The list of filter definitions.</p>
     */
    inline DatasetMetadata& AddFilters(const TopicFilter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>The list of filter definitions.</p>
     */
    inline DatasetMetadata& AddFilters(TopicFilter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }


    /**
     * <p>The list of column definitions.</p>
     */
    inline const Aws::Vector<TopicColumn>& GetColumns() const{ return m_columns; }

    /**
     * <p>The list of column definitions.</p>
     */
    inline bool ColumnsHasBeenSet() const { return m_columnsHasBeenSet; }

    /**
     * <p>The list of column definitions.</p>
     */
    inline void SetColumns(const Aws::Vector<TopicColumn>& value) { m_columnsHasBeenSet = true; m_columns = value; }

    /**
     * <p>The list of column definitions.</p>
     */
    inline void SetColumns(Aws::Vector<TopicColumn>&& value) { m_columnsHasBeenSet = true; m_columns = std::move(value); }

    /**
     * <p>The list of column definitions.</p>
     */
    inline DatasetMetadata& WithColumns(const Aws::Vector<TopicColumn>& value) { SetColumns(value); return *this;}

    /**
     * <p>The list of column definitions.</p>
     */
    inline DatasetMetadata& WithColumns(Aws::Vector<TopicColumn>&& value) { SetColumns(std::move(value)); return *this;}

    /**
     * <p>The list of column definitions.</p>
     */
    inline DatasetMetadata& AddColumns(const TopicColumn& value) { m_columnsHasBeenSet = true; m_columns.push_back(value); return *this; }

    /**
     * <p>The list of column definitions.</p>
     */
    inline DatasetMetadata& AddColumns(TopicColumn&& value) { m_columnsHasBeenSet = true; m_columns.push_back(std::move(value)); return *this; }


    /**
     * <p>The list of calculated field definitions.</p>
     */
    inline const Aws::Vector<TopicCalculatedField>& GetCalculatedFields() const{ return m_calculatedFields; }

    /**
     * <p>The list of calculated field definitions.</p>
     */
    inline bool CalculatedFieldsHasBeenSet() const { return m_calculatedFieldsHasBeenSet; }

    /**
     * <p>The list of calculated field definitions.</p>
     */
    inline void SetCalculatedFields(const Aws::Vector<TopicCalculatedField>& value) { m_calculatedFieldsHasBeenSet = true; m_calculatedFields = value; }

    /**
     * <p>The list of calculated field definitions.</p>
     */
    inline void SetCalculatedFields(Aws::Vector<TopicCalculatedField>&& value) { m_calculatedFieldsHasBeenSet = true; m_calculatedFields = std::move(value); }

    /**
     * <p>The list of calculated field definitions.</p>
     */
    inline DatasetMetadata& WithCalculatedFields(const Aws::Vector<TopicCalculatedField>& value) { SetCalculatedFields(value); return *this;}

    /**
     * <p>The list of calculated field definitions.</p>
     */
    inline DatasetMetadata& WithCalculatedFields(Aws::Vector<TopicCalculatedField>&& value) { SetCalculatedFields(std::move(value)); return *this;}

    /**
     * <p>The list of calculated field definitions.</p>
     */
    inline DatasetMetadata& AddCalculatedFields(const TopicCalculatedField& value) { m_calculatedFieldsHasBeenSet = true; m_calculatedFields.push_back(value); return *this; }

    /**
     * <p>The list of calculated field definitions.</p>
     */
    inline DatasetMetadata& AddCalculatedFields(TopicCalculatedField&& value) { m_calculatedFieldsHasBeenSet = true; m_calculatedFields.push_back(std::move(value)); return *this; }


    /**
     * <p>The list of named entities definitions.</p>
     */
    inline const Aws::Vector<TopicNamedEntity>& GetNamedEntities() const{ return m_namedEntities; }

    /**
     * <p>The list of named entities definitions.</p>
     */
    inline bool NamedEntitiesHasBeenSet() const { return m_namedEntitiesHasBeenSet; }

    /**
     * <p>The list of named entities definitions.</p>
     */
    inline void SetNamedEntities(const Aws::Vector<TopicNamedEntity>& value) { m_namedEntitiesHasBeenSet = true; m_namedEntities = value; }

    /**
     * <p>The list of named entities definitions.</p>
     */
    inline void SetNamedEntities(Aws::Vector<TopicNamedEntity>&& value) { m_namedEntitiesHasBeenSet = true; m_namedEntities = std::move(value); }

    /**
     * <p>The list of named entities definitions.</p>
     */
    inline DatasetMetadata& WithNamedEntities(const Aws::Vector<TopicNamedEntity>& value) { SetNamedEntities(value); return *this;}

    /**
     * <p>The list of named entities definitions.</p>
     */
    inline DatasetMetadata& WithNamedEntities(Aws::Vector<TopicNamedEntity>&& value) { SetNamedEntities(std::move(value)); return *this;}

    /**
     * <p>The list of named entities definitions.</p>
     */
    inline DatasetMetadata& AddNamedEntities(const TopicNamedEntity& value) { m_namedEntitiesHasBeenSet = true; m_namedEntities.push_back(value); return *this; }

    /**
     * <p>The list of named entities definitions.</p>
     */
    inline DatasetMetadata& AddNamedEntities(TopicNamedEntity&& value) { m_namedEntitiesHasBeenSet = true; m_namedEntities.push_back(std::move(value)); return *this; }

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
