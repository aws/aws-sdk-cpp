/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/GetFindingAggregatorRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SecurityHub::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetFindingAggregatorRequest::GetFindingAggregatorRequest() : 
    m_findingAggregatorArnHasBeenSet(false)
{
}

Aws::String GetFindingAggregatorRequest::SerializePayload() const
{
  return {};
}




