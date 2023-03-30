/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/vpc-lattice/model/GetListenerRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::VPCLattice::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetListenerRequest::GetListenerRequest() : 
    m_listenerIdentifierHasBeenSet(false),
    m_serviceIdentifierHasBeenSet(false)
{
}

Aws::String GetListenerRequest::SerializePayload() const
{
  return {};
}




