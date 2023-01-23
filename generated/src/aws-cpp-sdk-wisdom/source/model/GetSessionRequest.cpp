/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wisdom/model/GetSessionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ConnectWisdomService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetSessionRequest::GetSessionRequest() : 
    m_assistantIdHasBeenSet(false),
    m_sessionIdHasBeenSet(false)
{
}

Aws::String GetSessionRequest::SerializePayload() const
{
  return {};
}




