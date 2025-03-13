/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/vpc-lattice/model/DnsResource.h>
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

DnsResource::DnsResource(JsonView jsonValue)
{
  *this = jsonValue;
}

DnsResource& DnsResource::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("domainName"))
  {
    m_domainName = jsonValue.GetString("domainName");
    m_domainNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ipAddressType"))
  {
    m_ipAddressType = ResourceConfigurationIpAddressTypeMapper::GetResourceConfigurationIpAddressTypeForName(jsonValue.GetString("ipAddressType"));
    m_ipAddressTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue DnsResource::Jsonize() const
{
  JsonValue payload;

  if(m_domainNameHasBeenSet)
  {
   payload.WithString("domainName", m_domainName);

  }

  if(m_ipAddressTypeHasBeenSet)
  {
   payload.WithString("ipAddressType", ResourceConfigurationIpAddressTypeMapper::GetNameForResourceConfigurationIpAddressType(m_ipAddressType));
  }

  return payload;
}

} // namespace Model
} // namespace VPCLattice
} // namespace Aws
