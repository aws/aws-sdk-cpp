﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opensearch/model/GetDirectQueryDataSourceRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::OpenSearchService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetDirectQueryDataSourceRequest::GetDirectQueryDataSourceRequest() : 
    m_dataSourceNameHasBeenSet(false)
{
}

Aws::String GetDirectQueryDataSourceRequest::SerializePayload() const
{
  return {};
}




