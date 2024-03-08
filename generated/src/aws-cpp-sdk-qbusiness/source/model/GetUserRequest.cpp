/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/model/GetUserRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::QBusiness::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetUserRequest::GetUserRequest() : 
    m_applicationIdHasBeenSet(false),
    m_userIdHasBeenSet(false)
{
}

Aws::String GetUserRequest::SerializePayload() const
{
  return {};
}




