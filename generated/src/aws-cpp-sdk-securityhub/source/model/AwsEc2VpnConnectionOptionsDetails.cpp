/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsEc2VpnConnectionOptionsDetails.h>
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

AwsEc2VpnConnectionOptionsDetails::AwsEc2VpnConnectionOptionsDetails() : 
    m_staticRoutesOnly(false),
    m_staticRoutesOnlyHasBeenSet(false),
    m_tunnelOptionsHasBeenSet(false)
{
}

AwsEc2VpnConnectionOptionsDetails::AwsEc2VpnConnectionOptionsDetails(JsonView jsonValue) : 
    m_staticRoutesOnly(false),
    m_staticRoutesOnlyHasBeenSet(false),
    m_tunnelOptionsHasBeenSet(false)
{
  *this = jsonValue;
}

AwsEc2VpnConnectionOptionsDetails& AwsEc2VpnConnectionOptionsDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("StaticRoutesOnly"))
  {
    m_staticRoutesOnly = jsonValue.GetBool("StaticRoutesOnly");

    m_staticRoutesOnlyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TunnelOptions"))
  {
    Aws::Utils::Array<JsonView> tunnelOptionsJsonList = jsonValue.GetArray("TunnelOptions");
    for(unsigned tunnelOptionsIndex = 0; tunnelOptionsIndex < tunnelOptionsJsonList.GetLength(); ++tunnelOptionsIndex)
    {
      m_tunnelOptions.push_back(tunnelOptionsJsonList[tunnelOptionsIndex].AsObject());
    }
    m_tunnelOptionsHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsEc2VpnConnectionOptionsDetails::Jsonize() const
{
  JsonValue payload;

  if(m_staticRoutesOnlyHasBeenSet)
  {
   payload.WithBool("StaticRoutesOnly", m_staticRoutesOnly);

  }

  if(m_tunnelOptionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tunnelOptionsJsonList(m_tunnelOptions.size());
   for(unsigned tunnelOptionsIndex = 0; tunnelOptionsIndex < tunnelOptionsJsonList.GetLength(); ++tunnelOptionsIndex)
   {
     tunnelOptionsJsonList[tunnelOptionsIndex].AsObject(m_tunnelOptions[tunnelOptionsIndex].Jsonize());
   }
   payload.WithArray("TunnelOptions", std::move(tunnelOptionsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
