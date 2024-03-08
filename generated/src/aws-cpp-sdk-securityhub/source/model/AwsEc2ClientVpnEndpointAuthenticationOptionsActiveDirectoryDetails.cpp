/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsEc2ClientVpnEndpointAuthenticationOptionsActiveDirectoryDetails.h>
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

AwsEc2ClientVpnEndpointAuthenticationOptionsActiveDirectoryDetails::AwsEc2ClientVpnEndpointAuthenticationOptionsActiveDirectoryDetails() : 
    m_directoryIdHasBeenSet(false)
{
}

AwsEc2ClientVpnEndpointAuthenticationOptionsActiveDirectoryDetails::AwsEc2ClientVpnEndpointAuthenticationOptionsActiveDirectoryDetails(JsonView jsonValue) : 
    m_directoryIdHasBeenSet(false)
{
  *this = jsonValue;
}

AwsEc2ClientVpnEndpointAuthenticationOptionsActiveDirectoryDetails& AwsEc2ClientVpnEndpointAuthenticationOptionsActiveDirectoryDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DirectoryId"))
  {
    m_directoryId = jsonValue.GetString("DirectoryId");

    m_directoryIdHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsEc2ClientVpnEndpointAuthenticationOptionsActiveDirectoryDetails::Jsonize() const
{
  JsonValue payload;

  if(m_directoryIdHasBeenSet)
  {
   payload.WithString("DirectoryId", m_directoryId);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
