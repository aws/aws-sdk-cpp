/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/observabilityadmin/model/AzureAwsManagedFlowLogs.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ObservabilityAdmin {
namespace Model {

AzureAwsManagedFlowLogs::AzureAwsManagedFlowLogs(JsonView jsonValue) { *this = jsonValue; }

AzureAwsManagedFlowLogs& AzureAwsManagedFlowLogs::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("RetentionDays")) {
    m_retentionDays = jsonValue.GetInteger("RetentionDays");
    m_retentionDaysHasBeenSet = true;
  }
  return *this;
}

JsonValue AzureAwsManagedFlowLogs::Jsonize() const {
  JsonValue payload;

  if (m_retentionDaysHasBeenSet) {
    payload.WithInteger("RetentionDays", m_retentionDays);
  }

  return payload;
}

}  // namespace Model
}  // namespace ObservabilityAdmin
}  // namespace Aws
