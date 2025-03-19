/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qconnect/model/AIGuardrailSensitiveInformationPolicyConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QConnect
{
namespace Model
{

AIGuardrailSensitiveInformationPolicyConfig::AIGuardrailSensitiveInformationPolicyConfig(JsonView jsonValue)
{
  *this = jsonValue;
}

AIGuardrailSensitiveInformationPolicyConfig& AIGuardrailSensitiveInformationPolicyConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("piiEntitiesConfig"))
  {
    Aws::Utils::Array<JsonView> piiEntitiesConfigJsonList = jsonValue.GetArray("piiEntitiesConfig");
    for(unsigned piiEntitiesConfigIndex = 0; piiEntitiesConfigIndex < piiEntitiesConfigJsonList.GetLength(); ++piiEntitiesConfigIndex)
    {
      m_piiEntitiesConfig.push_back(piiEntitiesConfigJsonList[piiEntitiesConfigIndex].AsObject());
    }
    m_piiEntitiesConfigHasBeenSet = true;
  }
  if(jsonValue.ValueExists("regexesConfig"))
  {
    Aws::Utils::Array<JsonView> regexesConfigJsonList = jsonValue.GetArray("regexesConfig");
    for(unsigned regexesConfigIndex = 0; regexesConfigIndex < regexesConfigJsonList.GetLength(); ++regexesConfigIndex)
    {
      m_regexesConfig.push_back(regexesConfigJsonList[regexesConfigIndex].AsObject());
    }
    m_regexesConfigHasBeenSet = true;
  }
  return *this;
}

JsonValue AIGuardrailSensitiveInformationPolicyConfig::Jsonize() const
{
  JsonValue payload;

  if(m_piiEntitiesConfigHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> piiEntitiesConfigJsonList(m_piiEntitiesConfig.size());
   for(unsigned piiEntitiesConfigIndex = 0; piiEntitiesConfigIndex < piiEntitiesConfigJsonList.GetLength(); ++piiEntitiesConfigIndex)
   {
     piiEntitiesConfigJsonList[piiEntitiesConfigIndex].AsObject(m_piiEntitiesConfig[piiEntitiesConfigIndex].Jsonize());
   }
   payload.WithArray("piiEntitiesConfig", std::move(piiEntitiesConfigJsonList));

  }

  if(m_regexesConfigHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> regexesConfigJsonList(m_regexesConfig.size());
   for(unsigned regexesConfigIndex = 0; regexesConfigIndex < regexesConfigJsonList.GetLength(); ++regexesConfigIndex)
   {
     regexesConfigJsonList[regexesConfigIndex].AsObject(m_regexesConfig[regexesConfigIndex].Jsonize());
   }
   payload.WithArray("regexesConfig", std::move(regexesConfigJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace QConnect
} // namespace Aws
