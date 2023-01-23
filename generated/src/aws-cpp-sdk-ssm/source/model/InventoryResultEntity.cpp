/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/InventoryResultEntity.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SSM
{
namespace Model
{

InventoryResultEntity::InventoryResultEntity() : 
    m_idHasBeenSet(false),
    m_dataHasBeenSet(false)
{
}

InventoryResultEntity::InventoryResultEntity(JsonView jsonValue) : 
    m_idHasBeenSet(false),
    m_dataHasBeenSet(false)
{
  *this = jsonValue;
}

InventoryResultEntity& InventoryResultEntity::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Data"))
  {
    Aws::Map<Aws::String, JsonView> dataJsonMap = jsonValue.GetObject("Data").GetAllObjects();
    for(auto& dataItem : dataJsonMap)
    {
      m_data[dataItem.first] = dataItem.second.AsObject();
    }
    m_dataHasBeenSet = true;
  }

  return *this;
}

JsonValue InventoryResultEntity::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_dataHasBeenSet)
  {
   JsonValue dataJsonMap;
   for(auto& dataItem : m_data)
   {
     dataJsonMap.WithObject(dataItem.first, dataItem.second.Jsonize());
   }
   payload.WithObject("Data", std::move(dataJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace SSM
} // namespace Aws
