/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/DomainSettings.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SageMaker
{
namespace Model
{

DomainSettings::DomainSettings(JsonView jsonValue)
{
  *this = jsonValue;
}

DomainSettings& DomainSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SecurityGroupIds"))
  {
    Aws::Utils::Array<JsonView> securityGroupIdsJsonList = jsonValue.GetArray("SecurityGroupIds");
    for(unsigned securityGroupIdsIndex = 0; securityGroupIdsIndex < securityGroupIdsJsonList.GetLength(); ++securityGroupIdsIndex)
    {
      m_securityGroupIds.push_back(securityGroupIdsJsonList[securityGroupIdsIndex].AsString());
    }
    m_securityGroupIdsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RStudioServerProDomainSettings"))
  {
    m_rStudioServerProDomainSettings = jsonValue.GetObject("RStudioServerProDomainSettings");
    m_rStudioServerProDomainSettingsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ExecutionRoleIdentityConfig"))
  {
    m_executionRoleIdentityConfig = ExecutionRoleIdentityConfigMapper::GetExecutionRoleIdentityConfigForName(jsonValue.GetString("ExecutionRoleIdentityConfig"));
    m_executionRoleIdentityConfigHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TrustedIdentityPropagationSettings"))
  {
    m_trustedIdentityPropagationSettings = jsonValue.GetObject("TrustedIdentityPropagationSettings");
    m_trustedIdentityPropagationSettingsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DockerSettings"))
  {
    m_dockerSettings = jsonValue.GetObject("DockerSettings");
    m_dockerSettingsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AmazonQSettings"))
  {
    m_amazonQSettings = jsonValue.GetObject("AmazonQSettings");
    m_amazonQSettingsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("UnifiedStudioSettings"))
  {
    m_unifiedStudioSettings = jsonValue.GetObject("UnifiedStudioSettings");
    m_unifiedStudioSettingsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("IpAddressType"))
  {
    m_ipAddressType = IPAddressTypeMapper::GetIPAddressTypeForName(jsonValue.GetString("IpAddressType"));
    m_ipAddressTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue DomainSettings::Jsonize() const
{
  JsonValue payload;

  if(m_securityGroupIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> securityGroupIdsJsonList(m_securityGroupIds.size());
   for(unsigned securityGroupIdsIndex = 0; securityGroupIdsIndex < securityGroupIdsJsonList.GetLength(); ++securityGroupIdsIndex)
   {
     securityGroupIdsJsonList[securityGroupIdsIndex].AsString(m_securityGroupIds[securityGroupIdsIndex]);
   }
   payload.WithArray("SecurityGroupIds", std::move(securityGroupIdsJsonList));

  }

  if(m_rStudioServerProDomainSettingsHasBeenSet)
  {
   payload.WithObject("RStudioServerProDomainSettings", m_rStudioServerProDomainSettings.Jsonize());

  }

  if(m_executionRoleIdentityConfigHasBeenSet)
  {
   payload.WithString("ExecutionRoleIdentityConfig", ExecutionRoleIdentityConfigMapper::GetNameForExecutionRoleIdentityConfig(m_executionRoleIdentityConfig));
  }

  if(m_trustedIdentityPropagationSettingsHasBeenSet)
  {
   payload.WithObject("TrustedIdentityPropagationSettings", m_trustedIdentityPropagationSettings.Jsonize());

  }

  if(m_dockerSettingsHasBeenSet)
  {
   payload.WithObject("DockerSettings", m_dockerSettings.Jsonize());

  }

  if(m_amazonQSettingsHasBeenSet)
  {
   payload.WithObject("AmazonQSettings", m_amazonQSettings.Jsonize());

  }

  if(m_unifiedStudioSettingsHasBeenSet)
  {
   payload.WithObject("UnifiedStudioSettings", m_unifiedStudioSettings.Jsonize());

  }

  if(m_ipAddressTypeHasBeenSet)
  {
   payload.WithString("IpAddressType", IPAddressTypeMapper::GetNameForIPAddressType(m_ipAddressType));
  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
