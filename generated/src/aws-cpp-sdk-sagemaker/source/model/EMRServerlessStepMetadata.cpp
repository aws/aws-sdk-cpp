/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemaker/model/EMRServerlessStepMetadata.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SageMaker {
namespace Model {

EMRServerlessStepMetadata::EMRServerlessStepMetadata(JsonView jsonValue) { *this = jsonValue; }

EMRServerlessStepMetadata& EMRServerlessStepMetadata::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ApplicationId")) {
    m_applicationId = jsonValue.GetString("ApplicationId");
    m_applicationIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("JobRunId")) {
    m_jobRunId = jsonValue.GetString("JobRunId");
    m_jobRunIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("JobRunName")) {
    m_jobRunName = jsonValue.GetString("JobRunName");
    m_jobRunNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("LogFilePath")) {
    m_logFilePath = jsonValue.GetString("LogFilePath");
    m_logFilePathHasBeenSet = true;
  }
  return *this;
}

JsonValue EMRServerlessStepMetadata::Jsonize() const {
  JsonValue payload;

  if (m_applicationIdHasBeenSet) {
    payload.WithString("ApplicationId", m_applicationId);
  }

  if (m_jobRunIdHasBeenSet) {
    payload.WithString("JobRunId", m_jobRunId);
  }

  if (m_jobRunNameHasBeenSet) {
    payload.WithString("JobRunName", m_jobRunName);
  }

  if (m_logFilePathHasBeenSet) {
    payload.WithString("LogFilePath", m_logFilePath);
  }

  return payload;
}

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
