/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsEc2VpnConnectionRoutesDetails.h>
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

AwsEc2VpnConnectionRoutesDetails::AwsEc2VpnConnectionRoutesDetails() : 
    m_destinationCidrBlockHasBeenSet(false),
    m_stateHasBeenSet(false)
{
}

AwsEc2VpnConnectionRoutesDetails::AwsEc2VpnConnectionRoutesDetails(JsonView jsonValue) : 
    m_destinationCidrBlockHasBeenSet(false),
    m_stateHasBeenSet(false)
{
  *this = jsonValue;
}

AwsEc2VpnConnectionRoutesDetails& AwsEc2VpnConnectionRoutesDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DestinationCidrBlock"))
  {
    m_destinationCidrBlock = jsonValue.GetString("DestinationCidrBlock");

    m_destinationCidrBlockHasBeenSet = true;
  }

  if(jsonValue.ValueExists("State"))
  {
    m_state = jsonValue.GetString("State");

    m_stateHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsEc2VpnConnectionRoutesDetails::Jsonize() const
{
  JsonValue payload;

  if(m_destinationCidrBlockHasBeenSet)
  {
   payload.WithString("DestinationCidrBlock", m_destinationCidrBlock);

  }

  if(m_stateHasBeenSet)
  {
   payload.WithString("State", m_state);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
