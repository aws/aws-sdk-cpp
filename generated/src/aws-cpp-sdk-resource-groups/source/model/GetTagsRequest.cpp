/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resource-groups/model/GetTagsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ResourceGroups::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetTagsRequest::GetTagsRequest() : 
    m_arnHasBeenSet(false)
{
}

Aws::String GetTagsRequest::SerializePayload() const
{
  return {};
}




