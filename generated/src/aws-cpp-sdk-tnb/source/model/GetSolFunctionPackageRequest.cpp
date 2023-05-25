/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/tnb/model/GetSolFunctionPackageRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::tnb::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetSolFunctionPackageRequest::GetSolFunctionPackageRequest() : 
    m_vnfPkgIdHasBeenSet(false)
{
}

Aws::String GetSolFunctionPackageRequest::SerializePayload() const
{
  return {};
}




