/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/simspaceweaver/model/LaunchOverrides.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SimSpaceWeaver
{
namespace Model
{

LaunchOverrides::LaunchOverrides() : 
    m_launchCommandsHasBeenSet(false)
{
}

LaunchOverrides::LaunchOverrides(JsonView jsonValue) : 
    m_launchCommandsHasBeenSet(false)
{
  *this = jsonValue;
}

LaunchOverrides& LaunchOverrides::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("LaunchCommands"))
  {
    Aws::Utils::Array<JsonView> launchCommandsJsonList = jsonValue.GetArray("LaunchCommands");
    for(unsigned launchCommandsIndex = 0; launchCommandsIndex < launchCommandsJsonList.GetLength(); ++launchCommandsIndex)
    {
      m_launchCommands.push_back(launchCommandsJsonList[launchCommandsIndex].AsString());
    }
    m_launchCommandsHasBeenSet = true;
  }

  return *this;
}

JsonValue LaunchOverrides::Jsonize() const
{
  JsonValue payload;

  if(m_launchCommandsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> launchCommandsJsonList(m_launchCommands.size());
   for(unsigned launchCommandsIndex = 0; launchCommandsIndex < launchCommandsJsonList.GetLength(); ++launchCommandsIndex)
   {
     launchCommandsJsonList[launchCommandsIndex].AsString(m_launchCommands[launchCommandsIndex]);
   }
   payload.WithArray("LaunchCommands", std::move(launchCommandsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SimSpaceWeaver
} // namespace Aws
