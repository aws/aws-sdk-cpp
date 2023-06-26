/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/VpcInfoPeeringOptionsDetails.h>
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

VpcInfoPeeringOptionsDetails::VpcInfoPeeringOptionsDetails() : 
    m_allowDnsResolutionFromRemoteVpc(false),
    m_allowDnsResolutionFromRemoteVpcHasBeenSet(false),
    m_allowEgressFromLocalClassicLinkToRemoteVpc(false),
    m_allowEgressFromLocalClassicLinkToRemoteVpcHasBeenSet(false),
    m_allowEgressFromLocalVpcToRemoteClassicLink(false),
    m_allowEgressFromLocalVpcToRemoteClassicLinkHasBeenSet(false)
{
}

VpcInfoPeeringOptionsDetails::VpcInfoPeeringOptionsDetails(JsonView jsonValue) : 
    m_allowDnsResolutionFromRemoteVpc(false),
    m_allowDnsResolutionFromRemoteVpcHasBeenSet(false),
    m_allowEgressFromLocalClassicLinkToRemoteVpc(false),
    m_allowEgressFromLocalClassicLinkToRemoteVpcHasBeenSet(false),
    m_allowEgressFromLocalVpcToRemoteClassicLink(false),
    m_allowEgressFromLocalVpcToRemoteClassicLinkHasBeenSet(false)
{
  *this = jsonValue;
}

VpcInfoPeeringOptionsDetails& VpcInfoPeeringOptionsDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AllowDnsResolutionFromRemoteVpc"))
  {
    m_allowDnsResolutionFromRemoteVpc = jsonValue.GetBool("AllowDnsResolutionFromRemoteVpc");

    m_allowDnsResolutionFromRemoteVpcHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AllowEgressFromLocalClassicLinkToRemoteVpc"))
  {
    m_allowEgressFromLocalClassicLinkToRemoteVpc = jsonValue.GetBool("AllowEgressFromLocalClassicLinkToRemoteVpc");

    m_allowEgressFromLocalClassicLinkToRemoteVpcHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AllowEgressFromLocalVpcToRemoteClassicLink"))
  {
    m_allowEgressFromLocalVpcToRemoteClassicLink = jsonValue.GetBool("AllowEgressFromLocalVpcToRemoteClassicLink");

    m_allowEgressFromLocalVpcToRemoteClassicLinkHasBeenSet = true;
  }

  return *this;
}

JsonValue VpcInfoPeeringOptionsDetails::Jsonize() const
{
  JsonValue payload;

  if(m_allowDnsResolutionFromRemoteVpcHasBeenSet)
  {
   payload.WithBool("AllowDnsResolutionFromRemoteVpc", m_allowDnsResolutionFromRemoteVpc);

  }

  if(m_allowEgressFromLocalClassicLinkToRemoteVpcHasBeenSet)
  {
   payload.WithBool("AllowEgressFromLocalClassicLinkToRemoteVpc", m_allowEgressFromLocalClassicLinkToRemoteVpc);

  }

  if(m_allowEgressFromLocalVpcToRemoteClassicLinkHasBeenSet)
  {
   payload.WithBool("AllowEgressFromLocalVpcToRemoteClassicLink", m_allowEgressFromLocalVpcToRemoteClassicLink);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
