/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces-thin-client/model/UpdateSoftwareSetRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::WorkSpacesThinClient::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateSoftwareSetRequest::UpdateSoftwareSetRequest() : 
    m_idHasBeenSet(false),
    m_validationStatus(SoftwareSetValidationStatus::NOT_SET),
    m_validationStatusHasBeenSet(false)
{
}

Aws::String UpdateSoftwareSetRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_validationStatusHasBeenSet)
  {
   payload.WithString("validationStatus", SoftwareSetValidationStatusMapper::GetNameForSoftwareSetValidationStatus(m_validationStatus));
  }

  return payload.View().WriteReadable();
}




