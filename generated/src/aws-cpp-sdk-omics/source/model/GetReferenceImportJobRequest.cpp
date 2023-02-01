/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/omics/model/GetReferenceImportJobRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Omics::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetReferenceImportJobRequest::GetReferenceImportJobRequest() : 
    m_idHasBeenSet(false),
    m_referenceStoreIdHasBeenSet(false)
{
}

Aws::String GetReferenceImportJobRequest::SerializePayload() const
{
  return {};
}




