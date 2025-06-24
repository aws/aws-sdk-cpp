/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/ConnectorSummary.h>
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

ConnectorSummary::ConnectorSummary(JsonView jsonValue)
{
  *this = jsonValue;
}

ConnectorSummary& ConnectorSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ConnectorArn"))
  {
    m_connectorArn = jsonValue.GetString("ConnectorArn");
    m_connectorArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ConnectorId"))
  {
    m_connectorId = jsonValue.GetString("ConnectorId");
    m_connectorIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");
    m_descriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ProviderSummary"))
  {
    m_providerSummary = jsonValue.GetObject("ProviderSummary");
    m_providerSummaryHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreatedAt"))
  {
    m_createdAt = jsonValue.GetString("CreatedAt");
    m_createdAtHasBeenSet = true;
  }
  return *this;
}

JsonValue ConnectorSummary::Jsonize() const
{
  JsonValue payload;

  if(m_connectorArnHasBeenSet)
  {
   payload.WithString("ConnectorArn", m_connectorArn);

  }

  if(m_connectorIdHasBeenSet)
  {
   payload.WithString("ConnectorId", m_connectorId);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_providerSummaryHasBeenSet)
  {
   payload.WithObject("ProviderSummary", m_providerSummary.Jsonize());

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithString("CreatedAt", m_createdAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
