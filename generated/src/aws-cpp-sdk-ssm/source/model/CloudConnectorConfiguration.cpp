/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/ssm/model/CloudConnectorConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SSM {
namespace Model {

CloudConnectorConfiguration::CloudConnectorConfiguration(JsonView jsonValue) { *this = jsonValue; }

CloudConnectorConfiguration& CloudConnectorConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("AzureConfiguration")) {
    m_azureConfiguration = jsonValue.GetObject("AzureConfiguration");
    m_azureConfigurationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("GcpConfiguration")) {
    m_gcpConfiguration = jsonValue.GetObject("GcpConfiguration");
    m_gcpConfigurationHasBeenSet = true;
  }
  return *this;
}

JsonValue CloudConnectorConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_azureConfigurationHasBeenSet) {
    payload.WithObject("AzureConfiguration", m_azureConfiguration.Jsonize());
  }

  if (m_gcpConfigurationHasBeenSet) {
    payload.WithObject("GcpConfiguration", m_gcpConfiguration.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace SSM
}  // namespace Aws
