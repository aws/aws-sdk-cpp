/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/RelationalTable.h>
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

RelationalTable::RelationalTable() : 
    m_dataSourceArnHasBeenSet(false),
    m_catalogHasBeenSet(false),
    m_schemaHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_inputColumnsHasBeenSet(false)
{
}

RelationalTable::RelationalTable(JsonView jsonValue) : 
    m_dataSourceArnHasBeenSet(false),
    m_catalogHasBeenSet(false),
    m_schemaHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_inputColumnsHasBeenSet(false)
{
  *this = jsonValue;
}

RelationalTable& RelationalTable::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DataSourceArn"))
  {
    m_dataSourceArn = jsonValue.GetString("DataSourceArn");

    m_dataSourceArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Catalog"))
  {
    m_catalog = jsonValue.GetString("Catalog");

    m_catalogHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Schema"))
  {
    m_schema = jsonValue.GetString("Schema");

    m_schemaHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InputColumns"))
  {
    Aws::Utils::Array<JsonView> inputColumnsJsonList = jsonValue.GetArray("InputColumns");
    for(unsigned inputColumnsIndex = 0; inputColumnsIndex < inputColumnsJsonList.GetLength(); ++inputColumnsIndex)
    {
      m_inputColumns.push_back(inputColumnsJsonList[inputColumnsIndex].AsObject());
    }
    m_inputColumnsHasBeenSet = true;
  }

  return *this;
}

JsonValue RelationalTable::Jsonize() const
{
  JsonValue payload;

  if(m_dataSourceArnHasBeenSet)
  {
   payload.WithString("DataSourceArn", m_dataSourceArn);

  }

  if(m_catalogHasBeenSet)
  {
   payload.WithString("Catalog", m_catalog);

  }

  if(m_schemaHasBeenSet)
  {
   payload.WithString("Schema", m_schema);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_inputColumnsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> inputColumnsJsonList(m_inputColumns.size());
   for(unsigned inputColumnsIndex = 0; inputColumnsIndex < inputColumnsJsonList.GetLength(); ++inputColumnsIndex)
   {
     inputColumnsJsonList[inputColumnsIndex].AsObject(m_inputColumns[inputColumnsIndex].Jsonize());
   }
   payload.WithArray("InputColumns", std::move(inputColumnsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
