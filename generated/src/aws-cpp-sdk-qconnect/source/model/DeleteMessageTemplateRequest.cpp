/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qconnect/model/DeleteMessageTemplateRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::QConnect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteMessageTemplateRequest::DeleteMessageTemplateRequest() : 
    m_knowledgeBaseIdHasBeenSet(false),
    m_messageTemplateIdHasBeenSet(false)
{
}

Aws::String DeleteMessageTemplateRequest::SerializePayload() const
{
  return {};
}




