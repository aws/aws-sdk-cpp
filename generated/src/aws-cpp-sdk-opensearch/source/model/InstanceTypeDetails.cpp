/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opensearch/model/InstanceTypeDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace OpenSearchService
{
namespace Model
{

InstanceTypeDetails::InstanceTypeDetails() : 
    m_instanceType(OpenSearchPartitionInstanceType::NOT_SET),
    m_instanceTypeHasBeenSet(false),
    m_encryptionEnabled(false),
    m_encryptionEnabledHasBeenSet(false),
    m_cognitoEnabled(false),
    m_cognitoEnabledHasBeenSet(false),
    m_appLogsEnabled(false),
    m_appLogsEnabledHasBeenSet(false),
    m_advancedSecurityEnabled(false),
    m_advancedSecurityEnabledHasBeenSet(false),
    m_warmEnabled(false),
    m_warmEnabledHasBeenSet(false),
    m_instanceRoleHasBeenSet(false)
{
}

InstanceTypeDetails::InstanceTypeDetails(JsonView jsonValue) : 
    m_instanceType(OpenSearchPartitionInstanceType::NOT_SET),
    m_instanceTypeHasBeenSet(false),
    m_encryptionEnabled(false),
    m_encryptionEnabledHasBeenSet(false),
    m_cognitoEnabled(false),
    m_cognitoEnabledHasBeenSet(false),
    m_appLogsEnabled(false),
    m_appLogsEnabledHasBeenSet(false),
    m_advancedSecurityEnabled(false),
    m_advancedSecurityEnabledHasBeenSet(false),
    m_warmEnabled(false),
    m_warmEnabledHasBeenSet(false),
    m_instanceRoleHasBeenSet(false)
{
  *this = jsonValue;
}

InstanceTypeDetails& InstanceTypeDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("InstanceType"))
  {
    m_instanceType = OpenSearchPartitionInstanceTypeMapper::GetOpenSearchPartitionInstanceTypeForName(jsonValue.GetString("InstanceType"));

    m_instanceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EncryptionEnabled"))
  {
    m_encryptionEnabled = jsonValue.GetBool("EncryptionEnabled");

    m_encryptionEnabledHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CognitoEnabled"))
  {
    m_cognitoEnabled = jsonValue.GetBool("CognitoEnabled");

    m_cognitoEnabledHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AppLogsEnabled"))
  {
    m_appLogsEnabled = jsonValue.GetBool("AppLogsEnabled");

    m_appLogsEnabledHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AdvancedSecurityEnabled"))
  {
    m_advancedSecurityEnabled = jsonValue.GetBool("AdvancedSecurityEnabled");

    m_advancedSecurityEnabledHasBeenSet = true;
  }

  if(jsonValue.ValueExists("WarmEnabled"))
  {
    m_warmEnabled = jsonValue.GetBool("WarmEnabled");

    m_warmEnabledHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InstanceRole"))
  {
    Aws::Utils::Array<JsonView> instanceRoleJsonList = jsonValue.GetArray("InstanceRole");
    for(unsigned instanceRoleIndex = 0; instanceRoleIndex < instanceRoleJsonList.GetLength(); ++instanceRoleIndex)
    {
      m_instanceRole.push_back(instanceRoleJsonList[instanceRoleIndex].AsString());
    }
    m_instanceRoleHasBeenSet = true;
  }

  return *this;
}

JsonValue InstanceTypeDetails::Jsonize() const
{
  JsonValue payload;

  if(m_instanceTypeHasBeenSet)
  {
   payload.WithString("InstanceType", OpenSearchPartitionInstanceTypeMapper::GetNameForOpenSearchPartitionInstanceType(m_instanceType));
  }

  if(m_encryptionEnabledHasBeenSet)
  {
   payload.WithBool("EncryptionEnabled", m_encryptionEnabled);

  }

  if(m_cognitoEnabledHasBeenSet)
  {
   payload.WithBool("CognitoEnabled", m_cognitoEnabled);

  }

  if(m_appLogsEnabledHasBeenSet)
  {
   payload.WithBool("AppLogsEnabled", m_appLogsEnabled);

  }

  if(m_advancedSecurityEnabledHasBeenSet)
  {
   payload.WithBool("AdvancedSecurityEnabled", m_advancedSecurityEnabled);

  }

  if(m_warmEnabledHasBeenSet)
  {
   payload.WithBool("WarmEnabled", m_warmEnabled);

  }

  if(m_instanceRoleHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> instanceRoleJsonList(m_instanceRole.size());
   for(unsigned instanceRoleIndex = 0; instanceRoleIndex < instanceRoleJsonList.GetLength(); ++instanceRoleIndex)
   {
     instanceRoleJsonList[instanceRoleIndex].AsString(m_instanceRole[instanceRoleIndex]);
   }
   payload.WithArray("InstanceRole", std::move(instanceRoleJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
