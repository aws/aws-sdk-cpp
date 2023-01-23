/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/network-firewall/model/ReferenceSets.h>
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

ReferenceSets::ReferenceSets() : 
    m_iPSetReferencesHasBeenSet(false)
{
}

ReferenceSets::ReferenceSets(JsonView jsonValue) : 
    m_iPSetReferencesHasBeenSet(false)
{
  *this = jsonValue;
}

ReferenceSets& ReferenceSets::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("IPSetReferences"))
  {
    Aws::Map<Aws::String, JsonView> iPSetReferencesJsonMap = jsonValue.GetObject("IPSetReferences").GetAllObjects();
    for(auto& iPSetReferencesItem : iPSetReferencesJsonMap)
    {
      m_iPSetReferences[iPSetReferencesItem.first] = iPSetReferencesItem.second.AsObject();
    }
    m_iPSetReferencesHasBeenSet = true;
  }

  return *this;
}

JsonValue ReferenceSets::Jsonize() const
{
  JsonValue payload;

  if(m_iPSetReferencesHasBeenSet)
  {
   JsonValue iPSetReferencesJsonMap;
   for(auto& iPSetReferencesItem : m_iPSetReferences)
   {
     iPSetReferencesJsonMap.WithObject(iPSetReferencesItem.first, iPSetReferencesItem.second.Jsonize());
   }
   payload.WithObject("IPSetReferences", std::move(iPSetReferencesJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
