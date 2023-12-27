/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm-sap/model/IpAddressMember.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SsmSap
{
namespace Model
{

IpAddressMember::IpAddressMember() : 
    m_ipAddressHasBeenSet(false),
    m_primary(false),
    m_primaryHasBeenSet(false),
    m_allocationType(AllocationType::NOT_SET),
    m_allocationTypeHasBeenSet(false)
{
}

IpAddressMember::IpAddressMember(JsonView jsonValue) : 
    m_ipAddressHasBeenSet(false),
    m_primary(false),
    m_primaryHasBeenSet(false),
    m_allocationType(AllocationType::NOT_SET),
    m_allocationTypeHasBeenSet(false)
{
  *this = jsonValue;
}

IpAddressMember& IpAddressMember::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("IpAddress"))
  {
    m_ipAddress = jsonValue.GetString("IpAddress");

    m_ipAddressHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Primary"))
  {
    m_primary = jsonValue.GetBool("Primary");

    m_primaryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AllocationType"))
  {
    m_allocationType = AllocationTypeMapper::GetAllocationTypeForName(jsonValue.GetString("AllocationType"));

    m_allocationTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue IpAddressMember::Jsonize() const
{
  JsonValue payload;

  if(m_ipAddressHasBeenSet)
  {
   payload.WithString("IpAddress", m_ipAddress);

  }

  if(m_primaryHasBeenSet)
  {
   payload.WithBool("Primary", m_primary);

  }

  if(m_allocationTypeHasBeenSet)
  {
   payload.WithString("AllocationType", AllocationTypeMapper::GetNameForAllocationType(m_allocationType));
  }

  return payload;
}

} // namespace Model
} // namespace SsmSap
} // namespace Aws
