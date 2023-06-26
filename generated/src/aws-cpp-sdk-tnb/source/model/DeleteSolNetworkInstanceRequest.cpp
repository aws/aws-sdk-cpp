/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/tnb/model/DeleteSolNetworkInstanceRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::tnb::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteSolNetworkInstanceRequest::DeleteSolNetworkInstanceRequest() : 
    m_nsInstanceIdHasBeenSet(false)
{
}

Aws::String DeleteSolNetworkInstanceRequest::SerializePayload() const
{
  return {};
}




