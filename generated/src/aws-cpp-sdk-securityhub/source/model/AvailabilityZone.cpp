/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AvailabilityZone.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

AvailabilityZone::AvailabilityZone() : 
    m_zoneNameHasBeenSet(false),
    m_subnetIdHasBeenSet(false)
{
}

AvailabilityZone::AvailabilityZone(JsonView jsonValue) : 
    m_zoneNameHasBeenSet(false),
    m_subnetIdHasBeenSet(false)
{
  *this = jsonValue;
}

AvailabilityZone& AvailabilityZone::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ZoneName"))
  {
    m_zoneName = jsonValue.GetString("ZoneName");

    m_zoneNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SubnetId"))
  {
    m_subnetId = jsonValue.GetString("SubnetId");

    m_subnetIdHasBeenSet = true;
  }

  return *this;
}

JsonValue AvailabilityZone::Jsonize() const
{
  JsonValue payload;

  if(m_zoneNameHasBeenSet)
  {
   payload.WithString("ZoneName", m_zoneName);

  }

  if(m_subnetIdHasBeenSet)
  {
   payload.WithString("SubnetId", m_subnetId);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
