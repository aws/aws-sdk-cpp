/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/trustedadvisor/model/GetRecommendationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::TrustedAdvisor::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetRecommendationRequest::GetRecommendationRequest() : 
    m_recommendationIdentifierHasBeenSet(false)
{
}

Aws::String GetRecommendationRequest::SerializePayload() const
{
  return {};
}




