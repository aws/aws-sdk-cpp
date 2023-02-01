/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/managedblockchain/model/DeleteAccessorRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ManagedBlockchain::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteAccessorRequest::DeleteAccessorRequest() : 
    m_accessorIdHasBeenSet(false)
{
}

Aws::String DeleteAccessorRequest::SerializePayload() const
{
  return {};
}




