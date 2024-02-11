/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qconnect/model/PutFeedbackRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::QConnect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PutFeedbackRequest::PutFeedbackRequest() : 
    m_assistantIdHasBeenSet(false),
    m_contentFeedbackHasBeenSet(false),
    m_targetIdHasBeenSet(false),
    m_targetType(TargetType::NOT_SET),
    m_targetTypeHasBeenSet(false)
{
}

Aws::String PutFeedbackRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_contentFeedbackHasBeenSet)
  {
   payload.WithObject("contentFeedback", m_contentFeedback.Jsonize());

  }

  if(m_targetIdHasBeenSet)
  {
   payload.WithString("targetId", m_targetId);

  }

  if(m_targetTypeHasBeenSet)
  {
   payload.WithString("targetType", TargetTypeMapper::GetNameForTargetType(m_targetType));
  }

  return payload.View().WriteReadable();
}




