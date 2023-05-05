/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/migration-hub-refactor-spaces/model/CreateServiceRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MigrationHubRefactorSpaces::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateServiceRequest::CreateServiceRequest() : 
    m_applicationIdentifierHasBeenSet(false),
    m_clientToken(Aws::Utils::UUID::PseudoRandomUUID()),
    m_clientTokenHasBeenSet(true),
    m_descriptionHasBeenSet(false),
    m_endpointType(ServiceEndpointType::NOT_SET),
    m_endpointTypeHasBeenSet(false),
    m_environmentIdentifierHasBeenSet(false),
    m_lambdaEndpointHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_urlEndpointHasBeenSet(false),
    m_vpcIdHasBeenSet(false)
{
}

Aws::String CreateServiceRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("ClientToken", m_clientToken);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_endpointTypeHasBeenSet)
  {
   payload.WithString("EndpointType", ServiceEndpointTypeMapper::GetNameForServiceEndpointType(m_endpointType));
  }

  if(m_lambdaEndpointHasBeenSet)
  {
   payload.WithObject("LambdaEndpoint", m_lambdaEndpoint.Jsonize());

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

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

  if(m_urlEndpointHasBeenSet)
  {
   payload.WithObject("UrlEndpoint", m_urlEndpoint.Jsonize());

  }

  if(m_vpcIdHasBeenSet)
  {
   payload.WithString("VpcId", m_vpcId);

  }

  return payload.View().WriteReadable();
}




