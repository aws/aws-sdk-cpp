/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/odb/model/CreateOdbNetworkRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::odb::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateOdbNetworkRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_displayNameHasBeenSet)
  {
   payload.WithString("displayName", m_displayName);

  }

  if(m_availabilityZoneHasBeenSet)
  {
   payload.WithString("availabilityZone", m_availabilityZone);

  }

  if(m_availabilityZoneIdHasBeenSet)
  {
   payload.WithString("availabilityZoneId", m_availabilityZoneId);

  }

  if(m_clientSubnetCidrHasBeenSet)
  {
   payload.WithString("clientSubnetCidr", m_clientSubnetCidr);

  }

  if(m_backupSubnetCidrHasBeenSet)
  {
   payload.WithString("backupSubnetCidr", m_backupSubnetCidr);

  }

  if(m_customDomainNameHasBeenSet)
  {
   payload.WithString("customDomainName", m_customDomainName);

  }

  if(m_defaultDnsPrefixHasBeenSet)
  {
   payload.WithString("defaultDnsPrefix", m_defaultDnsPrefix);

  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  if(m_s3AccessHasBeenSet)
  {
   payload.WithString("s3Access", AccessMapper::GetNameForAccess(m_s3Access));
  }

  if(m_zeroEtlAccessHasBeenSet)
  {
   payload.WithString("zeroEtlAccess", AccessMapper::GetNameForAccess(m_zeroEtlAccess));
  }

  if(m_s3PolicyDocumentHasBeenSet)
  {
   payload.WithString("s3PolicyDocument", m_s3PolicyDocument);

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

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateOdbNetworkRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Odb.CreateOdbNetwork"));
  return headers;

}




