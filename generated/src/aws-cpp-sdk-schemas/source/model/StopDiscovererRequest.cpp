/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/schemas/model/StopDiscovererRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Schemas::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StopDiscovererRequest::StopDiscovererRequest() : 
    m_discovererIdHasBeenSet(false)
{
}

Aws::String StopDiscovererRequest::SerializePayload() const
{
  return {};
}




