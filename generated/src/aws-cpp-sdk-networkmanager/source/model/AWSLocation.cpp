/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/networkmanager/model/AWSLocation.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace NetworkManager
{
namespace Model
{

AWSLocation::AWSLocation() : 
    m_zoneHasBeenSet(false),
    m_subnetArnHasBeenSet(false)
{
}

AWSLocation::AWSLocation(JsonView jsonValue) : 
    m_zoneHasBeenSet(false),
    m_subnetArnHasBeenSet(false)
{
  *this = jsonValue;
}

AWSLocation& AWSLocation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Zone"))
  {
    m_zone = jsonValue.GetString("Zone");

    m_zoneHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SubnetArn"))
  {
    m_subnetArn = jsonValue.GetString("SubnetArn");

    m_subnetArnHasBeenSet = true;
  }

  return *this;
}

JsonValue AWSLocation::Jsonize() const
{
  JsonValue payload;

  if(m_zoneHasBeenSet)
  {
   payload.WithString("Zone", m_zone);

  }

  if(m_subnetArnHasBeenSet)
  {
   payload.WithString("SubnetArn", m_subnetArn);

  }

  return payload;
}

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
