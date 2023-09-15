/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sesv2/model/CancelExportJobRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SESV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CancelExportJobRequest::CancelExportJobRequest() : 
    m_jobIdHasBeenSet(false)
{
}

Aws::String CancelExportJobRequest::SerializePayload() const
{
  return {};
}




