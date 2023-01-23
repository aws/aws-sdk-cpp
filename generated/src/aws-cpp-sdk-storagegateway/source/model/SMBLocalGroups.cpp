/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/storagegateway/model/SMBLocalGroups.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace StorageGateway
{
namespace Model
{

SMBLocalGroups::SMBLocalGroups() : 
    m_gatewayAdminsHasBeenSet(false)
{
}

SMBLocalGroups::SMBLocalGroups(JsonView jsonValue) : 
    m_gatewayAdminsHasBeenSet(false)
{
  *this = jsonValue;
}

SMBLocalGroups& SMBLocalGroups::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("GatewayAdmins"))
  {
    Aws::Utils::Array<JsonView> gatewayAdminsJsonList = jsonValue.GetArray("GatewayAdmins");
    for(unsigned gatewayAdminsIndex = 0; gatewayAdminsIndex < gatewayAdminsJsonList.GetLength(); ++gatewayAdminsIndex)
    {
      m_gatewayAdmins.push_back(gatewayAdminsJsonList[gatewayAdminsIndex].AsString());
    }
    m_gatewayAdminsHasBeenSet = true;
  }

  return *this;
}

JsonValue SMBLocalGroups::Jsonize() const
{
  JsonValue payload;

  if(m_gatewayAdminsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> gatewayAdminsJsonList(m_gatewayAdmins.size());
   for(unsigned gatewayAdminsIndex = 0; gatewayAdminsIndex < gatewayAdminsJsonList.GetLength(); ++gatewayAdminsIndex)
   {
     gatewayAdminsJsonList[gatewayAdminsIndex].AsString(m_gatewayAdmins[gatewayAdminsIndex]);
   }
   payload.WithArray("GatewayAdmins", std::move(gatewayAdminsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
