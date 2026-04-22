/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemaker/model/AICloudWatchLogs.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SageMaker {
namespace Model {

AICloudWatchLogs::AICloudWatchLogs(JsonView jsonValue) { *this = jsonValue; }

AICloudWatchLogs& AICloudWatchLogs::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("LogGroupArn")) {
    m_logGroupArn = jsonValue.GetString("LogGroupArn");
    m_logGroupArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("LogStreamName")) {
    m_logStreamName = jsonValue.GetString("LogStreamName");
    m_logStreamNameHasBeenSet = true;
  }
  return *this;
}

JsonValue AICloudWatchLogs::Jsonize() const {
  JsonValue payload;

  if (m_logGroupArnHasBeenSet) {
    payload.WithString("LogGroupArn", m_logGroupArn);
  }

  if (m_logStreamNameHasBeenSet) {
    payload.WithString("LogStreamName", m_logStreamName);
  }

  return payload;
}

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
