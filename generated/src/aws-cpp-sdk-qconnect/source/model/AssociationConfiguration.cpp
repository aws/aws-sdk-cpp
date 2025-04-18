/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qconnect/model/AssociationConfiguration.h>
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

AssociationConfiguration::AssociationConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

AssociationConfiguration& AssociationConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("associationId"))
  {
    m_associationId = jsonValue.GetString("associationId");
    m_associationIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("associationType"))
  {
    m_associationType = AIAgentAssociationConfigurationTypeMapper::GetAIAgentAssociationConfigurationTypeForName(jsonValue.GetString("associationType"));
    m_associationTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("associationConfigurationData"))
  {
    m_associationConfigurationData = jsonValue.GetObject("associationConfigurationData");
    m_associationConfigurationDataHasBeenSet = true;
  }
  return *this;
}

JsonValue AssociationConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_associationIdHasBeenSet)
  {
   payload.WithString("associationId", m_associationId);

  }

  if(m_associationTypeHasBeenSet)
  {
   payload.WithString("associationType", AIAgentAssociationConfigurationTypeMapper::GetNameForAIAgentAssociationConfigurationType(m_associationType));
  }

  if(m_associationConfigurationDataHasBeenSet)
  {
   payload.WithObject("associationConfigurationData", m_associationConfigurationData.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QConnect
} // namespace Aws
