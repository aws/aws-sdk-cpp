/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/UpdateSpaceRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateSpaceRequest::UpdateSpaceRequest() : 
    m_domainIdHasBeenSet(false),
    m_spaceNameHasBeenSet(false),
    m_spaceSettingsHasBeenSet(false)
{
}

Aws::String UpdateSpaceRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_domainIdHasBeenSet)
  {
   payload.WithString("DomainId", m_domainId);

  }

  if(m_spaceNameHasBeenSet)
  {
   payload.WithString("SpaceName", m_spaceName);

  }

  if(m_spaceSettingsHasBeenSet)
  {
   payload.WithObject("SpaceSettings", m_spaceSettings.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateSpaceRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SageMaker.UpdateSpace"));
  return headers;

}




