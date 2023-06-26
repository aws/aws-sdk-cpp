/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/personalize/model/TrainingDataConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Personalize
{
namespace Model
{

TrainingDataConfig::TrainingDataConfig() : 
    m_excludedDatasetColumnsHasBeenSet(false)
{
}

TrainingDataConfig::TrainingDataConfig(JsonView jsonValue) : 
    m_excludedDatasetColumnsHasBeenSet(false)
{
  *this = jsonValue;
}

TrainingDataConfig& TrainingDataConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("excludedDatasetColumns"))
  {
    Aws::Map<Aws::String, JsonView> excludedDatasetColumnsJsonMap = jsonValue.GetObject("excludedDatasetColumns").GetAllObjects();
    for(auto& excludedDatasetColumnsItem : excludedDatasetColumnsJsonMap)
    {
      Aws::Utils::Array<JsonView> columnNamesListJsonList = excludedDatasetColumnsItem.second.AsArray();
      Aws::Vector<Aws::String> columnNamesListList;
      columnNamesListList.reserve((size_t)columnNamesListJsonList.GetLength());
      for(unsigned columnNamesListIndex = 0; columnNamesListIndex < columnNamesListJsonList.GetLength(); ++columnNamesListIndex)
      {
        columnNamesListList.push_back(columnNamesListJsonList[columnNamesListIndex].AsString());
      }
      m_excludedDatasetColumns[excludedDatasetColumnsItem.first] = std::move(columnNamesListList);
    }
    m_excludedDatasetColumnsHasBeenSet = true;
  }

  return *this;
}

JsonValue TrainingDataConfig::Jsonize() const
{
  JsonValue payload;

  if(m_excludedDatasetColumnsHasBeenSet)
  {
   JsonValue excludedDatasetColumnsJsonMap;
   for(auto& excludedDatasetColumnsItem : m_excludedDatasetColumns)
   {
     Aws::Utils::Array<JsonValue> columnNamesListJsonList(excludedDatasetColumnsItem.second.size());
     for(unsigned columnNamesListIndex = 0; columnNamesListIndex < columnNamesListJsonList.GetLength(); ++columnNamesListIndex)
     {
       columnNamesListJsonList[columnNamesListIndex].AsString(excludedDatasetColumnsItem.second[columnNamesListIndex]);
     }
     excludedDatasetColumnsJsonMap.WithArray(excludedDatasetColumnsItem.first, std::move(columnNamesListJsonList));
   }
   payload.WithObject("excludedDatasetColumns", std::move(excludedDatasetColumnsJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace Personalize
} // namespace Aws
