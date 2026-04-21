/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemaker/model/AIBenchmarkJobSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SageMaker {
namespace Model {

AIBenchmarkJobSummary::AIBenchmarkJobSummary(JsonView jsonValue) { *this = jsonValue; }

AIBenchmarkJobSummary& AIBenchmarkJobSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("AIBenchmarkJobName")) {
    m_aIBenchmarkJobName = jsonValue.GetString("AIBenchmarkJobName");
    m_aIBenchmarkJobNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AIBenchmarkJobArn")) {
    m_aIBenchmarkJobArn = jsonValue.GetString("AIBenchmarkJobArn");
    m_aIBenchmarkJobArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AIBenchmarkJobStatus")) {
    m_aIBenchmarkJobStatus = AIBenchmarkJobStatusMapper::GetAIBenchmarkJobStatusForName(jsonValue.GetString("AIBenchmarkJobStatus"));
    m_aIBenchmarkJobStatusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreationTime")) {
    m_creationTime = jsonValue.GetDouble("CreationTime");
    m_creationTimeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("EndTime")) {
    m_endTime = jsonValue.GetDouble("EndTime");
    m_endTimeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AIWorkloadConfigName")) {
    m_aIWorkloadConfigName = jsonValue.GetString("AIWorkloadConfigName");
    m_aIWorkloadConfigNameHasBeenSet = true;
  }
  return *this;
}

JsonValue AIBenchmarkJobSummary::Jsonize() const {
  JsonValue payload;

  if (m_aIBenchmarkJobNameHasBeenSet) {
    payload.WithString("AIBenchmarkJobName", m_aIBenchmarkJobName);
  }

  if (m_aIBenchmarkJobArnHasBeenSet) {
    payload.WithString("AIBenchmarkJobArn", m_aIBenchmarkJobArn);
  }

  if (m_aIBenchmarkJobStatusHasBeenSet) {
    payload.WithString("AIBenchmarkJobStatus", AIBenchmarkJobStatusMapper::GetNameForAIBenchmarkJobStatus(m_aIBenchmarkJobStatus));
  }

  if (m_creationTimeHasBeenSet) {
    payload.WithDouble("CreationTime", m_creationTime.SecondsWithMSPrecision());
  }

  if (m_endTimeHasBeenSet) {
    payload.WithDouble("EndTime", m_endTime.SecondsWithMSPrecision());
  }

  if (m_aIWorkloadConfigNameHasBeenSet) {
    payload.WithString("AIWorkloadConfigName", m_aIWorkloadConfigName);
  }

  return payload;
}

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
