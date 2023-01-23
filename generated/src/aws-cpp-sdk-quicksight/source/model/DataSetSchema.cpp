/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/DataSetSchema.h>
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

DataSetSchema::DataSetSchema() : 
    m_columnSchemaListHasBeenSet(false)
{
}

DataSetSchema::DataSetSchema(JsonView jsonValue) : 
    m_columnSchemaListHasBeenSet(false)
{
  *this = jsonValue;
}

DataSetSchema& DataSetSchema::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ColumnSchemaList"))
  {
    Aws::Utils::Array<JsonView> columnSchemaListJsonList = jsonValue.GetArray("ColumnSchemaList");
    for(unsigned columnSchemaListIndex = 0; columnSchemaListIndex < columnSchemaListJsonList.GetLength(); ++columnSchemaListIndex)
    {
      m_columnSchemaList.push_back(columnSchemaListJsonList[columnSchemaListIndex].AsObject());
    }
    m_columnSchemaListHasBeenSet = true;
  }

  return *this;
}

JsonValue DataSetSchema::Jsonize() const
{
  JsonValue payload;

  if(m_columnSchemaListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> columnSchemaListJsonList(m_columnSchemaList.size());
   for(unsigned columnSchemaListIndex = 0; columnSchemaListIndex < columnSchemaListJsonList.GetLength(); ++columnSchemaListIndex)
   {
     columnSchemaListJsonList[columnSchemaListIndex].AsObject(m_columnSchemaList[columnSchemaListIndex].Jsonize());
   }
   payload.WithArray("ColumnSchemaList", std::move(columnSchemaListJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
