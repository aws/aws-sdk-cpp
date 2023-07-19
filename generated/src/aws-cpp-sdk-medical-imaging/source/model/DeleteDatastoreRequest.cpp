/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medical-imaging/model/DeleteDatastoreRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MedicalImaging::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteDatastoreRequest::DeleteDatastoreRequest() : 
    m_datastoreIdHasBeenSet(false)
{
}

Aws::String DeleteDatastoreRequest::SerializePayload() const
{
  return {};
}




