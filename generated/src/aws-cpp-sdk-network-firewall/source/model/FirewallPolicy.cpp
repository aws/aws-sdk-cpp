/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/network-firewall/model/FirewallPolicy.h>
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

FirewallPolicy::FirewallPolicy() : 
    m_statelessRuleGroupReferencesHasBeenSet(false),
    m_statelessDefaultActionsHasBeenSet(false),
    m_statelessFragmentDefaultActionsHasBeenSet(false),
    m_statelessCustomActionsHasBeenSet(false),
    m_statefulRuleGroupReferencesHasBeenSet(false),
    m_statefulDefaultActionsHasBeenSet(false),
    m_statefulEngineOptionsHasBeenSet(false)
{
}

FirewallPolicy::FirewallPolicy(JsonView jsonValue) : 
    m_statelessRuleGroupReferencesHasBeenSet(false),
    m_statelessDefaultActionsHasBeenSet(false),
    m_statelessFragmentDefaultActionsHasBeenSet(false),
    m_statelessCustomActionsHasBeenSet(false),
    m_statefulRuleGroupReferencesHasBeenSet(false),
    m_statefulDefaultActionsHasBeenSet(false),
    m_statefulEngineOptionsHasBeenSet(false)
{
  *this = jsonValue;
}

FirewallPolicy& FirewallPolicy::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("StatelessRuleGroupReferences"))
  {
    Aws::Utils::Array<JsonView> statelessRuleGroupReferencesJsonList = jsonValue.GetArray("StatelessRuleGroupReferences");
    for(unsigned statelessRuleGroupReferencesIndex = 0; statelessRuleGroupReferencesIndex < statelessRuleGroupReferencesJsonList.GetLength(); ++statelessRuleGroupReferencesIndex)
    {
      m_statelessRuleGroupReferences.push_back(statelessRuleGroupReferencesJsonList[statelessRuleGroupReferencesIndex].AsObject());
    }
    m_statelessRuleGroupReferencesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StatelessDefaultActions"))
  {
    Aws::Utils::Array<JsonView> statelessDefaultActionsJsonList = jsonValue.GetArray("StatelessDefaultActions");
    for(unsigned statelessDefaultActionsIndex = 0; statelessDefaultActionsIndex < statelessDefaultActionsJsonList.GetLength(); ++statelessDefaultActionsIndex)
    {
      m_statelessDefaultActions.push_back(statelessDefaultActionsJsonList[statelessDefaultActionsIndex].AsString());
    }
    m_statelessDefaultActionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StatelessFragmentDefaultActions"))
  {
    Aws::Utils::Array<JsonView> statelessFragmentDefaultActionsJsonList = jsonValue.GetArray("StatelessFragmentDefaultActions");
    for(unsigned statelessFragmentDefaultActionsIndex = 0; statelessFragmentDefaultActionsIndex < statelessFragmentDefaultActionsJsonList.GetLength(); ++statelessFragmentDefaultActionsIndex)
    {
      m_statelessFragmentDefaultActions.push_back(statelessFragmentDefaultActionsJsonList[statelessFragmentDefaultActionsIndex].AsString());
    }
    m_statelessFragmentDefaultActionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StatelessCustomActions"))
  {
    Aws::Utils::Array<JsonView> statelessCustomActionsJsonList = jsonValue.GetArray("StatelessCustomActions");
    for(unsigned statelessCustomActionsIndex = 0; statelessCustomActionsIndex < statelessCustomActionsJsonList.GetLength(); ++statelessCustomActionsIndex)
    {
      m_statelessCustomActions.push_back(statelessCustomActionsJsonList[statelessCustomActionsIndex].AsObject());
    }
    m_statelessCustomActionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StatefulRuleGroupReferences"))
  {
    Aws::Utils::Array<JsonView> statefulRuleGroupReferencesJsonList = jsonValue.GetArray("StatefulRuleGroupReferences");
    for(unsigned statefulRuleGroupReferencesIndex = 0; statefulRuleGroupReferencesIndex < statefulRuleGroupReferencesJsonList.GetLength(); ++statefulRuleGroupReferencesIndex)
    {
      m_statefulRuleGroupReferences.push_back(statefulRuleGroupReferencesJsonList[statefulRuleGroupReferencesIndex].AsObject());
    }
    m_statefulRuleGroupReferencesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StatefulDefaultActions"))
  {
    Aws::Utils::Array<JsonView> statefulDefaultActionsJsonList = jsonValue.GetArray("StatefulDefaultActions");
    for(unsigned statefulDefaultActionsIndex = 0; statefulDefaultActionsIndex < statefulDefaultActionsJsonList.GetLength(); ++statefulDefaultActionsIndex)
    {
      m_statefulDefaultActions.push_back(statefulDefaultActionsJsonList[statefulDefaultActionsIndex].AsString());
    }
    m_statefulDefaultActionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StatefulEngineOptions"))
  {
    m_statefulEngineOptions = jsonValue.GetObject("StatefulEngineOptions");

    m_statefulEngineOptionsHasBeenSet = true;
  }

  return *this;
}

JsonValue FirewallPolicy::Jsonize() const
{
  JsonValue payload;

  if(m_statelessRuleGroupReferencesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> statelessRuleGroupReferencesJsonList(m_statelessRuleGroupReferences.size());
   for(unsigned statelessRuleGroupReferencesIndex = 0; statelessRuleGroupReferencesIndex < statelessRuleGroupReferencesJsonList.GetLength(); ++statelessRuleGroupReferencesIndex)
   {
     statelessRuleGroupReferencesJsonList[statelessRuleGroupReferencesIndex].AsObject(m_statelessRuleGroupReferences[statelessRuleGroupReferencesIndex].Jsonize());
   }
   payload.WithArray("StatelessRuleGroupReferences", std::move(statelessRuleGroupReferencesJsonList));

  }

  if(m_statelessDefaultActionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> statelessDefaultActionsJsonList(m_statelessDefaultActions.size());
   for(unsigned statelessDefaultActionsIndex = 0; statelessDefaultActionsIndex < statelessDefaultActionsJsonList.GetLength(); ++statelessDefaultActionsIndex)
   {
     statelessDefaultActionsJsonList[statelessDefaultActionsIndex].AsString(m_statelessDefaultActions[statelessDefaultActionsIndex]);
   }
   payload.WithArray("StatelessDefaultActions", std::move(statelessDefaultActionsJsonList));

  }

  if(m_statelessFragmentDefaultActionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> statelessFragmentDefaultActionsJsonList(m_statelessFragmentDefaultActions.size());
   for(unsigned statelessFragmentDefaultActionsIndex = 0; statelessFragmentDefaultActionsIndex < statelessFragmentDefaultActionsJsonList.GetLength(); ++statelessFragmentDefaultActionsIndex)
   {
     statelessFragmentDefaultActionsJsonList[statelessFragmentDefaultActionsIndex].AsString(m_statelessFragmentDefaultActions[statelessFragmentDefaultActionsIndex]);
   }
   payload.WithArray("StatelessFragmentDefaultActions", std::move(statelessFragmentDefaultActionsJsonList));

  }

  if(m_statelessCustomActionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> statelessCustomActionsJsonList(m_statelessCustomActions.size());
   for(unsigned statelessCustomActionsIndex = 0; statelessCustomActionsIndex < statelessCustomActionsJsonList.GetLength(); ++statelessCustomActionsIndex)
   {
     statelessCustomActionsJsonList[statelessCustomActionsIndex].AsObject(m_statelessCustomActions[statelessCustomActionsIndex].Jsonize());
   }
   payload.WithArray("StatelessCustomActions", std::move(statelessCustomActionsJsonList));

  }

  if(m_statefulRuleGroupReferencesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> statefulRuleGroupReferencesJsonList(m_statefulRuleGroupReferences.size());
   for(unsigned statefulRuleGroupReferencesIndex = 0; statefulRuleGroupReferencesIndex < statefulRuleGroupReferencesJsonList.GetLength(); ++statefulRuleGroupReferencesIndex)
   {
     statefulRuleGroupReferencesJsonList[statefulRuleGroupReferencesIndex].AsObject(m_statefulRuleGroupReferences[statefulRuleGroupReferencesIndex].Jsonize());
   }
   payload.WithArray("StatefulRuleGroupReferences", std::move(statefulRuleGroupReferencesJsonList));

  }

  if(m_statefulDefaultActionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> statefulDefaultActionsJsonList(m_statefulDefaultActions.size());
   for(unsigned statefulDefaultActionsIndex = 0; statefulDefaultActionsIndex < statefulDefaultActionsJsonList.GetLength(); ++statefulDefaultActionsIndex)
   {
     statefulDefaultActionsJsonList[statefulDefaultActionsIndex].AsString(m_statefulDefaultActions[statefulDefaultActionsIndex]);
   }
   payload.WithArray("StatefulDefaultActions", std::move(statefulDefaultActionsJsonList));

  }

  if(m_statefulEngineOptionsHasBeenSet)
  {
   payload.WithObject("StatefulEngineOptions", m_statefulEngineOptions.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
