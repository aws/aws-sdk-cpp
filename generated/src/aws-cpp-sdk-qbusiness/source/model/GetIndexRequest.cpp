/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/model/GetIndexRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::QBusiness::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetIndexRequest::GetIndexRequest() : 
    m_applicationIdHasBeenSet(false),
    m_indexIdHasBeenSet(false)
{
}

Aws::String GetIndexRequest::SerializePayload() const
{
  return {};
}




