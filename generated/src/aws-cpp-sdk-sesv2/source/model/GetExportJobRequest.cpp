/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sesv2/model/GetExportJobRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SESV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetExportJobRequest::GetExportJobRequest() : 
    m_jobIdHasBeenSet(false)
{
}

Aws::String GetExportJobRequest::SerializePayload() const
{
  return {};
}




