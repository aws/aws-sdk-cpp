/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/observabilityadmin/model/TelemetryDestinationConfiguration.h>
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

TelemetryDestinationConfiguration::TelemetryDestinationConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

TelemetryDestinationConfiguration& TelemetryDestinationConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DestinationType"))
  {
    m_destinationType = DestinationTypeMapper::GetDestinationTypeForName(jsonValue.GetString("DestinationType"));
    m_destinationTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DestinationPattern"))
  {
    m_destinationPattern = jsonValue.GetString("DestinationPattern");
    m_destinationPatternHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RetentionInDays"))
  {
    m_retentionInDays = jsonValue.GetInteger("RetentionInDays");
    m_retentionInDaysHasBeenSet = true;
  }
  if(jsonValue.ValueExists("VPCFlowLogParameters"))
  {
    m_vPCFlowLogParameters = jsonValue.GetObject("VPCFlowLogParameters");
    m_vPCFlowLogParametersHasBeenSet = true;
  }
  return *this;
}

JsonValue TelemetryDestinationConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_destinationTypeHasBeenSet)
  {
   payload.WithString("DestinationType", DestinationTypeMapper::GetNameForDestinationType(m_destinationType));
  }

  if(m_destinationPatternHasBeenSet)
  {
   payload.WithString("DestinationPattern", m_destinationPattern);

  }

  if(m_retentionInDaysHasBeenSet)
  {
   payload.WithInteger("RetentionInDays", m_retentionInDays);

  }

  if(m_vPCFlowLogParametersHasBeenSet)
  {
   payload.WithObject("VPCFlowLogParameters", m_vPCFlowLogParameters.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace ObservabilityAdmin
} // namespace Aws
