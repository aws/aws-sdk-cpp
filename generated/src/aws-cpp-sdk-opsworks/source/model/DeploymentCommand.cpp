/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opsworks/model/DeploymentCommand.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace OpsWorks
{
namespace Model
{

DeploymentCommand::DeploymentCommand() : 
    m_name(DeploymentCommandName::NOT_SET),
    m_nameHasBeenSet(false),
    m_argsHasBeenSet(false)
{
}

DeploymentCommand::DeploymentCommand(JsonView jsonValue) : 
    m_name(DeploymentCommandName::NOT_SET),
    m_nameHasBeenSet(false),
    m_argsHasBeenSet(false)
{
  *this = jsonValue;
}

DeploymentCommand& DeploymentCommand::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = DeploymentCommandNameMapper::GetDeploymentCommandNameForName(jsonValue.GetString("Name"));

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Args"))
  {
    Aws::Map<Aws::String, JsonView> argsJsonMap = jsonValue.GetObject("Args").GetAllObjects();
    for(auto& argsItem : argsJsonMap)
    {
      Aws::Utils::Array<JsonView> stringsJsonList = argsItem.second.AsArray();
      Aws::Vector<Aws::String> stringsList;
      stringsList.reserve((size_t)stringsJsonList.GetLength());
      for(unsigned stringsIndex = 0; stringsIndex < stringsJsonList.GetLength(); ++stringsIndex)
      {
        stringsList.push_back(stringsJsonList[stringsIndex].AsString());
      }
      m_args[argsItem.first] = std::move(stringsList);
    }
    m_argsHasBeenSet = true;
  }

  return *this;
}

JsonValue DeploymentCommand::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", DeploymentCommandNameMapper::GetNameForDeploymentCommandName(m_name));
  }

  if(m_argsHasBeenSet)
  {
   JsonValue argsJsonMap;
   for(auto& argsItem : m_args)
   {
     Aws::Utils::Array<JsonValue> stringsJsonList(argsItem.second.size());
     for(unsigned stringsIndex = 0; stringsIndex < stringsJsonList.GetLength(); ++stringsIndex)
     {
       stringsJsonList[stringsIndex].AsString(argsItem.second[stringsIndex]);
     }
     argsJsonMap.WithArray(argsItem.first, std::move(stringsJsonList));
   }
   payload.WithObject("Args", std::move(argsJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
