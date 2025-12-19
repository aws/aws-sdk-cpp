/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mgn/model/SourceServerConnectorAction.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace mgn {
namespace Model {

SourceServerConnectorAction::SourceServerConnectorAction(JsonView jsonValue) { *this = jsonValue; }

SourceServerConnectorAction& SourceServerConnectorAction::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("credentialsSecretArn")) {
    m_credentialsSecretArn = jsonValue.GetString("credentialsSecretArn");
    m_credentialsSecretArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("connectorArn")) {
    m_connectorArn = jsonValue.GetString("connectorArn");
    m_connectorArnHasBeenSet = true;
  }
  return *this;
}

JsonValue SourceServerConnectorAction::Jsonize() const {
  JsonValue payload;

  if (m_credentialsSecretArnHasBeenSet) {
    payload.WithString("credentialsSecretArn", m_credentialsSecretArn);
  }

  if (m_connectorArnHasBeenSet) {
    payload.WithString("connectorArn", m_connectorArn);
  }

  return payload;
}

}  // namespace Model
}  // namespace mgn
}  // namespace Aws
