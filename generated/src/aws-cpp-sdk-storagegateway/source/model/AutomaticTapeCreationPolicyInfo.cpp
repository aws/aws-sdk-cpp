/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/storagegateway/model/AutomaticTapeCreationPolicyInfo.h>
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

AutomaticTapeCreationPolicyInfo::AutomaticTapeCreationPolicyInfo() : 
    m_automaticTapeCreationRulesHasBeenSet(false),
    m_gatewayARNHasBeenSet(false)
{
}

AutomaticTapeCreationPolicyInfo::AutomaticTapeCreationPolicyInfo(JsonView jsonValue) : 
    m_automaticTapeCreationRulesHasBeenSet(false),
    m_gatewayARNHasBeenSet(false)
{
  *this = jsonValue;
}

AutomaticTapeCreationPolicyInfo& AutomaticTapeCreationPolicyInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AutomaticTapeCreationRules"))
  {
    Aws::Utils::Array<JsonView> automaticTapeCreationRulesJsonList = jsonValue.GetArray("AutomaticTapeCreationRules");
    for(unsigned automaticTapeCreationRulesIndex = 0; automaticTapeCreationRulesIndex < automaticTapeCreationRulesJsonList.GetLength(); ++automaticTapeCreationRulesIndex)
    {
      m_automaticTapeCreationRules.push_back(automaticTapeCreationRulesJsonList[automaticTapeCreationRulesIndex].AsObject());
    }
    m_automaticTapeCreationRulesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("GatewayARN"))
  {
    m_gatewayARN = jsonValue.GetString("GatewayARN");

    m_gatewayARNHasBeenSet = true;
  }

  return *this;
}

JsonValue AutomaticTapeCreationPolicyInfo::Jsonize() const
{
  JsonValue payload;

  if(m_automaticTapeCreationRulesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> automaticTapeCreationRulesJsonList(m_automaticTapeCreationRules.size());
   for(unsigned automaticTapeCreationRulesIndex = 0; automaticTapeCreationRulesIndex < automaticTapeCreationRulesJsonList.GetLength(); ++automaticTapeCreationRulesIndex)
   {
     automaticTapeCreationRulesJsonList[automaticTapeCreationRulesIndex].AsObject(m_automaticTapeCreationRules[automaticTapeCreationRulesIndex].Jsonize());
   }
   payload.WithArray("AutomaticTapeCreationRules", std::move(automaticTapeCreationRulesJsonList));

  }

  if(m_gatewayARNHasBeenSet)
  {
   payload.WithString("GatewayARN", m_gatewayARN);

  }

  return payload;
}

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
