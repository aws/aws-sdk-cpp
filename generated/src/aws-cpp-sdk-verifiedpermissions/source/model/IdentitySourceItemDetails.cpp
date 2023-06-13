/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/verifiedpermissions/model/IdentitySourceItemDetails.h>
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

IdentitySourceItemDetails::IdentitySourceItemDetails() : 
    m_clientIdsHasBeenSet(false),
    m_userPoolArnHasBeenSet(false),
    m_discoveryUrlHasBeenSet(false),
    m_openIdIssuer(OpenIdIssuer::NOT_SET),
    m_openIdIssuerHasBeenSet(false)
{
}

IdentitySourceItemDetails::IdentitySourceItemDetails(JsonView jsonValue) : 
    m_clientIdsHasBeenSet(false),
    m_userPoolArnHasBeenSet(false),
    m_discoveryUrlHasBeenSet(false),
    m_openIdIssuer(OpenIdIssuer::NOT_SET),
    m_openIdIssuerHasBeenSet(false)
{
  *this = jsonValue;
}

IdentitySourceItemDetails& IdentitySourceItemDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("clientIds"))
  {
    Aws::Utils::Array<JsonView> clientIdsJsonList = jsonValue.GetArray("clientIds");
    for(unsigned clientIdsIndex = 0; clientIdsIndex < clientIdsJsonList.GetLength(); ++clientIdsIndex)
    {
      m_clientIds.push_back(clientIdsJsonList[clientIdsIndex].AsString());
    }
    m_clientIdsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("userPoolArn"))
  {
    m_userPoolArn = jsonValue.GetString("userPoolArn");

    m_userPoolArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("discoveryUrl"))
  {
    m_discoveryUrl = jsonValue.GetString("discoveryUrl");

    m_discoveryUrlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("openIdIssuer"))
  {
    m_openIdIssuer = OpenIdIssuerMapper::GetOpenIdIssuerForName(jsonValue.GetString("openIdIssuer"));

    m_openIdIssuerHasBeenSet = true;
  }

  return *this;
}

JsonValue IdentitySourceItemDetails::Jsonize() const
{
  JsonValue payload;

  if(m_clientIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> clientIdsJsonList(m_clientIds.size());
   for(unsigned clientIdsIndex = 0; clientIdsIndex < clientIdsJsonList.GetLength(); ++clientIdsIndex)
   {
     clientIdsJsonList[clientIdsIndex].AsString(m_clientIds[clientIdsIndex]);
   }
   payload.WithArray("clientIds", std::move(clientIdsJsonList));

  }

  if(m_userPoolArnHasBeenSet)
  {
   payload.WithString("userPoolArn", m_userPoolArn);

  }

  if(m_discoveryUrlHasBeenSet)
  {
   payload.WithString("discoveryUrl", m_discoveryUrl);

  }

  if(m_openIdIssuerHasBeenSet)
  {
   payload.WithString("openIdIssuer", OpenIdIssuerMapper::GetNameForOpenIdIssuer(m_openIdIssuer));
  }

  return payload;
}

} // namespace Model
} // namespace VerifiedPermissions
} // namespace Aws
