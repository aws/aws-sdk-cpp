/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/networkflowmonitor/model/MonitorSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace NetworkFlowMonitor
{
namespace Model
{

MonitorSummary::MonitorSummary(JsonView jsonValue)
{
  *this = jsonValue;
}

MonitorSummary& MonitorSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("monitorArn"))
  {
    m_monitorArn = jsonValue.GetString("monitorArn");
    m_monitorArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("monitorName"))
  {
    m_monitorName = jsonValue.GetString("monitorName");
    m_monitorNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("monitorStatus"))
  {
    m_monitorStatus = MonitorStatusMapper::GetMonitorStatusForName(jsonValue.GetString("monitorStatus"));
    m_monitorStatusHasBeenSet = true;
  }
  return *this;
}

JsonValue MonitorSummary::Jsonize() const
{
  JsonValue payload;

  if(m_monitorArnHasBeenSet)
  {
   payload.WithString("monitorArn", m_monitorArn);

  }

  if(m_monitorNameHasBeenSet)
  {
   payload.WithString("monitorName", m_monitorName);

  }

  if(m_monitorStatusHasBeenSet)
  {
   payload.WithString("monitorStatus", MonitorStatusMapper::GetNameForMonitorStatus(m_monitorStatus));
  }

  return payload;
}

} // namespace Model
} // namespace NetworkFlowMonitor
} // namespace Aws
