/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/vpc-lattice/model/UpdateAccessLogSubscriptionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::VPCLattice::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateAccessLogSubscriptionRequest::UpdateAccessLogSubscriptionRequest() : 
    m_accessLogSubscriptionIdentifierHasBeenSet(false),
    m_destinationArnHasBeenSet(false)
{
}

Aws::String UpdateAccessLogSubscriptionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_destinationArnHasBeenSet)
  {
   payload.WithString("destinationArn", m_destinationArn);

  }

  return payload.View().WriteReadable();
}




