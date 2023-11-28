/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qconnect/model/DeleteImportJobRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::QConnect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteImportJobRequest::DeleteImportJobRequest() : 
    m_importJobIdHasBeenSet(false),
    m_knowledgeBaseIdHasBeenSet(false)
{
}

Aws::String DeleteImportJobRequest::SerializePayload() const
{
  return {};
}




