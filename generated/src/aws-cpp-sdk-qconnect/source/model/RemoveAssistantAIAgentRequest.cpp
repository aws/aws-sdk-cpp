/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qconnect/model/RemoveAssistantAIAgentRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::QConnect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

Aws::String RemoveAssistantAIAgentRequest::SerializePayload() const
{
  return {};
}

void RemoveAssistantAIAgentRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_aiAgentTypeHasBeenSet)
    {
      ss << AIAgentTypeMapper::GetNameForAIAgentType(m_aiAgentType);
      uri.AddQueryStringParameter("aiAgentType", ss.str());
      ss.str("");
    }

}



