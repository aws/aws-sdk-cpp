/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/memorydb/model/Subnet.h>
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

Subnet::Subnet() : 
    m_identifierHasBeenSet(false),
    m_availabilityZoneHasBeenSet(false)
{
}

Subnet::Subnet(JsonView jsonValue) : 
    m_identifierHasBeenSet(false),
    m_availabilityZoneHasBeenSet(false)
{
  *this = jsonValue;
}

Subnet& Subnet::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Identifier"))
  {
    m_identifier = jsonValue.GetString("Identifier");

    m_identifierHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AvailabilityZone"))
  {
    m_availabilityZone = jsonValue.GetObject("AvailabilityZone");

    m_availabilityZoneHasBeenSet = true;
  }

  return *this;
}

JsonValue Subnet::Jsonize() const
{
  JsonValue payload;

  if(m_identifierHasBeenSet)
  {
   payload.WithString("Identifier", m_identifier);

  }

  if(m_availabilityZoneHasBeenSet)
  {
   payload.WithObject("AvailabilityZone", m_availabilityZone.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace MemoryDB
} // namespace Aws
