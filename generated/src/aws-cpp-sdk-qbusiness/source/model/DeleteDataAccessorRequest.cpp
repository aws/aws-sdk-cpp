﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/model/DeleteDataAccessorRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::QBusiness::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteDataAccessorRequest::DeleteDataAccessorRequest() : 
    m_applicationIdHasBeenSet(false),
    m_dataAccessorIdHasBeenSet(false)
{
}

Aws::String DeleteDataAccessorRequest::SerializePayload() const
{
  return {};
}




