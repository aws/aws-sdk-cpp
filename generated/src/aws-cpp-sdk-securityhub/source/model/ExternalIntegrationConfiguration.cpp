/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/ExternalIntegrationConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

ExternalIntegrationConfiguration::ExternalIntegrationConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

ExternalIntegrationConfiguration& ExternalIntegrationConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ConnectorArn"))
  {
    m_connectorArn = jsonValue.GetString("ConnectorArn");
    m_connectorArnHasBeenSet = true;
  }
  return *this;
}

JsonValue ExternalIntegrationConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_connectorArnHasBeenSet)
  {
   payload.WithString("ConnectorArn", m_connectorArn);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
