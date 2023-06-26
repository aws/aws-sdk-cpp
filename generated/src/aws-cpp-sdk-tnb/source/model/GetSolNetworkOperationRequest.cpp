/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/tnb/model/GetSolNetworkOperationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::tnb::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetSolNetworkOperationRequest::GetSolNetworkOperationRequest() : 
    m_nsLcmOpOccIdHasBeenSet(false)
{
}

Aws::String GetSolNetworkOperationRequest::SerializePayload() const
{
  return {};
}




