/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemaker/model/AIRecommendationJobSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SageMaker {
namespace Model {

AIRecommendationJobSummary::AIRecommendationJobSummary(JsonView jsonValue) { *this = jsonValue; }

AIRecommendationJobSummary& AIRecommendationJobSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("AIRecommendationJobName")) {
    m_aIRecommendationJobName = jsonValue.GetString("AIRecommendationJobName");
    m_aIRecommendationJobNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AIRecommendationJobArn")) {
    m_aIRecommendationJobArn = jsonValue.GetString("AIRecommendationJobArn");
    m_aIRecommendationJobArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AIRecommendationJobStatus")) {
    m_aIRecommendationJobStatus =
        AIRecommendationJobStatusMapper::GetAIRecommendationJobStatusForName(jsonValue.GetString("AIRecommendationJobStatus"));
    m_aIRecommendationJobStatusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreationTime")) {
    m_creationTime = jsonValue.GetDouble("CreationTime");
    m_creationTimeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("EndTime")) {
    m_endTime = jsonValue.GetDouble("EndTime");
    m_endTimeHasBeenSet = true;
  }
  return *this;
}

JsonValue AIRecommendationJobSummary::Jsonize() const {
  JsonValue payload;

  if (m_aIRecommendationJobNameHasBeenSet) {
    payload.WithString("AIRecommendationJobName", m_aIRecommendationJobName);
  }

  if (m_aIRecommendationJobArnHasBeenSet) {
    payload.WithString("AIRecommendationJobArn", m_aIRecommendationJobArn);
  }

  if (m_aIRecommendationJobStatusHasBeenSet) {
    payload.WithString("AIRecommendationJobStatus",
                       AIRecommendationJobStatusMapper::GetNameForAIRecommendationJobStatus(m_aIRecommendationJobStatus));
  }

  if (m_creationTimeHasBeenSet) {
    payload.WithDouble("CreationTime", m_creationTime.SecondsWithMSPrecision());
  }

  if (m_endTimeHasBeenSet) {
    payload.WithDouble("EndTime", m_endTime.SecondsWithMSPrecision());
  }

  return payload;
}

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
