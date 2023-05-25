/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mq/model/Configuration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MQ
{
namespace Model
{

Configuration::Configuration() : 
    m_arnHasBeenSet(false),
    m_authenticationStrategy(AuthenticationStrategy::NOT_SET),
    m_authenticationStrategyHasBeenSet(false),
    m_createdHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_engineType(EngineType::NOT_SET),
    m_engineTypeHasBeenSet(false),
    m_engineVersionHasBeenSet(false),
    m_idHasBeenSet(false),
    m_latestRevisionHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Configuration::Configuration(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_authenticationStrategy(AuthenticationStrategy::NOT_SET),
    m_authenticationStrategyHasBeenSet(false),
    m_createdHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_engineType(EngineType::NOT_SET),
    m_engineTypeHasBeenSet(false),
    m_engineVersionHasBeenSet(false),
    m_idHasBeenSet(false),
    m_latestRevisionHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
  *this = jsonValue;
}

Configuration& Configuration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("authenticationStrategy"))
  {
    m_authenticationStrategy = AuthenticationStrategyMapper::GetAuthenticationStrategyForName(jsonValue.GetString("authenticationStrategy"));

    m_authenticationStrategyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("created"))
  {
    m_created = jsonValue.GetString("created");

    m_createdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("engineType"))
  {
    m_engineType = EngineTypeMapper::GetEngineTypeForName(jsonValue.GetString("engineType"));

    m_engineTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("engineVersion"))
  {
    m_engineVersion = jsonValue.GetString("engineVersion");

    m_engineVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("latestRevision"))
  {
    m_latestRevision = jsonValue.GetObject("latestRevision");

    m_latestRevisionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
  }

  return *this;
}

JsonValue Configuration::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_authenticationStrategyHasBeenSet)
  {
   payload.WithString("authenticationStrategy", AuthenticationStrategyMapper::GetNameForAuthenticationStrategy(m_authenticationStrategy));
  }

  if(m_createdHasBeenSet)
  {
   payload.WithString("created", m_created.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_engineTypeHasBeenSet)
  {
   payload.WithString("engineType", EngineTypeMapper::GetNameForEngineType(m_engineType));
  }

  if(m_engineVersionHasBeenSet)
  {
   payload.WithString("engineVersion", m_engineVersion);

  }

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_latestRevisionHasBeenSet)
  {
   payload.WithObject("latestRevision", m_latestRevision.Jsonize());

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("tags", std::move(tagsJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace MQ
} // namespace Aws
