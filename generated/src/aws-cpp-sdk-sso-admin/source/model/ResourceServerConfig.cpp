/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sso-admin/model/ResourceServerConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SSOAdmin
{
namespace Model
{

ResourceServerConfig::ResourceServerConfig() : 
    m_scopesHasBeenSet(false)
{
}

ResourceServerConfig::ResourceServerConfig(JsonView jsonValue) : 
    m_scopesHasBeenSet(false)
{
  *this = jsonValue;
}

ResourceServerConfig& ResourceServerConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Scopes"))
  {
    Aws::Map<Aws::String, JsonView> scopesJsonMap = jsonValue.GetObject("Scopes").GetAllObjects();
    for(auto& scopesItem : scopesJsonMap)
    {
      m_scopes[scopesItem.first] = scopesItem.second.AsObject();
    }
    m_scopesHasBeenSet = true;
  }

  return *this;
}

JsonValue ResourceServerConfig::Jsonize() const
{
  JsonValue payload;

  if(m_scopesHasBeenSet)
  {
   JsonValue scopesJsonMap;
   for(auto& scopesItem : m_scopes)
   {
     scopesJsonMap.WithObject(scopesItem.first, scopesItem.second.Jsonize());
   }
   payload.WithObject("Scopes", std::move(scopesJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace SSOAdmin
} // namespace Aws
