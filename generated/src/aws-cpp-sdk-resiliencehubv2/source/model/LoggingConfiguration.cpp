/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/resiliencehubv2/model/LoggingConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace resiliencehubv2 {
namespace Model {

LoggingConfiguration::LoggingConfiguration(JsonView jsonValue) { *this = jsonValue; }

LoggingConfiguration& LoggingConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("s3BucketName")) {
    m_s3BucketName = jsonValue.GetString("s3BucketName");
    m_s3BucketNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("cloudWatchLogGroupArn")) {
    m_cloudWatchLogGroupArn = jsonValue.GetString("cloudWatchLogGroupArn");
    m_cloudWatchLogGroupArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("logSchemaVersion")) {
    m_logSchemaVersion = jsonValue.GetString("logSchemaVersion");
    m_logSchemaVersionHasBeenSet = true;
  }
  return *this;
}

JsonValue LoggingConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_s3BucketNameHasBeenSet) {
    payload.WithString("s3BucketName", m_s3BucketName);
  }

  if (m_cloudWatchLogGroupArnHasBeenSet) {
    payload.WithString("cloudWatchLogGroupArn", m_cloudWatchLogGroupArn);
  }

  if (m_logSchemaVersionHasBeenSet) {
    payload.WithString("logSchemaVersion", m_logSchemaVersion);
  }

  return payload;
}

}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
