/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/migrationhubstrategy/model/StopAssessmentRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MigrationHubStrategyRecommendations::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StopAssessmentRequest::StopAssessmentRequest() : 
    m_assessmentIdHasBeenSet(false)
{
}

Aws::String StopAssessmentRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_assessmentIdHasBeenSet)
  {
   payload.WithString("assessmentId", m_assessmentId);

  }

  return payload.View().WriteReadable();
}




