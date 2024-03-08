/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wellarchitected/model/GetReviewTemplateAnswerRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::WellArchitected::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetReviewTemplateAnswerRequest::GetReviewTemplateAnswerRequest() : 
    m_templateArnHasBeenSet(false),
    m_lensAliasHasBeenSet(false),
    m_questionIdHasBeenSet(false)
{
}

Aws::String GetReviewTemplateAnswerRequest::SerializePayload() const
{
  return {};
}




