/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mwaa-serverless/model/ScheduleConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MWAAServerless {
namespace Model {

ScheduleConfiguration::ScheduleConfiguration(JsonView jsonValue) { *this = jsonValue; }

ScheduleConfiguration& ScheduleConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("CronExpression")) {
    m_cronExpression = jsonValue.GetString("CronExpression");
    m_cronExpressionHasBeenSet = true;
  }
  return *this;
}

JsonValue ScheduleConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_cronExpressionHasBeenSet) {
    payload.WithString("CronExpression", m_cronExpression);
  }

  return payload;
}

}  // namespace Model
}  // namespace MWAAServerless
}  // namespace Aws
