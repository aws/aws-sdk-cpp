/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mobile/model/ExportProjectRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Mobile::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ExportProjectRequest::ExportProjectRequest() : 
    m_projectIdHasBeenSet(false)
{
}

Aws::String ExportProjectRequest::SerializePayload() const
{
  return {};
}




