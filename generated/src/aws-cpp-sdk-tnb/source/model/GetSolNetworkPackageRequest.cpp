/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/tnb/model/GetSolNetworkPackageRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::tnb::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetSolNetworkPackageRequest::GetSolNetworkPackageRequest() : 
    m_nsdInfoIdHasBeenSet(false)
{
}

Aws::String GetSolNetworkPackageRequest::SerializePayload() const
{
  return {};
}




