/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wellarchitected/model/UpdateReviewTemplateRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::WellArchitected::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateReviewTemplateRequest::UpdateReviewTemplateRequest() : 
    m_templateArnHasBeenSet(false),
    m_templateNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_notesHasBeenSet(false),
    m_lensesToAssociateHasBeenSet(false),
    m_lensesToDisassociateHasBeenSet(false)
{
}

Aws::String UpdateReviewTemplateRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_templateNameHasBeenSet)
  {
   payload.WithString("TemplateName", m_templateName);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_notesHasBeenSet)
  {
   payload.WithString("Notes", m_notes);

  }

  if(m_lensesToAssociateHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> lensesToAssociateJsonList(m_lensesToAssociate.size());
   for(unsigned lensesToAssociateIndex = 0; lensesToAssociateIndex < lensesToAssociateJsonList.GetLength(); ++lensesToAssociateIndex)
   {
     lensesToAssociateJsonList[lensesToAssociateIndex].AsString(m_lensesToAssociate[lensesToAssociateIndex]);
   }
   payload.WithArray("LensesToAssociate", std::move(lensesToAssociateJsonList));

  }

  if(m_lensesToDisassociateHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> lensesToDisassociateJsonList(m_lensesToDisassociate.size());
   for(unsigned lensesToDisassociateIndex = 0; lensesToDisassociateIndex < lensesToDisassociateJsonList.GetLength(); ++lensesToDisassociateIndex)
   {
     lensesToDisassociateJsonList[lensesToDisassociateIndex].AsString(m_lensesToDisassociate[lensesToDisassociateIndex]);
   }
   payload.WithArray("LensesToDisassociate", std::move(lensesToDisassociateJsonList));

  }

  return payload.View().WriteReadable();
}




