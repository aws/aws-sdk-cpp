﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/supplychain/model/GetInstanceRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SupplyChain::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetInstanceRequest::GetInstanceRequest() : 
    m_instanceIdHasBeenSet(false)
{
}

Aws::String GetInstanceRequest::SerializePayload() const
{
  return {};
}




