/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rolesanywhere/model/DeleteTrustAnchorRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::RolesAnywhere::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteTrustAnchorRequest::DeleteTrustAnchorRequest() : 
    m_trustAnchorIdHasBeenSet(false)
{
}

Aws::String DeleteTrustAnchorRequest::SerializePayload() const
{
  return {};
}




