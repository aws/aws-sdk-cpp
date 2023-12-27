/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pca-connector-ad/model/UpdateTemplateGroupAccessControlEntryRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::PcaConnectorAd::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateTemplateGroupAccessControlEntryRequest::UpdateTemplateGroupAccessControlEntryRequest() : 
    m_accessRightsHasBeenSet(false),
    m_groupDisplayNameHasBeenSet(false),
    m_groupSecurityIdentifierHasBeenSet(false),
    m_templateArnHasBeenSet(false)
{
}

Aws::String UpdateTemplateGroupAccessControlEntryRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_accessRightsHasBeenSet)
  {
   payload.WithObject("AccessRights", m_accessRights.Jsonize());

  }

  if(m_groupDisplayNameHasBeenSet)
  {
   payload.WithString("GroupDisplayName", m_groupDisplayName);

  }

  return payload.View().WriteReadable();
}




