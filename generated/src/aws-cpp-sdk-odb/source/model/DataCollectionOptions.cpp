/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/odb/model/DataCollectionOptions.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace odb
{
namespace Model
{

DataCollectionOptions::DataCollectionOptions(JsonView jsonValue)
{
  *this = jsonValue;
}

DataCollectionOptions& DataCollectionOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("isDiagnosticsEventsEnabled"))
  {
    m_isDiagnosticsEventsEnabled = jsonValue.GetBool("isDiagnosticsEventsEnabled");
    m_isDiagnosticsEventsEnabledHasBeenSet = true;
  }
  if(jsonValue.ValueExists("isHealthMonitoringEnabled"))
  {
    m_isHealthMonitoringEnabled = jsonValue.GetBool("isHealthMonitoringEnabled");
    m_isHealthMonitoringEnabledHasBeenSet = true;
  }
  if(jsonValue.ValueExists("isIncidentLogsEnabled"))
  {
    m_isIncidentLogsEnabled = jsonValue.GetBool("isIncidentLogsEnabled");
    m_isIncidentLogsEnabledHasBeenSet = true;
  }
  return *this;
}

JsonValue DataCollectionOptions::Jsonize() const
{
  JsonValue payload;

  if(m_isDiagnosticsEventsEnabledHasBeenSet)
  {
   payload.WithBool("isDiagnosticsEventsEnabled", m_isDiagnosticsEventsEnabled);

  }

  if(m_isHealthMonitoringEnabledHasBeenSet)
  {
   payload.WithBool("isHealthMonitoringEnabled", m_isHealthMonitoringEnabled);

  }

  if(m_isIncidentLogsEnabledHasBeenSet)
  {
   payload.WithBool("isIncidentLogsEnabled", m_isIncidentLogsEnabled);

  }

  return payload;
}

} // namespace Model
} // namespace odb
} // namespace Aws
