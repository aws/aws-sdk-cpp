/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/GetInsightResultsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SecurityHub::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetInsightResultsRequest::GetInsightResultsRequest() : 
    m_insightArnHasBeenSet(false)
{
}

Aws::String GetInsightResultsRequest::SerializePayload() const
{
  return {};
}




