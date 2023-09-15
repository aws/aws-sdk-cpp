/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/omics/model/DeleteShareRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Omics::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteShareRequest::DeleteShareRequest() : 
    m_shareIdHasBeenSet(false)
{
}

Aws::String DeleteShareRequest::SerializePayload() const
{
  return {};
}




