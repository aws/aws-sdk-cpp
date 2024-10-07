/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qconnect/model/UpdateAIAgentRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::QConnect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateAIAgentRequest::UpdateAIAgentRequest() : 
    m_aiAgentIdHasBeenSet(false),
    m_assistantIdHasBeenSet(false),
    m_clientToken(Aws::Utils::UUID::PseudoRandomUUID()),
    m_clientTokenHasBeenSet(true),
    m_configurationHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_visibilityStatus(VisibilityStatus::NOT_SET),
    m_visibilityStatusHasBeenSet(false)
{
}

Aws::String UpdateAIAgentRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  if(m_configurationHasBeenSet)
  {
   payload.WithObject("configuration", m_configuration.Jsonize());

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_visibilityStatusHasBeenSet)
  {
   payload.WithString("visibilityStatus", VisibilityStatusMapper::GetNameForVisibilityStatus(m_visibilityStatus));
  }

  return payload.View().WriteReadable();
}




