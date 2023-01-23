/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sesv2/model/GetDomainDeliverabilityCampaignRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SESV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetDomainDeliverabilityCampaignRequest::GetDomainDeliverabilityCampaignRequest() : 
    m_campaignIdHasBeenSet(false)
{
}

Aws::String GetDomainDeliverabilityCampaignRequest::SerializePayload() const
{
  return {};
}




