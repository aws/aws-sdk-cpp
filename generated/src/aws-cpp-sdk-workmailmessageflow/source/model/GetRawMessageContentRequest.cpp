/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workmailmessageflow/model/GetRawMessageContentRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::WorkMailMessageFlow::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetRawMessageContentRequest::GetRawMessageContentRequest() : 
    m_messageIdHasBeenSet(false)
{
}

Aws::String GetRawMessageContentRequest::SerializePayload() const
{
  return {};
}




