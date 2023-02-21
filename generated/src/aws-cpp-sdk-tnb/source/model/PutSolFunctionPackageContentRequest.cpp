/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/tnb/model/PutSolFunctionPackageContentRequest.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/HashingUtils.h>

#include <utility>

using namespace Aws::tnb::Model;
using namespace Aws::Utils::Stream;
using namespace Aws::Utils;
using namespace Aws;

PutSolFunctionPackageContentRequest::PutSolFunctionPackageContentRequest() : 
    m_vnfPkgIdHasBeenSet(false)
{
}



