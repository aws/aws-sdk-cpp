/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mwaa-serverless/model/LoggingConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MWAAServerless {
namespace Model {

LoggingConfiguration::LoggingConfiguration(JsonView jsonValue) { *this = jsonValue; }

LoggingConfiguration& LoggingConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("LogGroupName")) {
    m_logGroupName = jsonValue.GetString("LogGroupName");
    m_logGroupNameHasBeenSet = true;
  }
  return *this;
}

JsonValue LoggingConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_logGroupNameHasBeenSet) {
    payload.WithString("LogGroupName", m_logGroupName);
  }

  return payload;
}

}  // namespace Model
}  // namespace MWAAServerless
}  // namespace Aws
