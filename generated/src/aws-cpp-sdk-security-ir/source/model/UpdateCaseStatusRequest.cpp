/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/security-ir/model/UpdateCaseStatusRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SecurityIR::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateCaseStatusRequest::UpdateCaseStatusRequest() : 
    m_caseIdHasBeenSet(false),
    m_caseStatus(SelfManagedCaseStatus::NOT_SET),
    m_caseStatusHasBeenSet(false)
{
}

Aws::String UpdateCaseStatusRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_caseStatusHasBeenSet)
  {
   payload.WithString("caseStatus", SelfManagedCaseStatusMapper::GetNameForSelfManagedCaseStatus(m_caseStatus));
  }

  return payload.View().WriteReadable();
}




