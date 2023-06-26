/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/timestream-write/model/RecordsIngested.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace TimestreamWrite
{
namespace Model
{

RecordsIngested::RecordsIngested() : 
    m_total(0),
    m_totalHasBeenSet(false),
    m_memoryStore(0),
    m_memoryStoreHasBeenSet(false),
    m_magneticStore(0),
    m_magneticStoreHasBeenSet(false)
{
}

RecordsIngested::RecordsIngested(JsonView jsonValue) : 
    m_total(0),
    m_totalHasBeenSet(false),
    m_memoryStore(0),
    m_memoryStoreHasBeenSet(false),
    m_magneticStore(0),
    m_magneticStoreHasBeenSet(false)
{
  *this = jsonValue;
}

RecordsIngested& RecordsIngested::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Total"))
  {
    m_total = jsonValue.GetInteger("Total");

    m_totalHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MemoryStore"))
  {
    m_memoryStore = jsonValue.GetInteger("MemoryStore");

    m_memoryStoreHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MagneticStore"))
  {
    m_magneticStore = jsonValue.GetInteger("MagneticStore");

    m_magneticStoreHasBeenSet = true;
  }

  return *this;
}

JsonValue RecordsIngested::Jsonize() const
{
  JsonValue payload;

  if(m_totalHasBeenSet)
  {
   payload.WithInteger("Total", m_total);

  }

  if(m_memoryStoreHasBeenSet)
  {
   payload.WithInteger("MemoryStore", m_memoryStore);

  }

  if(m_magneticStoreHasBeenSet)
  {
   payload.WithInteger("MagneticStore", m_magneticStore);

  }

  return payload;
}

} // namespace Model
} // namespace TimestreamWrite
} // namespace Aws
