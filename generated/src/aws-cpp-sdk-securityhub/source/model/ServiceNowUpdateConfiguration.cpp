/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/securityhub/model/ServiceNowUpdateConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SecurityHub {
namespace Model {

ServiceNowUpdateConfiguration::ServiceNowUpdateConfiguration(JsonView jsonValue) { *this = jsonValue; }

ServiceNowUpdateConfiguration& ServiceNowUpdateConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("SecretArn")) {
    m_secretArn = jsonValue.GetString("SecretArn");
    m_secretArnHasBeenSet = true;
  }
  return *this;
}

JsonValue ServiceNowUpdateConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_secretArnHasBeenSet) {
    payload.WithString("SecretArn", m_secretArn);
  }

  return payload;
}

}  // namespace Model
}  // namespace SecurityHub
}  // namespace Aws
