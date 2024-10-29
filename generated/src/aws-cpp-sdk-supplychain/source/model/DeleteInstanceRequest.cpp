﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/supplychain/model/DeleteInstanceRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SupplyChain::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteInstanceRequest::DeleteInstanceRequest() : 
    m_instanceIdHasBeenSet(false)
{
}

Aws::String DeleteInstanceRequest::SerializePayload() const
{
  return {};
}




