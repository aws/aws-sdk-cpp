/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/DatasetMetadata.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QuickSight
{
namespace Model
{

DatasetMetadata::DatasetMetadata() : 
    m_datasetArnHasBeenSet(false),
    m_datasetNameHasBeenSet(false),
    m_datasetDescriptionHasBeenSet(false),
    m_dataAggregationHasBeenSet(false),
    m_filtersHasBeenSet(false),
    m_columnsHasBeenSet(false),
    m_calculatedFieldsHasBeenSet(false),
    m_namedEntitiesHasBeenSet(false)
{
}

DatasetMetadata::DatasetMetadata(JsonView jsonValue) : 
    m_datasetArnHasBeenSet(false),
    m_datasetNameHasBeenSet(false),
    m_datasetDescriptionHasBeenSet(false),
    m_dataAggregationHasBeenSet(false),
    m_filtersHasBeenSet(false),
    m_columnsHasBeenSet(false),
    m_calculatedFieldsHasBeenSet(false),
    m_namedEntitiesHasBeenSet(false)
{
  *this = jsonValue;
}

DatasetMetadata& DatasetMetadata::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DatasetArn"))
  {
    m_datasetArn = jsonValue.GetString("DatasetArn");

    m_datasetArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DatasetName"))
  {
    m_datasetName = jsonValue.GetString("DatasetName");

    m_datasetNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DatasetDescription"))
  {
    m_datasetDescription = jsonValue.GetString("DatasetDescription");

    m_datasetDescriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DataAggregation"))
  {
    m_dataAggregation = jsonValue.GetObject("DataAggregation");

    m_dataAggregationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Filters"))
  {
    Aws::Utils::Array<JsonView> filtersJsonList = jsonValue.GetArray("Filters");
    for(unsigned filtersIndex = 0; filtersIndex < filtersJsonList.GetLength(); ++filtersIndex)
    {
      m_filters.push_back(filtersJsonList[filtersIndex].AsObject());
    }
    m_filtersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Columns"))
  {
    Aws::Utils::Array<JsonView> columnsJsonList = jsonValue.GetArray("Columns");
    for(unsigned columnsIndex = 0; columnsIndex < columnsJsonList.GetLength(); ++columnsIndex)
    {
      m_columns.push_back(columnsJsonList[columnsIndex].AsObject());
    }
    m_columnsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CalculatedFields"))
  {
    Aws::Utils::Array<JsonView> calculatedFieldsJsonList = jsonValue.GetArray("CalculatedFields");
    for(unsigned calculatedFieldsIndex = 0; calculatedFieldsIndex < calculatedFieldsJsonList.GetLength(); ++calculatedFieldsIndex)
    {
      m_calculatedFields.push_back(calculatedFieldsJsonList[calculatedFieldsIndex].AsObject());
    }
    m_calculatedFieldsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NamedEntities"))
  {
    Aws::Utils::Array<JsonView> namedEntitiesJsonList = jsonValue.GetArray("NamedEntities");
    for(unsigned namedEntitiesIndex = 0; namedEntitiesIndex < namedEntitiesJsonList.GetLength(); ++namedEntitiesIndex)
    {
      m_namedEntities.push_back(namedEntitiesJsonList[namedEntitiesIndex].AsObject());
    }
    m_namedEntitiesHasBeenSet = true;
  }

  return *this;
}

JsonValue DatasetMetadata::Jsonize() const
{
  JsonValue payload;

  if(m_datasetArnHasBeenSet)
  {
   payload.WithString("DatasetArn", m_datasetArn);

  }

  if(m_datasetNameHasBeenSet)
  {
   payload.WithString("DatasetName", m_datasetName);

  }

  if(m_datasetDescriptionHasBeenSet)
  {
   payload.WithString("DatasetDescription", m_datasetDescription);

  }

  if(m_dataAggregationHasBeenSet)
  {
   payload.WithObject("DataAggregation", m_dataAggregation.Jsonize());

  }

  if(m_filtersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> filtersJsonList(m_filters.size());
   for(unsigned filtersIndex = 0; filtersIndex < filtersJsonList.GetLength(); ++filtersIndex)
   {
     filtersJsonList[filtersIndex].AsObject(m_filters[filtersIndex].Jsonize());
   }
   payload.WithArray("Filters", std::move(filtersJsonList));

  }

  if(m_columnsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> columnsJsonList(m_columns.size());
   for(unsigned columnsIndex = 0; columnsIndex < columnsJsonList.GetLength(); ++columnsIndex)
   {
     columnsJsonList[columnsIndex].AsObject(m_columns[columnsIndex].Jsonize());
   }
   payload.WithArray("Columns", std::move(columnsJsonList));

  }

  if(m_calculatedFieldsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> calculatedFieldsJsonList(m_calculatedFields.size());
   for(unsigned calculatedFieldsIndex = 0; calculatedFieldsIndex < calculatedFieldsJsonList.GetLength(); ++calculatedFieldsIndex)
   {
     calculatedFieldsJsonList[calculatedFieldsIndex].AsObject(m_calculatedFields[calculatedFieldsIndex].Jsonize());
   }
   payload.WithArray("CalculatedFields", std::move(calculatedFieldsJsonList));

  }

  if(m_namedEntitiesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> namedEntitiesJsonList(m_namedEntities.size());
   for(unsigned namedEntitiesIndex = 0; namedEntitiesIndex < namedEntitiesJsonList.GetLength(); ++namedEntitiesIndex)
   {
     namedEntitiesJsonList[namedEntitiesIndex].AsObject(m_namedEntities[namedEntitiesIndex].Jsonize());
   }
   payload.WithArray("NamedEntities", std::move(namedEntitiesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
