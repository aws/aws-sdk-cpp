/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsEcsTaskDefinitionContainerDefinitionsFirelensConfigurationDetails.h>
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

AwsEcsTaskDefinitionContainerDefinitionsFirelensConfigurationDetails::AwsEcsTaskDefinitionContainerDefinitionsFirelensConfigurationDetails() : 
    m_optionsHasBeenSet(false),
    m_typeHasBeenSet(false)
{
}

AwsEcsTaskDefinitionContainerDefinitionsFirelensConfigurationDetails::AwsEcsTaskDefinitionContainerDefinitionsFirelensConfigurationDetails(JsonView jsonValue) : 
    m_optionsHasBeenSet(false),
    m_typeHasBeenSet(false)
{
  *this = jsonValue;
}

AwsEcsTaskDefinitionContainerDefinitionsFirelensConfigurationDetails& AwsEcsTaskDefinitionContainerDefinitionsFirelensConfigurationDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Options"))
  {
    Aws::Map<Aws::String, JsonView> optionsJsonMap = jsonValue.GetObject("Options").GetAllObjects();
    for(auto& optionsItem : optionsJsonMap)
    {
      m_options[optionsItem.first] = optionsItem.second.AsString();
    }
    m_optionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Type"))
  {
    m_type = jsonValue.GetString("Type");

    m_typeHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsEcsTaskDefinitionContainerDefinitionsFirelensConfigurationDetails::Jsonize() const
{
  JsonValue payload;

  if(m_optionsHasBeenSet)
  {
   JsonValue optionsJsonMap;
   for(auto& optionsItem : m_options)
   {
     optionsJsonMap.WithString(optionsItem.first, optionsItem.second);
   }
   payload.WithObject("Options", std::move(optionsJsonMap));

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
