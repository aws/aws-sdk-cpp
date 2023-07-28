/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medical-imaging/model/GetDICOMImportJobRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MedicalImaging::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetDICOMImportJobRequest::GetDICOMImportJobRequest() : 
    m_datastoreIdHasBeenSet(false),
    m_jobIdHasBeenSet(false)
{
}

Aws::String GetDICOMImportJobRequest::SerializePayload() const
{
  return {};
}




