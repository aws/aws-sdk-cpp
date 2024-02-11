/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/neptunedata/model/GetOpenCypherQueryStatusRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::neptunedata::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetOpenCypherQueryStatusRequest::GetOpenCypherQueryStatusRequest() : 
    m_queryIdHasBeenSet(false)
{
}

Aws::String GetOpenCypherQueryStatusRequest::SerializePayload() const
{
  return {};
}




