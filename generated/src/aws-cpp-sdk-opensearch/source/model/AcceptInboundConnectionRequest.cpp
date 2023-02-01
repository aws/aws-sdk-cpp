/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opensearch/model/AcceptInboundConnectionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::OpenSearchService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

AcceptInboundConnectionRequest::AcceptInboundConnectionRequest() : 
    m_connectionIdHasBeenSet(false)
{
}

Aws::String AcceptInboundConnectionRequest::SerializePayload() const
{
  return {};
}




