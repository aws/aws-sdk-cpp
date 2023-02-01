/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/FirewallPolicyDetails.h>
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

FirewallPolicyDetails::FirewallPolicyDetails() : 
    m_statefulRuleGroupReferencesHasBeenSet(false),
    m_statelessCustomActionsHasBeenSet(false),
    m_statelessDefaultActionsHasBeenSet(false),
    m_statelessFragmentDefaultActionsHasBeenSet(false),
    m_statelessRuleGroupReferencesHasBeenSet(false)
{
}

FirewallPolicyDetails::FirewallPolicyDetails(JsonView jsonValue) : 
    m_statefulRuleGroupReferencesHasBeenSet(false),
    m_statelessCustomActionsHasBeenSet(false),
    m_statelessDefaultActionsHasBeenSet(false),
    m_statelessFragmentDefaultActionsHasBeenSet(false),
    m_statelessRuleGroupReferencesHasBeenSet(false)
{
  *this = jsonValue;
}

FirewallPolicyDetails& FirewallPolicyDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("StatefulRuleGroupReferences"))
  {
    Aws::Utils::Array<JsonView> statefulRuleGroupReferencesJsonList = jsonValue.GetArray("StatefulRuleGroupReferences");
    for(unsigned statefulRuleGroupReferencesIndex = 0; statefulRuleGroupReferencesIndex < statefulRuleGroupReferencesJsonList.GetLength(); ++statefulRuleGroupReferencesIndex)
    {
      m_statefulRuleGroupReferences.push_back(statefulRuleGroupReferencesJsonList[statefulRuleGroupReferencesIndex].AsObject());
    }
    m_statefulRuleGroupReferencesHasBeenSet = true;
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

  if(jsonValue.ValueExists("StatelessRuleGroupReferences"))
  {
    Aws::Utils::Array<JsonView> statelessRuleGroupReferencesJsonList = jsonValue.GetArray("StatelessRuleGroupReferences");
    for(unsigned statelessRuleGroupReferencesIndex = 0; statelessRuleGroupReferencesIndex < statelessRuleGroupReferencesJsonList.GetLength(); ++statelessRuleGroupReferencesIndex)
    {
      m_statelessRuleGroupReferences.push_back(statelessRuleGroupReferencesJsonList[statelessRuleGroupReferencesIndex].AsObject());
    }
    m_statelessRuleGroupReferencesHasBeenSet = true;
  }

  return *this;
}

JsonValue FirewallPolicyDetails::Jsonize() const
{
  JsonValue payload;

  if(m_statefulRuleGroupReferencesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> statefulRuleGroupReferencesJsonList(m_statefulRuleGroupReferences.size());
   for(unsigned statefulRuleGroupReferencesIndex = 0; statefulRuleGroupReferencesIndex < statefulRuleGroupReferencesJsonList.GetLength(); ++statefulRuleGroupReferencesIndex)
   {
     statefulRuleGroupReferencesJsonList[statefulRuleGroupReferencesIndex].AsObject(m_statefulRuleGroupReferences[statefulRuleGroupReferencesIndex].Jsonize());
   }
   payload.WithArray("StatefulRuleGroupReferences", std::move(statefulRuleGroupReferencesJsonList));

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

  if(m_statelessRuleGroupReferencesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> statelessRuleGroupReferencesJsonList(m_statelessRuleGroupReferences.size());
   for(unsigned statelessRuleGroupReferencesIndex = 0; statelessRuleGroupReferencesIndex < statelessRuleGroupReferencesJsonList.GetLength(); ++statelessRuleGroupReferencesIndex)
   {
     statelessRuleGroupReferencesJsonList[statelessRuleGroupReferencesIndex].AsObject(m_statelessRuleGroupReferences[statelessRuleGroupReferencesIndex].Jsonize());
   }
   payload.WithArray("StatelessRuleGroupReferences", std::move(statelessRuleGroupReferencesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
