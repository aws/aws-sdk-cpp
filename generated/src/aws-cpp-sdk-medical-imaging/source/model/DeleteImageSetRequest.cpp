/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medical-imaging/model/DeleteImageSetRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MedicalImaging::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteImageSetRequest::DeleteImageSetRequest() : 
    m_datastoreIdHasBeenSet(false),
    m_imageSetIdHasBeenSet(false)
{
}

Aws::String DeleteImageSetRequest::SerializePayload() const
{
  return {};
}




