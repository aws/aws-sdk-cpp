/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wellarchitected/model/GetReviewTemplateLensReviewRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::WellArchitected::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetReviewTemplateLensReviewRequest::GetReviewTemplateLensReviewRequest() : 
    m_templateArnHasBeenSet(false),
    m_lensAliasHasBeenSet(false)
{
}

Aws::String GetReviewTemplateLensReviewRequest::SerializePayload() const
{
  return {};
}




