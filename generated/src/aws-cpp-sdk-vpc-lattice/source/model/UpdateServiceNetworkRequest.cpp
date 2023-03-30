/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/vpc-lattice/model/UpdateServiceNetworkRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::VPCLattice::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateServiceNetworkRequest::UpdateServiceNetworkRequest() : 
    m_authType(AuthType::NOT_SET),
    m_authTypeHasBeenSet(false),
    m_serviceNetworkIdentifierHasBeenSet(false)
{
}

Aws::String UpdateServiceNetworkRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_authTypeHasBeenSet)
  {
   payload.WithString("authType", AuthTypeMapper::GetNameForAuthType(m_authType));
  }

  return payload.View().WriteReadable();
}




