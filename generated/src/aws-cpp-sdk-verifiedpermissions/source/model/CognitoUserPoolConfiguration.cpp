/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/verifiedpermissions/model/CognitoUserPoolConfiguration.h>
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

CognitoUserPoolConfiguration::CognitoUserPoolConfiguration() : 
    m_userPoolArnHasBeenSet(false),
    m_clientIdsHasBeenSet(false)
{
}

CognitoUserPoolConfiguration::CognitoUserPoolConfiguration(JsonView jsonValue) : 
    m_userPoolArnHasBeenSet(false),
    m_clientIdsHasBeenSet(false)
{
  *this = jsonValue;
}

CognitoUserPoolConfiguration& CognitoUserPoolConfiguration::operator =(JsonView jsonValue)
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

  return *this;
}

JsonValue CognitoUserPoolConfiguration::Jsonize() const
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

  return payload;
}

} // namespace Model
} // namespace VerifiedPermissions
} // namespace Aws
