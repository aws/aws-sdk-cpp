/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/servicediscovery/model/PublicDnsPropertiesMutableChange.h>
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

PublicDnsPropertiesMutableChange::PublicDnsPropertiesMutableChange() : 
    m_sOAHasBeenSet(false)
{
}

PublicDnsPropertiesMutableChange::PublicDnsPropertiesMutableChange(JsonView jsonValue) : 
    m_sOAHasBeenSet(false)
{
  *this = jsonValue;
}

PublicDnsPropertiesMutableChange& PublicDnsPropertiesMutableChange::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SOA"))
  {
    m_sOA = jsonValue.GetObject("SOA");

    m_sOAHasBeenSet = true;
  }

  return *this;
}

JsonValue PublicDnsPropertiesMutableChange::Jsonize() const
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
