/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsEcsTaskDefinitionProxyConfigurationDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

AwsEcsTaskDefinitionProxyConfigurationDetails::AwsEcsTaskDefinitionProxyConfigurationDetails() : 
    m_containerNameHasBeenSet(false),
    m_proxyConfigurationPropertiesHasBeenSet(false),
    m_typeHasBeenSet(false)
{
}

AwsEcsTaskDefinitionProxyConfigurationDetails::AwsEcsTaskDefinitionProxyConfigurationDetails(JsonView jsonValue) : 
    m_containerNameHasBeenSet(false),
    m_proxyConfigurationPropertiesHasBeenSet(false),
    m_typeHasBeenSet(false)
{
  *this = jsonValue;
}

AwsEcsTaskDefinitionProxyConfigurationDetails& AwsEcsTaskDefinitionProxyConfigurationDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ContainerName"))
  {
    m_containerName = jsonValue.GetString("ContainerName");

    m_containerNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ProxyConfigurationProperties"))
  {
    Aws::Utils::Array<JsonView> proxyConfigurationPropertiesJsonList = jsonValue.GetArray("ProxyConfigurationProperties");
    for(unsigned proxyConfigurationPropertiesIndex = 0; proxyConfigurationPropertiesIndex < proxyConfigurationPropertiesJsonList.GetLength(); ++proxyConfigurationPropertiesIndex)
    {
      m_proxyConfigurationProperties.push_back(proxyConfigurationPropertiesJsonList[proxyConfigurationPropertiesIndex].AsObject());
    }
    m_proxyConfigurationPropertiesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Type"))
  {
    m_type = jsonValue.GetString("Type");

    m_typeHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsEcsTaskDefinitionProxyConfigurationDetails::Jsonize() const
{
  JsonValue payload;

  if(m_containerNameHasBeenSet)
  {
   payload.WithString("ContainerName", m_containerName);

  }

  if(m_proxyConfigurationPropertiesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> proxyConfigurationPropertiesJsonList(m_proxyConfigurationProperties.size());
   for(unsigned proxyConfigurationPropertiesIndex = 0; proxyConfigurationPropertiesIndex < proxyConfigurationPropertiesJsonList.GetLength(); ++proxyConfigurationPropertiesIndex)
   {
     proxyConfigurationPropertiesJsonList[proxyConfigurationPropertiesIndex].AsObject(m_proxyConfigurationProperties[proxyConfigurationPropertiesIndex].Jsonize());
   }
   payload.WithArray("ProxyConfigurationProperties", std::move(proxyConfigurationPropertiesJsonList));

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", m_type);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
