/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/xray/model/CloudWatchLogsConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace XRay {
namespace Model {

CloudWatchLogsConfiguration::CloudWatchLogsConfiguration(JsonView jsonValue) { *this = jsonValue; }

CloudWatchLogsConfiguration& CloudWatchLogsConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("SpansLogGroupKmsKeyId")) {
    m_spansLogGroupKmsKeyId = jsonValue.GetString("SpansLogGroupKmsKeyId");
    m_spansLogGroupKmsKeyIdHasBeenSet = true;
  }
  return *this;
}

JsonValue CloudWatchLogsConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_spansLogGroupKmsKeyIdHasBeenSet) {
    payload.WithString("SpansLogGroupKmsKeyId", m_spansLogGroupKmsKeyId);
  }

  return payload;
}

}  // namespace Model
}  // namespace XRay
}  // namespace Aws
