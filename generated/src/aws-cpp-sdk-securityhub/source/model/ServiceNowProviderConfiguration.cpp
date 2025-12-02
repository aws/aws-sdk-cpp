/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/securityhub/model/ServiceNowProviderConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SecurityHub {
namespace Model {

ServiceNowProviderConfiguration::ServiceNowProviderConfiguration(JsonView jsonValue) { *this = jsonValue; }

ServiceNowProviderConfiguration& ServiceNowProviderConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("InstanceName")) {
    m_instanceName = jsonValue.GetString("InstanceName");
    m_instanceNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("SecretArn")) {
    m_secretArn = jsonValue.GetString("SecretArn");
    m_secretArnHasBeenSet = true;
  }
  return *this;
}

JsonValue ServiceNowProviderConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_instanceNameHasBeenSet) {
    payload.WithString("InstanceName", m_instanceName);
  }

  if (m_secretArnHasBeenSet) {
    payload.WithString("SecretArn", m_secretArn);
  }

  return payload;
}

}  // namespace Model
}  // namespace SecurityHub
}  // namespace Aws
