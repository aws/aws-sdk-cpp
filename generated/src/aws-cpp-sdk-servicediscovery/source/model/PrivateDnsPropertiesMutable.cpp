/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/servicediscovery/model/PrivateDnsPropertiesMutable.h>
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

PrivateDnsPropertiesMutable::PrivateDnsPropertiesMutable() : 
    m_sOAHasBeenSet(false)
{
}

PrivateDnsPropertiesMutable::PrivateDnsPropertiesMutable(JsonView jsonValue) : 
    m_sOAHasBeenSet(false)
{
  *this = jsonValue;
}

PrivateDnsPropertiesMutable& PrivateDnsPropertiesMutable::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SOA"))
  {
    m_sOA = jsonValue.GetObject("SOA");

    m_sOAHasBeenSet = true;
  }

  return *this;
}

JsonValue PrivateDnsPropertiesMutable::Jsonize() const
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
