/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/migrationhubstrategy/model/AnalyzableServerSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MigrationHubStrategyRecommendations
{
namespace Model
{

AnalyzableServerSummary::AnalyzableServerSummary() : 
    m_hostnameHasBeenSet(false),
    m_ipAddressHasBeenSet(false),
    m_sourceHasBeenSet(false),
    m_vmIdHasBeenSet(false)
{
}

AnalyzableServerSummary::AnalyzableServerSummary(JsonView jsonValue) : 
    m_hostnameHasBeenSet(false),
    m_ipAddressHasBeenSet(false),
    m_sourceHasBeenSet(false),
    m_vmIdHasBeenSet(false)
{
  *this = jsonValue;
}

AnalyzableServerSummary& AnalyzableServerSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("hostname"))
  {
    m_hostname = jsonValue.GetString("hostname");

    m_hostnameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ipAddress"))
  {
    m_ipAddress = jsonValue.GetString("ipAddress");

    m_ipAddressHasBeenSet = true;
  }

  if(jsonValue.ValueExists("source"))
  {
    m_source = jsonValue.GetString("source");

    m_sourceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("vmId"))
  {
    m_vmId = jsonValue.GetString("vmId");

    m_vmIdHasBeenSet = true;
  }

  return *this;
}

JsonValue AnalyzableServerSummary::Jsonize() const
{
  JsonValue payload;

  if(m_hostnameHasBeenSet)
  {
   payload.WithString("hostname", m_hostname);

  }

  if(m_ipAddressHasBeenSet)
  {
   payload.WithString("ipAddress", m_ipAddress);

  }

  if(m_sourceHasBeenSet)
  {
   payload.WithString("source", m_source);

  }

  if(m_vmIdHasBeenSet)
  {
   payload.WithString("vmId", m_vmId);

  }

  return payload;
}

} // namespace Model
} // namespace MigrationHubStrategyRecommendations
} // namespace Aws
