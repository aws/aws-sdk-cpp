/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/supplychain/model/DataLakeDatasetSchema.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SupplyChain
{
namespace Model
{

DataLakeDatasetSchema::DataLakeDatasetSchema(JsonView jsonValue)
{
  *this = jsonValue;
}

DataLakeDatasetSchema& DataLakeDatasetSchema::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("fields"))
  {
    Aws::Utils::Array<JsonView> fieldsJsonList = jsonValue.GetArray("fields");
    for(unsigned fieldsIndex = 0; fieldsIndex < fieldsJsonList.GetLength(); ++fieldsIndex)
    {
      m_fields.push_back(fieldsJsonList[fieldsIndex].AsObject());
    }
    m_fieldsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("primaryKeys"))
  {
    Aws::Utils::Array<JsonView> primaryKeysJsonList = jsonValue.GetArray("primaryKeys");
    for(unsigned primaryKeysIndex = 0; primaryKeysIndex < primaryKeysJsonList.GetLength(); ++primaryKeysIndex)
    {
      m_primaryKeys.push_back(primaryKeysJsonList[primaryKeysIndex].AsObject());
    }
    m_primaryKeysHasBeenSet = true;
  }
  return *this;
}

JsonValue DataLakeDatasetSchema::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_fieldsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> fieldsJsonList(m_fields.size());
   for(unsigned fieldsIndex = 0; fieldsIndex < fieldsJsonList.GetLength(); ++fieldsIndex)
   {
     fieldsJsonList[fieldsIndex].AsObject(m_fields[fieldsIndex].Jsonize());
   }
   payload.WithArray("fields", std::move(fieldsJsonList));

  }

  if(m_primaryKeysHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> primaryKeysJsonList(m_primaryKeys.size());
   for(unsigned primaryKeysIndex = 0; primaryKeysIndex < primaryKeysJsonList.GetLength(); ++primaryKeysIndex)
   {
     primaryKeysJsonList[primaryKeysIndex].AsObject(m_primaryKeys[primaryKeysIndex].Jsonize());
   }
   payload.WithArray("primaryKeys", std::move(primaryKeysJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SupplyChain
} // namespace Aws
