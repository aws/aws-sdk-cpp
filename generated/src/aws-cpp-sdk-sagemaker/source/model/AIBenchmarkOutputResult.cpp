/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemaker/model/AIBenchmarkOutputResult.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SageMaker {
namespace Model {

AIBenchmarkOutputResult::AIBenchmarkOutputResult(JsonView jsonValue) { *this = jsonValue; }

AIBenchmarkOutputResult& AIBenchmarkOutputResult::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("S3OutputLocation")) {
    m_s3OutputLocation = jsonValue.GetString("S3OutputLocation");
    m_s3OutputLocationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CloudWatchLogs")) {
    Aws::Utils::Array<JsonView> cloudWatchLogsJsonList = jsonValue.GetArray("CloudWatchLogs");
    for (unsigned cloudWatchLogsIndex = 0; cloudWatchLogsIndex < cloudWatchLogsJsonList.GetLength(); ++cloudWatchLogsIndex) {
      m_cloudWatchLogs.push_back(cloudWatchLogsJsonList[cloudWatchLogsIndex].AsObject());
    }
    m_cloudWatchLogsHasBeenSet = true;
  }
  return *this;
}

JsonValue AIBenchmarkOutputResult::Jsonize() const {
  JsonValue payload;

  if (m_s3OutputLocationHasBeenSet) {
    payload.WithString("S3OutputLocation", m_s3OutputLocation);
  }

  if (m_cloudWatchLogsHasBeenSet) {
    Aws::Utils::Array<JsonValue> cloudWatchLogsJsonList(m_cloudWatchLogs.size());
    for (unsigned cloudWatchLogsIndex = 0; cloudWatchLogsIndex < cloudWatchLogsJsonList.GetLength(); ++cloudWatchLogsIndex) {
      cloudWatchLogsJsonList[cloudWatchLogsIndex].AsObject(m_cloudWatchLogs[cloudWatchLogsIndex].Jsonize());
    }
    payload.WithArray("CloudWatchLogs", std::move(cloudWatchLogsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
