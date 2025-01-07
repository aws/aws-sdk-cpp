﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opensearch/model/DeleteDirectQueryDataSourceRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::OpenSearchService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteDirectQueryDataSourceRequest::DeleteDirectQueryDataSourceRequest() : 
    m_dataSourceNameHasBeenSet(false)
{
}

Aws::String DeleteDirectQueryDataSourceRequest::SerializePayload() const
{
  return {};
}




