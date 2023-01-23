/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wisdom/model/UpdateKnowledgeBaseTemplateUriRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ConnectWisdomService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateKnowledgeBaseTemplateUriRequest::UpdateKnowledgeBaseTemplateUriRequest() : 
    m_knowledgeBaseIdHasBeenSet(false),
    m_templateUriHasBeenSet(false)
{
}

Aws::String UpdateKnowledgeBaseTemplateUriRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_templateUriHasBeenSet)
  {
   payload.WithString("templateUri", m_templateUri);

  }

  return payload.View().WriteReadable();
}




