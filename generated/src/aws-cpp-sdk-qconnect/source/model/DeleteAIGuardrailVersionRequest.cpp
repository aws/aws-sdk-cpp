/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qconnect/model/DeleteAIGuardrailVersionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::QConnect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteAIGuardrailVersionRequest::DeleteAIGuardrailVersionRequest() : 
    m_aiGuardrailIdHasBeenSet(false),
    m_assistantIdHasBeenSet(false),
    m_versionNumber(0),
    m_versionNumberHasBeenSet(false)
{
}

Aws::String DeleteAIGuardrailVersionRequest::SerializePayload() const
{
  return {};
}




