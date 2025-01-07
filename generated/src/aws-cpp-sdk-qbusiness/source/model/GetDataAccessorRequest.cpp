﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/model/GetDataAccessorRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::QBusiness::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetDataAccessorRequest::GetDataAccessorRequest() : 
    m_applicationIdHasBeenSet(false),
    m_dataAccessorIdHasBeenSet(false)
{
}

Aws::String GetDataAccessorRequest::SerializePayload() const
{
  return {};
}




