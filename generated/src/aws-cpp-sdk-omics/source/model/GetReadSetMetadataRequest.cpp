/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/omics/model/GetReadSetMetadataRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Omics::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetReadSetMetadataRequest::GetReadSetMetadataRequest() : 
    m_idHasBeenSet(false),
    m_sequenceStoreIdHasBeenSet(false)
{
}

Aws::String GetReadSetMetadataRequest::SerializePayload() const
{
  return {};
}




