/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/LogicalTable.h>
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

LogicalTable::LogicalTable() : 
    m_aliasHasBeenSet(false),
    m_dataTransformsHasBeenSet(false),
    m_sourceHasBeenSet(false)
{
}

LogicalTable::LogicalTable(JsonView jsonValue) : 
    m_aliasHasBeenSet(false),
    m_dataTransformsHasBeenSet(false),
    m_sourceHasBeenSet(false)
{
  *this = jsonValue;
}

LogicalTable& LogicalTable::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Alias"))
  {
    m_alias = jsonValue.GetString("Alias");

    m_aliasHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DataTransforms"))
  {
    Aws::Utils::Array<JsonView> dataTransformsJsonList = jsonValue.GetArray("DataTransforms");
    for(unsigned dataTransformsIndex = 0; dataTransformsIndex < dataTransformsJsonList.GetLength(); ++dataTransformsIndex)
    {
      m_dataTransforms.push_back(dataTransformsJsonList[dataTransformsIndex].AsObject());
    }
    m_dataTransformsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Source"))
  {
    m_source = jsonValue.GetObject("Source");

    m_sourceHasBeenSet = true;
  }

  return *this;
}

JsonValue LogicalTable::Jsonize() const
{
  JsonValue payload;

  if(m_aliasHasBeenSet)
  {
   payload.WithString("Alias", m_alias);

  }

  if(m_dataTransformsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> dataTransformsJsonList(m_dataTransforms.size());
   for(unsigned dataTransformsIndex = 0; dataTransformsIndex < dataTransformsJsonList.GetLength(); ++dataTransformsIndex)
   {
     dataTransformsJsonList[dataTransformsIndex].AsObject(m_dataTransforms[dataTransformsIndex].Jsonize());
   }
   payload.WithArray("DataTransforms", std::move(dataTransformsJsonList));

  }

  if(m_sourceHasBeenSet)
  {
   payload.WithObject("Source", m_source.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
