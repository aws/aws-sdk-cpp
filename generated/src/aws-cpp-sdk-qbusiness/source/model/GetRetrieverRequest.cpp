/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/model/GetRetrieverRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::QBusiness::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetRetrieverRequest::GetRetrieverRequest() : 
    m_applicationIdHasBeenSet(false),
    m_retrieverIdHasBeenSet(false)
{
}

Aws::String GetRetrieverRequest::SerializePayload() const
{
  return {};
}




