/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qconnect/model/DeleteAIPromptVersionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::QConnect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteAIPromptVersionRequest::DeleteAIPromptVersionRequest() : 
    m_aiPromptIdHasBeenSet(false),
    m_assistantIdHasBeenSet(false),
    m_versionNumber(0),
    m_versionNumberHasBeenSet(false)
{
}

Aws::String DeleteAIPromptVersionRequest::SerializePayload() const
{
  return {};
}




