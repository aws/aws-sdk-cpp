/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemaker/model/AIWorkloadConfigSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SageMaker {
namespace Model {

AIWorkloadConfigSummary::AIWorkloadConfigSummary(JsonView jsonValue) { *this = jsonValue; }

AIWorkloadConfigSummary& AIWorkloadConfigSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("AIWorkloadConfigName")) {
    m_aIWorkloadConfigName = jsonValue.GetString("AIWorkloadConfigName");
    m_aIWorkloadConfigNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AIWorkloadConfigArn")) {
    m_aIWorkloadConfigArn = jsonValue.GetString("AIWorkloadConfigArn");
    m_aIWorkloadConfigArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreationTime")) {
    m_creationTime = jsonValue.GetDouble("CreationTime");
    m_creationTimeHasBeenSet = true;
  }
  return *this;
}

JsonValue AIWorkloadConfigSummary::Jsonize() const {
  JsonValue payload;

  if (m_aIWorkloadConfigNameHasBeenSet) {
    payload.WithString("AIWorkloadConfigName", m_aIWorkloadConfigName);
  }

  if (m_aIWorkloadConfigArnHasBeenSet) {
    payload.WithString("AIWorkloadConfigArn", m_aIWorkloadConfigArn);
  }

  if (m_creationTimeHasBeenSet) {
    payload.WithDouble("CreationTime", m_creationTime.SecondsWithMSPrecision());
  }

  return payload;
}

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
