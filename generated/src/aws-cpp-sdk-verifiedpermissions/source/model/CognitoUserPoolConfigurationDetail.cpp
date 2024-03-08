/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/verifiedpermissions/model/CognitoUserPoolConfigurationDetail.h>
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

CognitoUserPoolConfigurationDetail::CognitoUserPoolConfigurationDetail() : 
    m_userPoolArnHasBeenSet(false),
    m_clientIdsHasBeenSet(false),
    m_issuerHasBeenSet(false)
{
}

CognitoUserPoolConfigurationDetail::CognitoUserPoolConfigurationDetail(JsonView jsonValue) : 
    m_userPoolArnHasBeenSet(false),
    m_clientIdsHasBeenSet(false),
    m_issuerHasBeenSet(false)
{
  *this = jsonValue;
}

CognitoUserPoolConfigurationDetail& CognitoUserPoolConfigurationDetail::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("userPoolArn"))
  {
    m_userPoolArn = jsonValue.GetString("userPoolArn");

    m_userPoolArnHasBeenSet = true;
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

  if(jsonValue.ValueExists("issuer"))
  {
    m_issuer = jsonValue.GetString("issuer");

    m_issuerHasBeenSet = true;
  }

  return *this;
}

JsonValue CognitoUserPoolConfigurationDetail::Jsonize() const
{
  JsonValue payload;

  if(m_userPoolArnHasBeenSet)
  {
   payload.WithString("userPoolArn", m_userPoolArn);

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

  if(m_issuerHasBeenSet)
  {
   payload.WithString("issuer", m_issuer);

  }

  return payload;
}

} // namespace Model
} // namespace VerifiedPermissions
} // namespace Aws
