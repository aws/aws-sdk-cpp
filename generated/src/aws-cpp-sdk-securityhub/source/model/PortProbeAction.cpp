/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/PortProbeAction.h>
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

PortProbeAction::PortProbeAction() : 
    m_portProbeDetailsHasBeenSet(false),
    m_blocked(false),
    m_blockedHasBeenSet(false)
{
}

PortProbeAction::PortProbeAction(JsonView jsonValue) : 
    m_portProbeDetailsHasBeenSet(false),
    m_blocked(false),
    m_blockedHasBeenSet(false)
{
  *this = jsonValue;
}

PortProbeAction& PortProbeAction::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("PortProbeDetails"))
  {
    Aws::Utils::Array<JsonView> portProbeDetailsJsonList = jsonValue.GetArray("PortProbeDetails");
    for(unsigned portProbeDetailsIndex = 0; portProbeDetailsIndex < portProbeDetailsJsonList.GetLength(); ++portProbeDetailsIndex)
    {
      m_portProbeDetails.push_back(portProbeDetailsJsonList[portProbeDetailsIndex].AsObject());
    }
    m_portProbeDetailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Blocked"))
  {
    m_blocked = jsonValue.GetBool("Blocked");

    m_blockedHasBeenSet = true;
  }

  return *this;
}

JsonValue PortProbeAction::Jsonize() const
{
  JsonValue payload;

  if(m_portProbeDetailsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> portProbeDetailsJsonList(m_portProbeDetails.size());
   for(unsigned portProbeDetailsIndex = 0; portProbeDetailsIndex < portProbeDetailsJsonList.GetLength(); ++portProbeDetailsIndex)
   {
     portProbeDetailsJsonList[portProbeDetailsIndex].AsObject(m_portProbeDetails[portProbeDetailsIndex].Jsonize());
   }
   payload.WithArray("PortProbeDetails", std::move(portProbeDetailsJsonList));

  }

  if(m_blockedHasBeenSet)
  {
   payload.WithBool("Blocked", m_blocked);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
