/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsRdsDbInstanceEndpoint.h>
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

AwsRdsDbInstanceEndpoint::AwsRdsDbInstanceEndpoint() : 
    m_addressHasBeenSet(false),
    m_port(0),
    m_portHasBeenSet(false),
    m_hostedZoneIdHasBeenSet(false)
{
}

AwsRdsDbInstanceEndpoint::AwsRdsDbInstanceEndpoint(JsonView jsonValue) : 
    m_addressHasBeenSet(false),
    m_port(0),
    m_portHasBeenSet(false),
    m_hostedZoneIdHasBeenSet(false)
{
  *this = jsonValue;
}

AwsRdsDbInstanceEndpoint& AwsRdsDbInstanceEndpoint::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Address"))
  {
    m_address = jsonValue.GetString("Address");

    m_addressHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Port"))
  {
    m_port = jsonValue.GetInteger("Port");

    m_portHasBeenSet = true;
  }

  if(jsonValue.ValueExists("HostedZoneId"))
  {
    m_hostedZoneId = jsonValue.GetString("HostedZoneId");

    m_hostedZoneIdHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsRdsDbInstanceEndpoint::Jsonize() const
{
  JsonValue payload;

  if(m_addressHasBeenSet)
  {
   payload.WithString("Address", m_address);

  }

  if(m_portHasBeenSet)
  {
   payload.WithInteger("Port", m_port);

  }

  if(m_hostedZoneIdHasBeenSet)
  {
   payload.WithString("HostedZoneId", m_hostedZoneId);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
