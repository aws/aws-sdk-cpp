/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/observabilityadmin/model/TelemetryRule.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ObservabilityAdmin
{
namespace Model
{

TelemetryRule::TelemetryRule(JsonView jsonValue)
{
  *this = jsonValue;
}

TelemetryRule& TelemetryRule::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ResourceType"))
  {
    m_resourceType = ResourceTypeMapper::GetResourceTypeForName(jsonValue.GetString("ResourceType"));
    m_resourceTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TelemetryType"))
  {
    m_telemetryType = TelemetryTypeMapper::GetTelemetryTypeForName(jsonValue.GetString("TelemetryType"));
    m_telemetryTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DestinationConfiguration"))
  {
    m_destinationConfiguration = jsonValue.GetObject("DestinationConfiguration");
    m_destinationConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Scope"))
  {
    m_scope = jsonValue.GetString("Scope");
    m_scopeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SelectionCriteria"))
  {
    m_selectionCriteria = jsonValue.GetString("SelectionCriteria");
    m_selectionCriteriaHasBeenSet = true;
  }
  return *this;
}

JsonValue TelemetryRule::Jsonize() const
{
  JsonValue payload;

  if(m_resourceTypeHasBeenSet)
  {
   payload.WithString("ResourceType", ResourceTypeMapper::GetNameForResourceType(m_resourceType));
  }

  if(m_telemetryTypeHasBeenSet)
  {
   payload.WithString("TelemetryType", TelemetryTypeMapper::GetNameForTelemetryType(m_telemetryType));
  }

  if(m_destinationConfigurationHasBeenSet)
  {
   payload.WithObject("DestinationConfiguration", m_destinationConfiguration.Jsonize());

  }

  if(m_scopeHasBeenSet)
  {
   payload.WithString("Scope", m_scope);

  }

  if(m_selectionCriteriaHasBeenSet)
  {
   payload.WithString("SelectionCriteria", m_selectionCriteria);

  }

  return payload;
}

} // namespace Model
} // namespace ObservabilityAdmin
} // namespace Aws
