/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/states/model/StateExitedEventDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SFN
{
namespace Model
{

StateExitedEventDetails::StateExitedEventDetails(JsonView jsonValue)
{
  *this = jsonValue;
}

StateExitedEventDetails& StateExitedEventDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("output"))
  {
    m_output = jsonValue.GetString("output");
    m_outputHasBeenSet = true;
  }
  if(jsonValue.ValueExists("outputDetails"))
  {
    m_outputDetails = jsonValue.GetObject("outputDetails");
    m_outputDetailsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("assignedVariables"))
  {
    Aws::Map<Aws::String, JsonView> assignedVariablesJsonMap = jsonValue.GetObject("assignedVariables").GetAllObjects();
    for(auto& assignedVariablesItem : assignedVariablesJsonMap)
    {
      m_assignedVariables[assignedVariablesItem.first] = assignedVariablesItem.second.AsString();
    }
    m_assignedVariablesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("assignedVariablesDetails"))
  {
    m_assignedVariablesDetails = jsonValue.GetObject("assignedVariablesDetails");
    m_assignedVariablesDetailsHasBeenSet = true;
  }
  return *this;
}

JsonValue StateExitedEventDetails::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_outputHasBeenSet)
  {
   payload.WithString("output", m_output);

  }

  if(m_outputDetailsHasBeenSet)
  {
   payload.WithObject("outputDetails", m_outputDetails.Jsonize());

  }

  if(m_assignedVariablesHasBeenSet)
  {
   JsonValue assignedVariablesJsonMap;
   for(auto& assignedVariablesItem : m_assignedVariables)
   {
     assignedVariablesJsonMap.WithString(assignedVariablesItem.first, assignedVariablesItem.second);
   }
   payload.WithObject("assignedVariables", std::move(assignedVariablesJsonMap));

  }

  if(m_assignedVariablesDetailsHasBeenSet)
  {
   payload.WithObject("assignedVariablesDetails", m_assignedVariablesDetails.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SFN
} // namespace Aws
