/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemaker/model/TrainingSessionSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SageMaker {
namespace Model {

TrainingSessionSummary::TrainingSessionSummary(JsonView jsonValue) { *this = jsonValue; }

TrainingSessionSummary& TrainingSessionSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("TrainingSessionArn")) {
    m_trainingSessionArn = jsonValue.GetString("TrainingSessionArn");
    m_trainingSessionArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("TrainingSessionStatus")) {
    m_trainingSessionStatus = TrainingSessionStatusMapper::GetTrainingSessionStatusForName(jsonValue.GetString("TrainingSessionStatus"));
    m_trainingSessionStatusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreationTime")) {
    m_creationTime = jsonValue.GetDouble("CreationTime");
    m_creationTimeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("LastModifiedTime")) {
    m_lastModifiedTime = jsonValue.GetDouble("LastModifiedTime");
    m_lastModifiedTimeHasBeenSet = true;
  }
  return *this;
}

JsonValue TrainingSessionSummary::Jsonize() const {
  JsonValue payload;

  if (m_trainingSessionArnHasBeenSet) {
    payload.WithString("TrainingSessionArn", m_trainingSessionArn);
  }

  if (m_trainingSessionStatusHasBeenSet) {
    payload.WithString("TrainingSessionStatus", TrainingSessionStatusMapper::GetNameForTrainingSessionStatus(m_trainingSessionStatus));
  }

  if (m_creationTimeHasBeenSet) {
    payload.WithDouble("CreationTime", m_creationTime.SecondsWithMSPrecision());
  }

  if (m_lastModifiedTimeHasBeenSet) {
    payload.WithDouble("LastModifiedTime", m_lastModifiedTime.SecondsWithMSPrecision());
  }

  return payload;
}

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
