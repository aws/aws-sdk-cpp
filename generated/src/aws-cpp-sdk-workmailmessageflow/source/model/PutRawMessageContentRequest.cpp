/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workmailmessageflow/model/PutRawMessageContentRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::WorkMailMessageFlow::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PutRawMessageContentRequest::PutRawMessageContentRequest() : 
    m_messageIdHasBeenSet(false),
    m_contentHasBeenSet(false)
{
}

Aws::String PutRawMessageContentRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_contentHasBeenSet)
  {
   payload.WithObject("content", m_content.Jsonize());

  }

  return payload.View().WriteReadable();
}




