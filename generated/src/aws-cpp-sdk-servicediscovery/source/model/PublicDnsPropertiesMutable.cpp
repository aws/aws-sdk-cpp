/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/servicediscovery/model/PublicDnsPropertiesMutable.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ServiceDiscovery
{
namespace Model
{

PublicDnsPropertiesMutable::PublicDnsPropertiesMutable() : 
    m_sOAHasBeenSet(false)
{
}

PublicDnsPropertiesMutable::PublicDnsPropertiesMutable(JsonView jsonValue) : 
    m_sOAHasBeenSet(false)
{
  *this = jsonValue;
}

PublicDnsPropertiesMutable& PublicDnsPropertiesMutable::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SOA"))
  {
    m_sOA = jsonValue.GetObject("SOA");

    m_sOAHasBeenSet = true;
  }

  return *this;
}

JsonValue PublicDnsPropertiesMutable::Jsonize() const
{
  JsonValue payload;

  if(m_sOAHasBeenSet)
  {
   payload.WithObject("SOA", m_sOA.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace ServiceDiscovery
} // namespace Aws
