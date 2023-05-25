/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/memorydb/model/SlotMigration.h>
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

SlotMigration::SlotMigration() : 
    m_progressPercentage(0.0),
    m_progressPercentageHasBeenSet(false)
{
}

SlotMigration::SlotMigration(JsonView jsonValue) : 
    m_progressPercentage(0.0),
    m_progressPercentageHasBeenSet(false)
{
  *this = jsonValue;
}

SlotMigration& SlotMigration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ProgressPercentage"))
  {
    m_progressPercentage = jsonValue.GetDouble("ProgressPercentage");

    m_progressPercentageHasBeenSet = true;
  }

  return *this;
}

JsonValue SlotMigration::Jsonize() const
{
  JsonValue payload;

  if(m_progressPercentageHasBeenSet)
  {
   payload.WithDouble("ProgressPercentage", m_progressPercentage);

  }

  return payload;
}

} // namespace Model
} // namespace MemoryDB
} // namespace Aws
