/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/securityagent/model/IdCConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SecurityAgent {
namespace Model {

IdCConfiguration::IdCConfiguration(JsonView jsonValue) { *this = jsonValue; }

IdCConfiguration& IdCConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("idcApplicationArn")) {
    m_idcApplicationArn = jsonValue.GetString("idcApplicationArn");
    m_idcApplicationArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("idcInstanceArn")) {
    m_idcInstanceArn = jsonValue.GetString("idcInstanceArn");
    m_idcInstanceArnHasBeenSet = true;
  }
  return *this;
}

JsonValue IdCConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_idcApplicationArnHasBeenSet) {
    payload.WithString("idcApplicationArn", m_idcApplicationArn);
  }

  if (m_idcInstanceArnHasBeenSet) {
    payload.WithString("idcInstanceArn", m_idcInstanceArn);
  }

  return payload;
}

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
