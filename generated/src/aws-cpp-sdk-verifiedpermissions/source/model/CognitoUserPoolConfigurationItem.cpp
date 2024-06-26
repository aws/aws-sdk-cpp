﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/verifiedpermissions/model/CognitoUserPoolConfigurationItem.h>
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

CognitoUserPoolConfigurationItem::CognitoUserPoolConfigurationItem() : 
    m_userPoolArnHasBeenSet(false),
    m_clientIdsHasBeenSet(false),
    m_issuerHasBeenSet(false),
    m_groupConfigurationHasBeenSet(false)
{
}

CognitoUserPoolConfigurationItem::CognitoUserPoolConfigurationItem(JsonView jsonValue)
  : CognitoUserPoolConfigurationItem()
{
  *this = jsonValue;
}

CognitoUserPoolConfigurationItem& CognitoUserPoolConfigurationItem::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("groupConfiguration"))
  {
    m_groupConfiguration = jsonValue.GetObject("groupConfiguration");

    m_groupConfigurationHasBeenSet = true;
  }

  return *this;
}

JsonValue CognitoUserPoolConfigurationItem::Jsonize() const
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

  if(m_groupConfigurationHasBeenSet)
  {
   payload.WithObject("groupConfiguration", m_groupConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace VerifiedPermissions
} // namespace Aws
