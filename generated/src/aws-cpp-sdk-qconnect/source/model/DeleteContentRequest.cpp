/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qconnect/model/DeleteContentRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::QConnect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteContentRequest::DeleteContentRequest() : 
    m_contentIdHasBeenSet(false),
    m_knowledgeBaseIdHasBeenSet(false)
{
}

Aws::String DeleteContentRequest::SerializePayload() const
{
  return {};
}




