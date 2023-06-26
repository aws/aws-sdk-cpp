/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/vpc-lattice/model/UpdateListenerRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::VPCLattice::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateListenerRequest::UpdateListenerRequest() : 
    m_defaultActionHasBeenSet(false),
    m_listenerIdentifierHasBeenSet(false),
    m_serviceIdentifierHasBeenSet(false)
{
}

Aws::String UpdateListenerRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_defaultActionHasBeenSet)
  {
   payload.WithObject("defaultAction", m_defaultAction.Jsonize());

  }

  return payload.View().WriteReadable();
}




