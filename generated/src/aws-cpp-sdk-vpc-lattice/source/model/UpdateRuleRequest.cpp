/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/vpc-lattice/model/UpdateRuleRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::VPCLattice::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateRuleRequest::UpdateRuleRequest() : 
    m_actionHasBeenSet(false),
    m_listenerIdentifierHasBeenSet(false),
    m_matchHasBeenSet(false),
    m_priority(0),
    m_priorityHasBeenSet(false),
    m_ruleIdentifierHasBeenSet(false),
    m_serviceIdentifierHasBeenSet(false)
{
}

Aws::String UpdateRuleRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_actionHasBeenSet)
  {
   payload.WithObject("action", m_action.Jsonize());

  }

  if(m_matchHasBeenSet)
  {
   payload.WithObject("match", m_match.Jsonize());

  }

  if(m_priorityHasBeenSet)
  {
   payload.WithInteger("priority", m_priority);

  }

  return payload.View().WriteReadable();
}




