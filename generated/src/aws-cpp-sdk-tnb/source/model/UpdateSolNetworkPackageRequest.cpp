/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/tnb/model/UpdateSolNetworkPackageRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::tnb::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateSolNetworkPackageRequest::UpdateSolNetworkPackageRequest() : 
    m_nsdInfoIdHasBeenSet(false),
    m_nsdOperationalState(NsdOperationalState::NOT_SET),
    m_nsdOperationalStateHasBeenSet(false)
{
}

Aws::String UpdateSolNetworkPackageRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nsdOperationalStateHasBeenSet)
  {
   payload.WithString("nsdOperationalState", NsdOperationalStateMapper::GetNameForNsdOperationalState(m_nsdOperationalState));
  }

  return payload.View().WriteReadable();
}




