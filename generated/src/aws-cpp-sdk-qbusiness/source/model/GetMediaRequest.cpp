/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/model/GetMediaRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::QBusiness::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetMediaRequest::GetMediaRequest() : 
    m_applicationIdHasBeenSet(false),
    m_conversationIdHasBeenSet(false),
    m_messageIdHasBeenSet(false),
    m_mediaIdHasBeenSet(false)
{
}

Aws::String GetMediaRequest::SerializePayload() const
{
  return {};
}




