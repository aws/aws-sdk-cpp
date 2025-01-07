/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/PredictQAResultsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::QuickSight::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PredictQAResultsRequest::PredictQAResultsRequest() : 
    m_awsAccountIdHasBeenSet(false),
    m_queryTextHasBeenSet(false),
    m_includeQuickSightQIndex(IncludeQuickSightQIndex::NOT_SET),
    m_includeQuickSightQIndexHasBeenSet(false),
    m_includeGeneratedAnswer(IncludeGeneratedAnswer::NOT_SET),
    m_includeGeneratedAnswerHasBeenSet(false),
    m_maxTopicsToConsider(0),
    m_maxTopicsToConsiderHasBeenSet(false)
{
}

Aws::String PredictQAResultsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_queryTextHasBeenSet)
  {
   payload.WithString("QueryText", m_queryText);

  }

  if(m_includeQuickSightQIndexHasBeenSet)
  {
   payload.WithString("IncludeQuickSightQIndex", IncludeQuickSightQIndexMapper::GetNameForIncludeQuickSightQIndex(m_includeQuickSightQIndex));
  }

  if(m_includeGeneratedAnswerHasBeenSet)
  {
   payload.WithString("IncludeGeneratedAnswer", IncludeGeneratedAnswerMapper::GetNameForIncludeGeneratedAnswer(m_includeGeneratedAnswer));
  }

  if(m_maxTopicsToConsiderHasBeenSet)
  {
   payload.WithInteger("MaxTopicsToConsider", m_maxTopicsToConsider);

  }

  return payload.View().WriteReadable();
}




