/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsEcsTaskDefinitionContainerDefinitionsLogConfigurationDetails.h>
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

AwsEcsTaskDefinitionContainerDefinitionsLogConfigurationDetails::AwsEcsTaskDefinitionContainerDefinitionsLogConfigurationDetails() : 
    m_logDriverHasBeenSet(false),
    m_optionsHasBeenSet(false),
    m_secretOptionsHasBeenSet(false)
{
}

AwsEcsTaskDefinitionContainerDefinitionsLogConfigurationDetails::AwsEcsTaskDefinitionContainerDefinitionsLogConfigurationDetails(JsonView jsonValue) : 
    m_logDriverHasBeenSet(false),
    m_optionsHasBeenSet(false),
    m_secretOptionsHasBeenSet(false)
{
  *this = jsonValue;
}

AwsEcsTaskDefinitionContainerDefinitionsLogConfigurationDetails& AwsEcsTaskDefinitionContainerDefinitionsLogConfigurationDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("LogDriver"))
  {
    m_logDriver = jsonValue.GetString("LogDriver");

    m_logDriverHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Options"))
  {
    Aws::Map<Aws::String, JsonView> optionsJsonMap = jsonValue.GetObject("Options").GetAllObjects();
    for(auto& optionsItem : optionsJsonMap)
    {
      m_options[optionsItem.first] = optionsItem.second.AsString();
    }
    m_optionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SecretOptions"))
  {
    Aws::Utils::Array<JsonView> secretOptionsJsonList = jsonValue.GetArray("SecretOptions");
    for(unsigned secretOptionsIndex = 0; secretOptionsIndex < secretOptionsJsonList.GetLength(); ++secretOptionsIndex)
    {
      m_secretOptions.push_back(secretOptionsJsonList[secretOptionsIndex].AsObject());
    }
    m_secretOptionsHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsEcsTaskDefinitionContainerDefinitionsLogConfigurationDetails::Jsonize() const
{
  JsonValue payload;

  if(m_logDriverHasBeenSet)
  {
   payload.WithString("LogDriver", m_logDriver);

  }

  if(m_optionsHasBeenSet)
  {
   JsonValue optionsJsonMap;
   for(auto& optionsItem : m_options)
   {
     optionsJsonMap.WithString(optionsItem.first, optionsItem.second);
   }
   payload.WithObject("Options", std::move(optionsJsonMap));

  }

  if(m_secretOptionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> secretOptionsJsonList(m_secretOptions.size());
   for(unsigned secretOptionsIndex = 0; secretOptionsIndex < secretOptionsJsonList.GetLength(); ++secretOptionsIndex)
   {
     secretOptionsJsonList[secretOptionsIndex].AsObject(m_secretOptions[secretOptionsIndex].Jsonize());
   }
   payload.WithArray("SecretOptions", std::move(secretOptionsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
