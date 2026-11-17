/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/observabilityadmin/model/Connector.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ObservabilityAdmin {
namespace Model {

Connector::Connector(JsonView jsonValue) { *this = jsonValue; }

Connector& Connector::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Arn")) {
    m_arn = jsonValue.GetString("Arn");
    m_arnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Provider")) {
    m_provider = ConnectorProviderMapper::GetConnectorProviderForName(jsonValue.GetString("Provider"));
    m_providerHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ConnectorConfiguration")) {
    m_connectorConfiguration = jsonValue.GetObject("ConnectorConfiguration");
    m_connectorConfigurationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("RoleArn")) {
    m_roleArn = jsonValue.GetString("RoleArn");
    m_roleArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Name")) {
    m_name = jsonValue.GetString("Name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreatedTimeStamp")) {
    m_createdTimeStamp = jsonValue.GetInt64("CreatedTimeStamp");
    m_createdTimeStampHasBeenSet = true;
  }
  return *this;
}

JsonValue Connector::Jsonize() const {
  JsonValue payload;

  if (m_arnHasBeenSet) {
    payload.WithString("Arn", m_arn);
  }

  if (m_providerHasBeenSet) {
    payload.WithString("Provider", ConnectorProviderMapper::GetNameForConnectorProvider(m_provider));
  }

  if (m_connectorConfigurationHasBeenSet) {
    payload.WithObject("ConnectorConfiguration", m_connectorConfiguration.Jsonize());
  }

  if (m_roleArnHasBeenSet) {
    payload.WithString("RoleArn", m_roleArn);
  }

  if (m_nameHasBeenSet) {
    payload.WithString("Name", m_name);
  }

  if (m_createdTimeStampHasBeenSet) {
    payload.WithInt64("CreatedTimeStamp", m_createdTimeStamp);
  }

  return payload;
}

}  // namespace Model
}  // namespace ObservabilityAdmin
}  // namespace Aws
