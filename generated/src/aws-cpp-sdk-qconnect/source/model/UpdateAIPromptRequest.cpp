/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qconnect/model/UpdateAIPromptRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::QConnect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateAIPromptRequest::UpdateAIPromptRequest() : 
    m_aiPromptIdHasBeenSet(false),
    m_assistantIdHasBeenSet(false),
    m_clientToken(Aws::Utils::UUID::PseudoRandomUUID()),
    m_clientTokenHasBeenSet(true),
    m_descriptionHasBeenSet(false),
    m_templateConfigurationHasBeenSet(false),
    m_visibilityStatus(VisibilityStatus::NOT_SET),
    m_visibilityStatusHasBeenSet(false)
{
}

Aws::String UpdateAIPromptRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_templateConfigurationHasBeenSet)
  {
   payload.WithObject("templateConfiguration", m_templateConfiguration.Jsonize());

  }

  if(m_visibilityStatusHasBeenSet)
  {
   payload.WithString("visibilityStatus", VisibilityStatusMapper::GetNameForVisibilityStatus(m_visibilityStatus));
  }

  return payload.View().WriteReadable();
}




