/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53-recovery-control-config/model/ClusterEndpoint.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Route53RecoveryControlConfig
{
namespace Model
{

ClusterEndpoint::ClusterEndpoint() : 
    m_endpointHasBeenSet(false),
    m_regionHasBeenSet(false)
{
}

ClusterEndpoint::ClusterEndpoint(JsonView jsonValue) : 
    m_endpointHasBeenSet(false),
    m_regionHasBeenSet(false)
{
  *this = jsonValue;
}

ClusterEndpoint& ClusterEndpoint::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Endpoint"))
  {
    m_endpoint = jsonValue.GetString("Endpoint");

    m_endpointHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Region"))
  {
    m_region = jsonValue.GetString("Region");

    m_regionHasBeenSet = true;
  }

  return *this;
}

JsonValue ClusterEndpoint::Jsonize() const
{
  JsonValue payload;

  if(m_endpointHasBeenSet)
  {
   payload.WithString("Endpoint", m_endpoint);

  }

  if(m_regionHasBeenSet)
  {
   payload.WithString("Region", m_region);

  }

  return payload;
}

} // namespace Model
} // namespace Route53RecoveryControlConfig
} // namespace Aws
