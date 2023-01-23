/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qldb/model/GetDigestRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::QLDB::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetDigestRequest::GetDigestRequest() : 
    m_nameHasBeenSet(false)
{
}

Aws::String GetDigestRequest::SerializePayload() const
{
  return {};
}




