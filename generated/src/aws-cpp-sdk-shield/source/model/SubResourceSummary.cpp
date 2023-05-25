/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/shield/model/SubResourceSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Shield
{
namespace Model
{

SubResourceSummary::SubResourceSummary() : 
    m_type(SubResourceType::NOT_SET),
    m_typeHasBeenSet(false),
    m_idHasBeenSet(false),
    m_attackVectorsHasBeenSet(false),
    m_countersHasBeenSet(false)
{
}

SubResourceSummary::SubResourceSummary(JsonView jsonValue) : 
    m_type(SubResourceType::NOT_SET),
    m_typeHasBeenSet(false),
    m_idHasBeenSet(false),
    m_attackVectorsHasBeenSet(false),
    m_countersHasBeenSet(false)
{
  *this = jsonValue;
}

SubResourceSummary& SubResourceSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Type"))
  {
    m_type = SubResourceTypeMapper::GetSubResourceTypeForName(jsonValue.GetString("Type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AttackVectors"))
  {
    Aws::Utils::Array<JsonView> attackVectorsJsonList = jsonValue.GetArray("AttackVectors");
    for(unsigned attackVectorsIndex = 0; attackVectorsIndex < attackVectorsJsonList.GetLength(); ++attackVectorsIndex)
    {
      m_attackVectors.push_back(attackVectorsJsonList[attackVectorsIndex].AsObject());
    }
    m_attackVectorsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Counters"))
  {
    Aws::Utils::Array<JsonView> countersJsonList = jsonValue.GetArray("Counters");
    for(unsigned countersIndex = 0; countersIndex < countersJsonList.GetLength(); ++countersIndex)
    {
      m_counters.push_back(countersJsonList[countersIndex].AsObject());
    }
    m_countersHasBeenSet = true;
  }

  return *this;
}

JsonValue SubResourceSummary::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", SubResourceTypeMapper::GetNameForSubResourceType(m_type));
  }

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_attackVectorsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> attackVectorsJsonList(m_attackVectors.size());
   for(unsigned attackVectorsIndex = 0; attackVectorsIndex < attackVectorsJsonList.GetLength(); ++attackVectorsIndex)
   {
     attackVectorsJsonList[attackVectorsIndex].AsObject(m_attackVectors[attackVectorsIndex].Jsonize());
   }
   payload.WithArray("AttackVectors", std::move(attackVectorsJsonList));

  }

  if(m_countersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> countersJsonList(m_counters.size());
   for(unsigned countersIndex = 0; countersIndex < countersJsonList.GetLength(); ++countersIndex)
   {
     countersJsonList[countersIndex].AsObject(m_counters[countersIndex].Jsonize());
   }
   payload.WithArray("Counters", std::move(countersJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Shield
} // namespace Aws
