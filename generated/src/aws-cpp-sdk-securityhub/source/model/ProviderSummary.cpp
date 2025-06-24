/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/ProviderSummary.h>
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

ProviderSummary::ProviderSummary(JsonView jsonValue)
{
  *this = jsonValue;
}

ProviderSummary& ProviderSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ProviderName"))
  {
    m_providerName = ConnectorProviderNameMapper::GetConnectorProviderNameForName(jsonValue.GetString("ProviderName"));
    m_providerNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ConnectorStatus"))
  {
    m_connectorStatus = ConnectorStatusMapper::GetConnectorStatusForName(jsonValue.GetString("ConnectorStatus"));
    m_connectorStatusHasBeenSet = true;
  }
  return *this;
}

JsonValue ProviderSummary::Jsonize() const
{
  JsonValue payload;

  if(m_providerNameHasBeenSet)
  {
   payload.WithString("ProviderName", ConnectorProviderNameMapper::GetNameForConnectorProviderName(m_providerName));
  }

  if(m_connectorStatusHasBeenSet)
  {
   payload.WithString("ConnectorStatus", ConnectorStatusMapper::GetNameForConnectorStatus(m_connectorStatus));
  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
