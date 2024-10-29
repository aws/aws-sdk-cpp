﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediapackagev2/model/CancelHarvestJobRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::mediapackagev2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CancelHarvestJobRequest::CancelHarvestJobRequest() : 
    m_channelGroupNameHasBeenSet(false),
    m_channelNameHasBeenSet(false),
    m_originEndpointNameHasBeenSet(false),
    m_harvestJobNameHasBeenSet(false),
    m_eTagHasBeenSet(false)
{
}

Aws::String CancelHarvestJobRequest::SerializePayload() const
{
  return {};
}

Aws::Http::HeaderValueCollection CancelHarvestJobRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  Aws::StringStream ss;
  if(m_eTagHasBeenSet)
  {
    ss << m_eTag;
    headers.emplace("x-amzn-update-if-match",  ss.str());
    ss.str("");
  }

  return headers;

}




