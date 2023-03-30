/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/vpc-lattice/model/DnsEntry.h>
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

DnsEntry::DnsEntry() : 
    m_domainNameHasBeenSet(false),
    m_hostedZoneIdHasBeenSet(false)
{
}

DnsEntry::DnsEntry(JsonView jsonValue) : 
    m_domainNameHasBeenSet(false),
    m_hostedZoneIdHasBeenSet(false)
{
  *this = jsonValue;
}

DnsEntry& DnsEntry::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("domainName"))
  {
    m_domainName = jsonValue.GetString("domainName");

    m_domainNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("hostedZoneId"))
  {
    m_hostedZoneId = jsonValue.GetString("hostedZoneId");

    m_hostedZoneIdHasBeenSet = true;
  }

  return *this;
}

JsonValue DnsEntry::Jsonize() const
{
  JsonValue payload;

  if(m_domainNameHasBeenSet)
  {
   payload.WithString("domainName", m_domainName);

  }

  if(m_hostedZoneIdHasBeenSet)
  {
   payload.WithString("hostedZoneId", m_hostedZoneId);

  }

  return payload;
}

} // namespace Model
} // namespace VPCLattice
} // namespace Aws
