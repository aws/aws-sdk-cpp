/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/managedblockchain/model/GetAccessorRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ManagedBlockchain::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetAccessorRequest::GetAccessorRequest() : 
    m_accessorIdHasBeenSet(false)
{
}

Aws::String GetAccessorRequest::SerializePayload() const
{
  return {};
}




