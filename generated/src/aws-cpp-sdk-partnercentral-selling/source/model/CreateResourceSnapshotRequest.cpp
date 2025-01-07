/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/partnercentral-selling/model/CreateResourceSnapshotRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::PartnerCentralSelling::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateResourceSnapshotRequest::CreateResourceSnapshotRequest() : 
    m_catalogHasBeenSet(false),
    m_clientToken(Aws::Utils::UUID::PseudoRandomUUID()),
    m_clientTokenHasBeenSet(true),
    m_engagementIdentifierHasBeenSet(false),
    m_resourceIdentifierHasBeenSet(false),
    m_resourceSnapshotTemplateIdentifierHasBeenSet(false),
    m_resourceType(ResourceType::NOT_SET),
    m_resourceTypeHasBeenSet(false)
{
}

Aws::String CreateResourceSnapshotRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_catalogHasBeenSet)
  {
   payload.WithString("Catalog", m_catalog);

  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("ClientToken", m_clientToken);

  }

  if(m_engagementIdentifierHasBeenSet)
  {
   payload.WithString("EngagementIdentifier", m_engagementIdentifier);

  }

  if(m_resourceIdentifierHasBeenSet)
  {
   payload.WithString("ResourceIdentifier", m_resourceIdentifier);

  }

  if(m_resourceSnapshotTemplateIdentifierHasBeenSet)
  {
   payload.WithString("ResourceSnapshotTemplateIdentifier", m_resourceSnapshotTemplateIdentifier);

  }

  if(m_resourceTypeHasBeenSet)
  {
   payload.WithString("ResourceType", ResourceTypeMapper::GetNameForResourceType(m_resourceType));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateResourceSnapshotRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSPartnerCentralSelling.CreateResourceSnapshot"));
  return headers;

}




