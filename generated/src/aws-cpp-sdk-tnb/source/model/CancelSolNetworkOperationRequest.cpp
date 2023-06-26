/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/tnb/model/CancelSolNetworkOperationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::tnb::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CancelSolNetworkOperationRequest::CancelSolNetworkOperationRequest() : 
    m_nsLcmOpOccIdHasBeenSet(false)
{
}

Aws::String CancelSolNetworkOperationRequest::SerializePayload() const
{
  return {};
}




