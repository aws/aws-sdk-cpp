/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/verifiedpermissions/model/OpenIdConnectIdentityTokenConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace VerifiedPermissions
{
namespace Model
{

OpenIdConnectIdentityTokenConfiguration::OpenIdConnectIdentityTokenConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

OpenIdConnectIdentityTokenConfiguration& OpenIdConnectIdentityTokenConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("principalIdClaim"))
  {
    m_principalIdClaim = jsonValue.GetString("principalIdClaim");
    m_principalIdClaimHasBeenSet = true;
  }
  if(jsonValue.ValueExists("clientIds"))
  {
    Aws::Utils::Array<JsonView> clientIdsJsonList = jsonValue.GetArray("clientIds");
    for(unsigned clientIdsIndex = 0; clientIdsIndex < clientIdsJsonList.GetLength(); ++clientIdsIndex)
    {
      m_clientIds.push_back(clientIdsJsonList[clientIdsIndex].AsString());
    }
    m_clientIdsHasBeenSet = true;
  }
  return *this;
}

JsonValue OpenIdConnectIdentityTokenConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_principalIdClaimHasBeenSet)
  {
   payload.WithString("principalIdClaim", m_principalIdClaim);

  }

  if(m_clientIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> clientIdsJsonList(m_clientIds.size());
   for(unsigned clientIdsIndex = 0; clientIdsIndex < clientIdsJsonList.GetLength(); ++clientIdsIndex)
   {
     clientIdsJsonList[clientIdsIndex].AsString(m_clientIds[clientIdsIndex]);
   }
   payload.WithArray("clientIds", std::move(clientIdsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace VerifiedPermissions
} // namespace Aws
