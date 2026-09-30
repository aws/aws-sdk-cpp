/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemaker/model/DatabaseConfigurationMetadata.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SageMaker {
namespace Model {

DatabaseConfigurationMetadata::DatabaseConfigurationMetadata(JsonView jsonValue) { *this = jsonValue; }

DatabaseConfigurationMetadata& DatabaseConfigurationMetadata::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("RollbackStatus")) {
    m_rollbackStatus =
        DatabaseConfigurationRollbackStatusMapper::GetDatabaseConfigurationRollbackStatusForName(jsonValue.GetString("RollbackStatus"));
    m_rollbackStatusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Advisory")) {
    m_advisory = jsonValue.GetString("Advisory");
    m_advisoryHasBeenSet = true;
  }
  if (jsonValue.ValueExists("FailureMessage")) {
    m_failureMessage = jsonValue.GetString("FailureMessage");
    m_failureMessageHasBeenSet = true;
  }
  return *this;
}

JsonValue DatabaseConfigurationMetadata::Jsonize() const {
  JsonValue payload;

  if (m_rollbackStatusHasBeenSet) {
    payload.WithString("RollbackStatus",
                       DatabaseConfigurationRollbackStatusMapper::GetNameForDatabaseConfigurationRollbackStatus(m_rollbackStatus));
  }

  if (m_advisoryHasBeenSet) {
    payload.WithString("Advisory", m_advisory);
  }

  if (m_failureMessageHasBeenSet) {
    payload.WithString("FailureMessage", m_failureMessage);
  }

  return payload;
}

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
