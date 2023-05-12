/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/DataAggregation.h>
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

DataAggregation::DataAggregation() : 
    m_datasetRowDateGranularity(TopicTimeGranularity::NOT_SET),
    m_datasetRowDateGranularityHasBeenSet(false),
    m_defaultDateColumnNameHasBeenSet(false)
{
}

DataAggregation::DataAggregation(JsonView jsonValue) : 
    m_datasetRowDateGranularity(TopicTimeGranularity::NOT_SET),
    m_datasetRowDateGranularityHasBeenSet(false),
    m_defaultDateColumnNameHasBeenSet(false)
{
  *this = jsonValue;
}

DataAggregation& DataAggregation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DatasetRowDateGranularity"))
  {
    m_datasetRowDateGranularity = TopicTimeGranularityMapper::GetTopicTimeGranularityForName(jsonValue.GetString("DatasetRowDateGranularity"));

    m_datasetRowDateGranularityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DefaultDateColumnName"))
  {
    m_defaultDateColumnName = jsonValue.GetString("DefaultDateColumnName");

    m_defaultDateColumnNameHasBeenSet = true;
  }

  return *this;
}

JsonValue DataAggregation::Jsonize() const
{
  JsonValue payload;

  if(m_datasetRowDateGranularityHasBeenSet)
  {
   payload.WithString("DatasetRowDateGranularity", TopicTimeGranularityMapper::GetNameForTopicTimeGranularity(m_datasetRowDateGranularity));
  }

  if(m_defaultDateColumnNameHasBeenSet)
  {
   payload.WithString("DefaultDateColumnName", m_defaultDateColumnName);

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
