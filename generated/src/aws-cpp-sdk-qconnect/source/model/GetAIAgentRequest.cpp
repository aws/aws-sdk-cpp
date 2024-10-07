/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qconnect/model/GetAIAgentRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::QConnect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetAIAgentRequest::GetAIAgentRequest() : 
    m_aiAgentIdHasBeenSet(false),
    m_assistantIdHasBeenSet(false)
{
}

Aws::String GetAIAgentRequest::SerializePayload() const
{
  return {};
}




