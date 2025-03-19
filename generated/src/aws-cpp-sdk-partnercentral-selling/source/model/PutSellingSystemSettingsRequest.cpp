/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/partnercentral-selling/model/PutSellingSystemSettingsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::PartnerCentralSelling::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String PutSellingSystemSettingsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_catalogHasBeenSet)
  {
   payload.WithString("Catalog", m_catalog);

  }

  if(m_resourceSnapshotJobRoleIdentifierHasBeenSet)
  {
   payload.WithString("ResourceSnapshotJobRoleIdentifier", m_resourceSnapshotJobRoleIdentifier);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection PutSellingSystemSettingsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSPartnerCentralSelling.PutSellingSystemSettings"));
  return headers;

}




