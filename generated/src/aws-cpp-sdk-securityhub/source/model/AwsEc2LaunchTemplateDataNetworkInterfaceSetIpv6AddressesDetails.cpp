/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsEc2LaunchTemplateDataNetworkInterfaceSetIpv6AddressesDetails.h>
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

AwsEc2LaunchTemplateDataNetworkInterfaceSetIpv6AddressesDetails::AwsEc2LaunchTemplateDataNetworkInterfaceSetIpv6AddressesDetails() : 
    m_ipv6AddressHasBeenSet(false)
{
}

AwsEc2LaunchTemplateDataNetworkInterfaceSetIpv6AddressesDetails::AwsEc2LaunchTemplateDataNetworkInterfaceSetIpv6AddressesDetails(JsonView jsonValue) : 
    m_ipv6AddressHasBeenSet(false)
{
  *this = jsonValue;
}

AwsEc2LaunchTemplateDataNetworkInterfaceSetIpv6AddressesDetails& AwsEc2LaunchTemplateDataNetworkInterfaceSetIpv6AddressesDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Ipv6Address"))
  {
    m_ipv6Address = jsonValue.GetString("Ipv6Address");

    m_ipv6AddressHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsEc2LaunchTemplateDataNetworkInterfaceSetIpv6AddressesDetails::Jsonize() const
{
  JsonValue payload;

  if(m_ipv6AddressHasBeenSet)
  {
   payload.WithString("Ipv6Address", m_ipv6Address);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
