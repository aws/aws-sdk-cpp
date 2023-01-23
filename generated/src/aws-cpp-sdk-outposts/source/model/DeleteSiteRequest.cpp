/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/outposts/model/DeleteSiteRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Outposts::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteSiteRequest::DeleteSiteRequest() : 
    m_siteIdHasBeenSet(false)
{
}

Aws::String DeleteSiteRequest::SerializePayload() const
{
  return {};
}




