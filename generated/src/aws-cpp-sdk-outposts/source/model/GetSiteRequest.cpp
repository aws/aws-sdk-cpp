/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/outposts/model/GetSiteRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Outposts::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetSiteRequest::GetSiteRequest() : 
    m_siteIdHasBeenSet(false)
{
}

Aws::String GetSiteRequest::SerializePayload() const
{
  return {};
}




