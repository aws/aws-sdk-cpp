/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/vpc-lattice/model/UpdateServiceRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::VPCLattice::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateServiceRequest::UpdateServiceRequest() : 
    m_authType(AuthType::NOT_SET),
    m_authTypeHasBeenSet(false),
    m_certificateArnHasBeenSet(false),
    m_serviceIdentifierHasBeenSet(false)
{
}

Aws::String UpdateServiceRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_authTypeHasBeenSet)
  {
   payload.WithString("authType", AuthTypeMapper::GetNameForAuthType(m_authType));
  }

  if(m_certificateArnHasBeenSet)
  {
   payload.WithString("certificateArn", m_certificateArn);

  }

  return payload.View().WriteReadable();
}




