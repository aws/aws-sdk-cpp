/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces-web/model/DeleteTrustStoreRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::WorkSpacesWeb::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteTrustStoreRequest::DeleteTrustStoreRequest() : 
    m_trustStoreArnHasBeenSet(false)
{
}

Aws::String DeleteTrustStoreRequest::SerializePayload() const
{
  return {};
}




