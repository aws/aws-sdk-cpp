/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qconnect/model/CreateAIGuardrailVersionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::QConnect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateAIGuardrailVersionRequest::CreateAIGuardrailVersionRequest() : 
    m_aiGuardrailIdHasBeenSet(false),
    m_assistantIdHasBeenSet(false),
    m_clientToken(Aws::Utils::UUID::PseudoRandomUUID()),
    m_clientTokenHasBeenSet(true),
    m_modifiedTimeHasBeenSet(false)
{
}

Aws::String CreateAIGuardrailVersionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  if(m_modifiedTimeHasBeenSet)
  {
   payload.WithDouble("modifiedTime", m_modifiedTime.SecondsWithMSPrecision());
  }

  return payload.View().WriteReadable();
}




