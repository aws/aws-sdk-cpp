/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mpa/model/UpdateApprovalTeamRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MPA::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateApprovalTeamRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_approvalStrategyHasBeenSet)
  {
   payload.WithObject("ApprovalStrategy", m_approvalStrategy.Jsonize());

  }

  if(m_approversHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> approversJsonList(m_approvers.size());
   for(unsigned approversIndex = 0; approversIndex < approversJsonList.GetLength(); ++approversIndex)
   {
     approversJsonList[approversIndex].AsObject(m_approvers[approversIndex].Jsonize());
   }
   payload.WithArray("Approvers", std::move(approversJsonList));

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  return payload.View().WriteReadable();
}




