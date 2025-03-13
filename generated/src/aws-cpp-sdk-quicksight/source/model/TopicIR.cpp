/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/TopicIR.h>
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

TopicIR::TopicIR(JsonView jsonValue)
{
  *this = jsonValue;
}

TopicIR& TopicIR::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Metrics"))
  {
    Aws::Utils::Array<JsonView> metricsJsonList = jsonValue.GetArray("Metrics");
    for(unsigned metricsIndex = 0; metricsIndex < metricsJsonList.GetLength(); ++metricsIndex)
    {
      m_metrics.push_back(metricsJsonList[metricsIndex].AsObject());
    }
    m_metricsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("GroupByList"))
  {
    Aws::Utils::Array<JsonView> groupByListJsonList = jsonValue.GetArray("GroupByList");
    for(unsigned groupByListIndex = 0; groupByListIndex < groupByListJsonList.GetLength(); ++groupByListIndex)
    {
      m_groupByList.push_back(groupByListJsonList[groupByListIndex].AsObject());
    }
    m_groupByListHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Filters"))
  {
    Aws::Utils::Array<JsonView> filtersJsonList = jsonValue.GetArray("Filters");
    for(unsigned filtersIndex = 0; filtersIndex < filtersJsonList.GetLength(); ++filtersIndex)
    {
      Aws::Utils::Array<JsonView> topicIRFilterEntryJsonList = filtersJsonList[filtersIndex].AsArray();
      Aws::Vector<TopicIRFilterOption> topicIRFilterEntryList;
      topicIRFilterEntryList.reserve((size_t)topicIRFilterEntryJsonList.GetLength());
      for(unsigned topicIRFilterEntryIndex = 0; topicIRFilterEntryIndex < topicIRFilterEntryJsonList.GetLength(); ++topicIRFilterEntryIndex)
      {
        topicIRFilterEntryList.push_back(topicIRFilterEntryJsonList[topicIRFilterEntryIndex].AsObject());
      }
      m_filters.push_back(std::move(topicIRFilterEntryList));
    }
    m_filtersHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Sort"))
  {
    m_sort = jsonValue.GetObject("Sort");
    m_sortHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ContributionAnalysis"))
  {
    m_contributionAnalysis = jsonValue.GetObject("ContributionAnalysis");
    m_contributionAnalysisHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Visual"))
  {
    m_visual = jsonValue.GetObject("Visual");
    m_visualHasBeenSet = true;
  }
  return *this;
}

JsonValue TopicIR::Jsonize() const
{
  JsonValue payload;

  if(m_metricsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> metricsJsonList(m_metrics.size());
   for(unsigned metricsIndex = 0; metricsIndex < metricsJsonList.GetLength(); ++metricsIndex)
   {
     metricsJsonList[metricsIndex].AsObject(m_metrics[metricsIndex].Jsonize());
   }
   payload.WithArray("Metrics", std::move(metricsJsonList));

  }

  if(m_groupByListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> groupByListJsonList(m_groupByList.size());
   for(unsigned groupByListIndex = 0; groupByListIndex < groupByListJsonList.GetLength(); ++groupByListIndex)
   {
     groupByListJsonList[groupByListIndex].AsObject(m_groupByList[groupByListIndex].Jsonize());
   }
   payload.WithArray("GroupByList", std::move(groupByListJsonList));

  }

  if(m_filtersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> filtersJsonList(m_filters.size());
   for(unsigned filtersIndex = 0; filtersIndex < filtersJsonList.GetLength(); ++filtersIndex)
   {
     Aws::Utils::Array<JsonValue> topicIRFilterEntryJsonList(m_filters[filtersIndex].size());
     for(unsigned topicIRFilterEntryIndex = 0; topicIRFilterEntryIndex < topicIRFilterEntryJsonList.GetLength(); ++topicIRFilterEntryIndex)
     {
       topicIRFilterEntryJsonList[topicIRFilterEntryIndex].AsObject(m_filters[filtersIndex][topicIRFilterEntryIndex].Jsonize());
     }
     filtersJsonList[filtersIndex].AsArray(std::move(topicIRFilterEntryJsonList));
   }
   payload.WithArray("Filters", std::move(filtersJsonList));

  }

  if(m_sortHasBeenSet)
  {
   payload.WithObject("Sort", m_sort.Jsonize());

  }

  if(m_contributionAnalysisHasBeenSet)
  {
   payload.WithObject("ContributionAnalysis", m_contributionAnalysis.Jsonize());

  }

  if(m_visualHasBeenSet)
  {
   payload.WithObject("Visual", m_visual.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
