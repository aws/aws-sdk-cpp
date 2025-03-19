/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pca-connector-ad/model/CreateTemplateGroupAccessControlEntryRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::PcaConnectorAd::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateTemplateGroupAccessControlEntryRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_accessRightsHasBeenSet)
  {
   payload.WithObject("AccessRights", m_accessRights.Jsonize());

  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("ClientToken", m_clientToken);

  }

  if(m_groupDisplayNameHasBeenSet)
  {
   payload.WithString("GroupDisplayName", m_groupDisplayName);

  }

  if(m_groupSecurityIdentifierHasBeenSet)
  {
   payload.WithString("GroupSecurityIdentifier", m_groupSecurityIdentifier);

  }

  return payload.View().WriteReadable();
}




