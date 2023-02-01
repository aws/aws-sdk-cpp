/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces-web/model/DisassociateTrustStoreRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::WorkSpacesWeb::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DisassociateTrustStoreRequest::DisassociateTrustStoreRequest() : 
    m_portalArnHasBeenSet(false)
{
}

Aws::String DisassociateTrustStoreRequest::SerializePayload() const
{
  return {};
}




