/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wellarchitected/model/UpgradeReviewTemplateLensReviewRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::WellArchitected::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpgradeReviewTemplateLensReviewRequest::UpgradeReviewTemplateLensReviewRequest() : 
    m_templateArnHasBeenSet(false),
    m_lensAliasHasBeenSet(false),
    m_clientRequestTokenHasBeenSet(false)
{
}

Aws::String UpgradeReviewTemplateLensReviewRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_clientRequestTokenHasBeenSet)
  {
   payload.WithString("ClientRequestToken", m_clientRequestToken);

  }

  return payload.View().WriteReadable();
}




