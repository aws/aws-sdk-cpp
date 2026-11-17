/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/observabilityadmin/model/ConnectorConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ObservabilityAdmin {
namespace Model {

ConnectorConfiguration::ConnectorConfiguration(JsonView jsonValue) { *this = jsonValue; }

ConnectorConfiguration& ConnectorConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Azure")) {
    m_azure = jsonValue.GetObject("Azure");
    m_azureHasBeenSet = true;
  }
  return *this;
}

JsonValue ConnectorConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_azureHasBeenSet) {
    payload.WithObject("Azure", m_azure.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace ObservabilityAdmin
}  // namespace Aws
