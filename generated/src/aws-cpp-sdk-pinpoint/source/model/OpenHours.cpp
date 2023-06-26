/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint/model/OpenHours.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Pinpoint
{
namespace Model
{

OpenHours::OpenHours() : 
    m_eMAILHasBeenSet(false),
    m_sMSHasBeenSet(false),
    m_pUSHHasBeenSet(false),
    m_vOICEHasBeenSet(false),
    m_cUSTOMHasBeenSet(false)
{
}

OpenHours::OpenHours(JsonView jsonValue) : 
    m_eMAILHasBeenSet(false),
    m_sMSHasBeenSet(false),
    m_pUSHHasBeenSet(false),
    m_vOICEHasBeenSet(false),
    m_cUSTOMHasBeenSet(false)
{
  *this = jsonValue;
}

OpenHours& OpenHours::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("EMAIL"))
  {
    Aws::Map<Aws::String, JsonView> eMAILJsonMap = jsonValue.GetObject("EMAIL").GetAllObjects();
    for(auto& eMAILItem : eMAILJsonMap)
    {
      Aws::Utils::Array<JsonView> listOfOpenHoursRulesJsonList = eMAILItem.second.AsArray();
      Aws::Vector<OpenHoursRule> listOfOpenHoursRulesList;
      listOfOpenHoursRulesList.reserve((size_t)listOfOpenHoursRulesJsonList.GetLength());
      for(unsigned listOfOpenHoursRulesIndex = 0; listOfOpenHoursRulesIndex < listOfOpenHoursRulesJsonList.GetLength(); ++listOfOpenHoursRulesIndex)
      {
        listOfOpenHoursRulesList.push_back(listOfOpenHoursRulesJsonList[listOfOpenHoursRulesIndex].AsObject());
      }
      m_eMAIL[DayOfWeekMapper::GetDayOfWeekForName(eMAILItem.first)] = std::move(listOfOpenHoursRulesList);
    }
    m_eMAILHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SMS"))
  {
    Aws::Map<Aws::String, JsonView> sMSJsonMap = jsonValue.GetObject("SMS").GetAllObjects();
    for(auto& sMSItem : sMSJsonMap)
    {
      Aws::Utils::Array<JsonView> listOfOpenHoursRulesJsonList = sMSItem.second.AsArray();
      Aws::Vector<OpenHoursRule> listOfOpenHoursRulesList;
      listOfOpenHoursRulesList.reserve((size_t)listOfOpenHoursRulesJsonList.GetLength());
      for(unsigned listOfOpenHoursRulesIndex = 0; listOfOpenHoursRulesIndex < listOfOpenHoursRulesJsonList.GetLength(); ++listOfOpenHoursRulesIndex)
      {
        listOfOpenHoursRulesList.push_back(listOfOpenHoursRulesJsonList[listOfOpenHoursRulesIndex].AsObject());
      }
      m_sMS[DayOfWeekMapper::GetDayOfWeekForName(sMSItem.first)] = std::move(listOfOpenHoursRulesList);
    }
    m_sMSHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PUSH"))
  {
    Aws::Map<Aws::String, JsonView> pUSHJsonMap = jsonValue.GetObject("PUSH").GetAllObjects();
    for(auto& pUSHItem : pUSHJsonMap)
    {
      Aws::Utils::Array<JsonView> listOfOpenHoursRulesJsonList = pUSHItem.second.AsArray();
      Aws::Vector<OpenHoursRule> listOfOpenHoursRulesList;
      listOfOpenHoursRulesList.reserve((size_t)listOfOpenHoursRulesJsonList.GetLength());
      for(unsigned listOfOpenHoursRulesIndex = 0; listOfOpenHoursRulesIndex < listOfOpenHoursRulesJsonList.GetLength(); ++listOfOpenHoursRulesIndex)
      {
        listOfOpenHoursRulesList.push_back(listOfOpenHoursRulesJsonList[listOfOpenHoursRulesIndex].AsObject());
      }
      m_pUSH[DayOfWeekMapper::GetDayOfWeekForName(pUSHItem.first)] = std::move(listOfOpenHoursRulesList);
    }
    m_pUSHHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VOICE"))
  {
    Aws::Map<Aws::String, JsonView> vOICEJsonMap = jsonValue.GetObject("VOICE").GetAllObjects();
    for(auto& vOICEItem : vOICEJsonMap)
    {
      Aws::Utils::Array<JsonView> listOfOpenHoursRulesJsonList = vOICEItem.second.AsArray();
      Aws::Vector<OpenHoursRule> listOfOpenHoursRulesList;
      listOfOpenHoursRulesList.reserve((size_t)listOfOpenHoursRulesJsonList.GetLength());
      for(unsigned listOfOpenHoursRulesIndex = 0; listOfOpenHoursRulesIndex < listOfOpenHoursRulesJsonList.GetLength(); ++listOfOpenHoursRulesIndex)
      {
        listOfOpenHoursRulesList.push_back(listOfOpenHoursRulesJsonList[listOfOpenHoursRulesIndex].AsObject());
      }
      m_vOICE[DayOfWeekMapper::GetDayOfWeekForName(vOICEItem.first)] = std::move(listOfOpenHoursRulesList);
    }
    m_vOICEHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CUSTOM"))
  {
    Aws::Map<Aws::String, JsonView> cUSTOMJsonMap = jsonValue.GetObject("CUSTOM").GetAllObjects();
    for(auto& cUSTOMItem : cUSTOMJsonMap)
    {
      Aws::Utils::Array<JsonView> listOfOpenHoursRulesJsonList = cUSTOMItem.second.AsArray();
      Aws::Vector<OpenHoursRule> listOfOpenHoursRulesList;
      listOfOpenHoursRulesList.reserve((size_t)listOfOpenHoursRulesJsonList.GetLength());
      for(unsigned listOfOpenHoursRulesIndex = 0; listOfOpenHoursRulesIndex < listOfOpenHoursRulesJsonList.GetLength(); ++listOfOpenHoursRulesIndex)
      {
        listOfOpenHoursRulesList.push_back(listOfOpenHoursRulesJsonList[listOfOpenHoursRulesIndex].AsObject());
      }
      m_cUSTOM[DayOfWeekMapper::GetDayOfWeekForName(cUSTOMItem.first)] = std::move(listOfOpenHoursRulesList);
    }
    m_cUSTOMHasBeenSet = true;
  }

  return *this;
}

JsonValue OpenHours::Jsonize() const
{
  JsonValue payload;

  if(m_eMAILHasBeenSet)
  {
   JsonValue eMAILJsonMap;
   for(auto& eMAILItem : m_eMAIL)
   {
     Aws::Utils::Array<JsonValue> listOfOpenHoursRulesJsonList(eMAILItem.second.size());
     for(unsigned listOfOpenHoursRulesIndex = 0; listOfOpenHoursRulesIndex < listOfOpenHoursRulesJsonList.GetLength(); ++listOfOpenHoursRulesIndex)
     {
       listOfOpenHoursRulesJsonList[listOfOpenHoursRulesIndex].AsObject(eMAILItem.second[listOfOpenHoursRulesIndex].Jsonize());
     }
     eMAILJsonMap.WithArray(DayOfWeekMapper::GetNameForDayOfWeek(eMAILItem.first), std::move(listOfOpenHoursRulesJsonList));
   }
   payload.WithObject("EMAIL", std::move(eMAILJsonMap));

  }

  if(m_sMSHasBeenSet)
  {
   JsonValue sMSJsonMap;
   for(auto& sMSItem : m_sMS)
   {
     Aws::Utils::Array<JsonValue> listOfOpenHoursRulesJsonList(sMSItem.second.size());
     for(unsigned listOfOpenHoursRulesIndex = 0; listOfOpenHoursRulesIndex < listOfOpenHoursRulesJsonList.GetLength(); ++listOfOpenHoursRulesIndex)
     {
       listOfOpenHoursRulesJsonList[listOfOpenHoursRulesIndex].AsObject(sMSItem.second[listOfOpenHoursRulesIndex].Jsonize());
     }
     sMSJsonMap.WithArray(DayOfWeekMapper::GetNameForDayOfWeek(sMSItem.first), std::move(listOfOpenHoursRulesJsonList));
   }
   payload.WithObject("SMS", std::move(sMSJsonMap));

  }

  if(m_pUSHHasBeenSet)
  {
   JsonValue pUSHJsonMap;
   for(auto& pUSHItem : m_pUSH)
   {
     Aws::Utils::Array<JsonValue> listOfOpenHoursRulesJsonList(pUSHItem.second.size());
     for(unsigned listOfOpenHoursRulesIndex = 0; listOfOpenHoursRulesIndex < listOfOpenHoursRulesJsonList.GetLength(); ++listOfOpenHoursRulesIndex)
     {
       listOfOpenHoursRulesJsonList[listOfOpenHoursRulesIndex].AsObject(pUSHItem.second[listOfOpenHoursRulesIndex].Jsonize());
     }
     pUSHJsonMap.WithArray(DayOfWeekMapper::GetNameForDayOfWeek(pUSHItem.first), std::move(listOfOpenHoursRulesJsonList));
   }
   payload.WithObject("PUSH", std::move(pUSHJsonMap));

  }

  if(m_vOICEHasBeenSet)
  {
   JsonValue vOICEJsonMap;
   for(auto& vOICEItem : m_vOICE)
   {
     Aws::Utils::Array<JsonValue> listOfOpenHoursRulesJsonList(vOICEItem.second.size());
     for(unsigned listOfOpenHoursRulesIndex = 0; listOfOpenHoursRulesIndex < listOfOpenHoursRulesJsonList.GetLength(); ++listOfOpenHoursRulesIndex)
     {
       listOfOpenHoursRulesJsonList[listOfOpenHoursRulesIndex].AsObject(vOICEItem.second[listOfOpenHoursRulesIndex].Jsonize());
     }
     vOICEJsonMap.WithArray(DayOfWeekMapper::GetNameForDayOfWeek(vOICEItem.first), std::move(listOfOpenHoursRulesJsonList));
   }
   payload.WithObject("VOICE", std::move(vOICEJsonMap));

  }

  if(m_cUSTOMHasBeenSet)
  {
   JsonValue cUSTOMJsonMap;
   for(auto& cUSTOMItem : m_cUSTOM)
   {
     Aws::Utils::Array<JsonValue> listOfOpenHoursRulesJsonList(cUSTOMItem.second.size());
     for(unsigned listOfOpenHoursRulesIndex = 0; listOfOpenHoursRulesIndex < listOfOpenHoursRulesJsonList.GetLength(); ++listOfOpenHoursRulesIndex)
     {
       listOfOpenHoursRulesJsonList[listOfOpenHoursRulesIndex].AsObject(cUSTOMItem.second[listOfOpenHoursRulesIndex].Jsonize());
     }
     cUSTOMJsonMap.WithArray(DayOfWeekMapper::GetNameForDayOfWeek(cUSTOMItem.first), std::move(listOfOpenHoursRulesJsonList));
   }
   payload.WithObject("CUSTOM", std::move(cUSTOMJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
