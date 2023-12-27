/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/neptunedata/model/CancelGremlinQueryRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::neptunedata::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CancelGremlinQueryRequest::CancelGremlinQueryRequest() : 
    m_queryIdHasBeenSet(false)
{
}

Aws::String CancelGremlinQueryRequest::SerializePayload() const
{
  return {};
}




