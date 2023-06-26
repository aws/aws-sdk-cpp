/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/tnb/model/UpdateSolFunctionPackageRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::tnb::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateSolFunctionPackageRequest::UpdateSolFunctionPackageRequest() : 
    m_operationalState(OperationalState::NOT_SET),
    m_operationalStateHasBeenSet(false),
    m_vnfPkgIdHasBeenSet(false)
{
}

Aws::String UpdateSolFunctionPackageRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_operationalStateHasBeenSet)
  {
   payload.WithString("operationalState", OperationalStateMapper::GetNameForOperationalState(m_operationalState));
  }

  return payload.View().WriteReadable();
}




