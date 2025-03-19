/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/vpc-lattice/model/IpResource.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace VPCLattice
{
namespace Model
{

IpResource::IpResource(JsonView jsonValue)
{
  *this = jsonValue;
}

IpResource& IpResource::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ipAddress"))
  {
    m_ipAddress = jsonValue.GetString("ipAddress");
    m_ipAddressHasBeenSet = true;
  }
  return *this;
}

JsonValue IpResource::Jsonize() const
{
  JsonValue payload;

  if(m_ipAddressHasBeenSet)
  {
   payload.WithString("ipAddress", m_ipAddress);

  }

  return payload;
}

} // namespace Model
} // namespace VPCLattice
} // namespace Aws
