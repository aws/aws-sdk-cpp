/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wisdom/model/RemoveKnowledgeBaseTemplateUriRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ConnectWisdomService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

RemoveKnowledgeBaseTemplateUriRequest::RemoveKnowledgeBaseTemplateUriRequest() : 
    m_knowledgeBaseIdHasBeenSet(false)
{
}

Aws::String RemoveKnowledgeBaseTemplateUriRequest::SerializePayload() const
{
  return {};
}




