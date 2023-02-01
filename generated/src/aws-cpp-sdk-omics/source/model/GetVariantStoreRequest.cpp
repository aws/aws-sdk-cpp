/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/omics/model/GetVariantStoreRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Omics::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetVariantStoreRequest::GetVariantStoreRequest() : 
    m_nameHasBeenSet(false)
{
}

Aws::String GetVariantStoreRequest::SerializePayload() const
{
  return {};
}




