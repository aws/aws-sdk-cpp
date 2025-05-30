/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/network-firewall/model/AvailabilityZoneMetadata.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace NetworkFirewall
{
namespace Model
{

AvailabilityZoneMetadata::AvailabilityZoneMetadata(JsonView jsonValue)
{
  *this = jsonValue;
}

AvailabilityZoneMetadata& AvailabilityZoneMetadata::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("IPAddressType"))
  {
    m_iPAddressType = IPAddressTypeMapper::GetIPAddressTypeForName(jsonValue.GetString("IPAddressType"));
    m_iPAddressTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue AvailabilityZoneMetadata::Jsonize() const
{
  JsonValue payload;

  if(m_iPAddressTypeHasBeenSet)
  {
   payload.WithString("IPAddressType", IPAddressTypeMapper::GetNameForIPAddressType(m_iPAddressType));
  }

  return payload;
}

} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
