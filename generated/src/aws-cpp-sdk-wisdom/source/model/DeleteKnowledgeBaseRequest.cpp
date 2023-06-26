﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wisdom/model/DeleteKnowledgeBaseRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ConnectWisdomService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteKnowledgeBaseRequest::DeleteKnowledgeBaseRequest() : 
    m_knowledgeBaseIdHasBeenSet(false)
{
}

Aws::String DeleteKnowledgeBaseRequest::SerializePayload() const
{
  return {};
}




