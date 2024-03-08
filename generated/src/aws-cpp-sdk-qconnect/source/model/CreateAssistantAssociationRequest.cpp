/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qconnect/model/CreateAssistantAssociationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::QConnect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateAssistantAssociationRequest::CreateAssistantAssociationRequest() : 
    m_assistantIdHasBeenSet(false),
    m_associationHasBeenSet(false),
    m_associationType(AssociationType::NOT_SET),
    m_associationTypeHasBeenSet(false),
    m_clientToken(Aws::Utils::UUID::PseudoRandomUUID()),
    m_clientTokenHasBeenSet(true),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateAssistantAssociationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_associationHasBeenSet)
  {
   payload.WithObject("association", m_association.Jsonize());

  }

  if(m_associationTypeHasBeenSet)
  {
   payload.WithString("associationType", AssociationTypeMapper::GetNameForAssociationType(m_associationType));
  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

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




