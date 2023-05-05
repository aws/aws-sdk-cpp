/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/migration-hub-refactor-spaces/model/CreateRouteRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MigrationHubRefactorSpaces::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateRouteRequest::CreateRouteRequest() : 
    m_applicationIdentifierHasBeenSet(false),
    m_clientToken(Aws::Utils::UUID::PseudoRandomUUID()),
    m_clientTokenHasBeenSet(true),
    m_defaultRouteHasBeenSet(false),
    m_environmentIdentifierHasBeenSet(false),
    m_routeType(RouteType::NOT_SET),
    m_routeTypeHasBeenSet(false),
    m_serviceIdentifierHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_uriPathRouteHasBeenSet(false)
{
}

Aws::String CreateRouteRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("ClientToken", m_clientToken);

  }

  if(m_defaultRouteHasBeenSet)
  {
   payload.WithObject("DefaultRoute", m_defaultRoute.Jsonize());

  }

  if(m_routeTypeHasBeenSet)
  {
   payload.WithString("RouteType", RouteTypeMapper::GetNameForRouteType(m_routeType));
  }

  if(m_serviceIdentifierHasBeenSet)
  {
   payload.WithString("ServiceIdentifier", m_serviceIdentifier);

  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("Tags", std::move(tagsJsonMap));

  }

  if(m_uriPathRouteHasBeenSet)
  {
   payload.WithObject("UriPathRoute", m_uriPathRoute.Jsonize());

  }

  return payload.View().WriteReadable();
}




