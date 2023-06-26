﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/organizations/model/EnableAllFeaturesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Organizations::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

EnableAllFeaturesRequest::EnableAllFeaturesRequest()
{
}

Aws::String EnableAllFeaturesRequest::SerializePayload() const
{
  return "{}";
}

Aws::Http::HeaderValueCollection EnableAllFeaturesRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSOrganizationsV20161128.EnableAllFeatures"));
  return headers;

}




