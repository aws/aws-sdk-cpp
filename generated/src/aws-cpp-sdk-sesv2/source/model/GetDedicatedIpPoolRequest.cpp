/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sesv2/model/GetDedicatedIpPoolRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SESV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetDedicatedIpPoolRequest::GetDedicatedIpPoolRequest() : 
    m_poolNameHasBeenSet(false)
{
}

Aws::String GetDedicatedIpPoolRequest::SerializePayload() const
{
  return {};
}




