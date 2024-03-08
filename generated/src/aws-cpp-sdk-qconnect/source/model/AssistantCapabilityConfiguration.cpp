/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qconnect/model/AssistantCapabilityConfiguration.h>
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

AssistantCapabilityConfiguration::AssistantCapabilityConfiguration() : 
    m_type(AssistantCapabilityType::NOT_SET),
    m_typeHasBeenSet(false)
{
}

AssistantCapabilityConfiguration::AssistantCapabilityConfiguration(JsonView jsonValue) : 
    m_type(AssistantCapabilityType::NOT_SET),
    m_typeHasBeenSet(false)
{
  *this = jsonValue;
}

AssistantCapabilityConfiguration& AssistantCapabilityConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("type"))
  {
    m_type = AssistantCapabilityTypeMapper::GetAssistantCapabilityTypeForName(jsonValue.GetString("type"));

    m_typeHasBeenSet = true;
  }

  return *this;
}

JsonValue AssistantCapabilityConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", AssistantCapabilityTypeMapper::GetNameForAssistantCapabilityType(m_type));
  }

  return payload;
}

} // namespace Model
} // namespace QConnect
} // namespace Aws
