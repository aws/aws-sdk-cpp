/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemaker/model/JobConfigSchemaVersionSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SageMaker {
namespace Model {

JobConfigSchemaVersionSummary::JobConfigSchemaVersionSummary(JsonView jsonValue) { *this = jsonValue; }

JobConfigSchemaVersionSummary& JobConfigSchemaVersionSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("JobConfigSchemaVersion")) {
    m_jobConfigSchemaVersion = jsonValue.GetString("JobConfigSchemaVersion");
    m_jobConfigSchemaVersionHasBeenSet = true;
  }
  return *this;
}

JsonValue JobConfigSchemaVersionSummary::Jsonize() const {
  JsonValue payload;

  if (m_jobConfigSchemaVersionHasBeenSet) {
    payload.WithString("JobConfigSchemaVersion", m_jobConfigSchemaVersion);
  }

  return payload;
}

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
