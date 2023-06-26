/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/memorydb/model/ReshardingStatus.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MemoryDB
{
namespace Model
{

ReshardingStatus::ReshardingStatus() : 
    m_slotMigrationHasBeenSet(false)
{
}

ReshardingStatus::ReshardingStatus(JsonView jsonValue) : 
    m_slotMigrationHasBeenSet(false)
{
  *this = jsonValue;
}

ReshardingStatus& ReshardingStatus::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SlotMigration"))
  {
    m_slotMigration = jsonValue.GetObject("SlotMigration");

    m_slotMigrationHasBeenSet = true;
  }

  return *this;
}

JsonValue ReshardingStatus::Jsonize() const
{
  JsonValue payload;

  if(m_slotMigrationHasBeenSet)
  {
   payload.WithObject("SlotMigration", m_slotMigration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace MemoryDB
} // namespace Aws
