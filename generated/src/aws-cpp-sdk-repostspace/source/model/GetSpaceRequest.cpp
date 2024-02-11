/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/repostspace/model/GetSpaceRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::repostspace::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetSpaceRequest::GetSpaceRequest() : 
    m_spaceIdHasBeenSet(false)
{
}

Aws::String GetSpaceRequest::SerializePayload() const
{
  return {};
}




