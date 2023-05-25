/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/network-firewall/model/RuleVariables.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace NetworkFirewall
{
namespace Model
{

RuleVariables::RuleVariables() : 
    m_iPSetsHasBeenSet(false),
    m_portSetsHasBeenSet(false)
{
}

RuleVariables::RuleVariables(JsonView jsonValue) : 
    m_iPSetsHasBeenSet(false),
    m_portSetsHasBeenSet(false)
{
  *this = jsonValue;
}

RuleVariables& RuleVariables::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("IPSets"))
  {
    Aws::Map<Aws::String, JsonView> iPSetsJsonMap = jsonValue.GetObject("IPSets").GetAllObjects();
    for(auto& iPSetsItem : iPSetsJsonMap)
    {
      m_iPSets[iPSetsItem.first] = iPSetsItem.second.AsObject();
    }
    m_iPSetsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PortSets"))
  {
    Aws::Map<Aws::String, JsonView> portSetsJsonMap = jsonValue.GetObject("PortSets").GetAllObjects();
    for(auto& portSetsItem : portSetsJsonMap)
    {
      m_portSets[portSetsItem.first] = portSetsItem.second.AsObject();
    }
    m_portSetsHasBeenSet = true;
  }

  return *this;
}

JsonValue RuleVariables::Jsonize() const
{
  JsonValue payload;

  if(m_iPSetsHasBeenSet)
  {
   JsonValue iPSetsJsonMap;
   for(auto& iPSetsItem : m_iPSets)
   {
     iPSetsJsonMap.WithObject(iPSetsItem.first, iPSetsItem.second.Jsonize());
   }
   payload.WithObject("IPSets", std::move(iPSetsJsonMap));

  }

  if(m_portSetsHasBeenSet)
  {
   JsonValue portSetsJsonMap;
   for(auto& portSetsItem : m_portSets)
   {
     portSetsJsonMap.WithObject(portSetsItem.first, portSetsItem.second.Jsonize());
   }
   payload.WithObject("PortSets", std::move(portSetsJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
