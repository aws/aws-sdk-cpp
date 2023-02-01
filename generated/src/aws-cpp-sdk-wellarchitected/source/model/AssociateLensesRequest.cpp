/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wellarchitected/model/AssociateLensesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::WellArchitected::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

AssociateLensesRequest::AssociateLensesRequest() : 
    m_workloadIdHasBeenSet(false),
    m_lensAliasesHasBeenSet(false)
{
}

Aws::String AssociateLensesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_lensAliasesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> lensAliasesJsonList(m_lensAliases.size());
   for(unsigned lensAliasesIndex = 0; lensAliasesIndex < lensAliasesJsonList.GetLength(); ++lensAliasesIndex)
   {
     lensAliasesJsonList[lensAliasesIndex].AsString(m_lensAliases[lensAliasesIndex]);
   }
   payload.WithArray("LensAliases", std::move(lensAliasesJsonList));

  }

  return payload.View().WriteReadable();
}




