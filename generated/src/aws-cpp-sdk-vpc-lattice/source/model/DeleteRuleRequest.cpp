/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/vpc-lattice/model/DeleteRuleRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::VPCLattice::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteRuleRequest::DeleteRuleRequest() : 
    m_listenerIdentifierHasBeenSet(false),
    m_ruleIdentifierHasBeenSet(false),
    m_serviceIdentifierHasBeenSet(false)
{
}

Aws::String DeleteRuleRequest::SerializePayload() const
{
  return {};
}




