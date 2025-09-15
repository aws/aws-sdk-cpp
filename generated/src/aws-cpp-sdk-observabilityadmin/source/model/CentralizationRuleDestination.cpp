/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/observabilityadmin/model/CentralizationRuleDestination.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ObservabilityAdmin
{
namespace Model
{

CentralizationRuleDestination::CentralizationRuleDestination(JsonView jsonValue)
{
  *this = jsonValue;
}

CentralizationRuleDestination& CentralizationRuleDestination::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Region"))
  {
    m_region = jsonValue.GetString("Region");
    m_regionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Account"))
  {
    m_account = jsonValue.GetString("Account");
    m_accountHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DestinationLogsConfiguration"))
  {
    m_destinationLogsConfiguration = jsonValue.GetObject("DestinationLogsConfiguration");
    m_destinationLogsConfigurationHasBeenSet = true;
  }
  return *this;
}

JsonValue CentralizationRuleDestination::Jsonize() const
{
  JsonValue payload;

  if(m_regionHasBeenSet)
  {
   payload.WithString("Region", m_region);

  }

  if(m_accountHasBeenSet)
  {
   payload.WithString("Account", m_account);

  }

  if(m_destinationLogsConfigurationHasBeenSet)
  {
   payload.WithObject("DestinationLogsConfiguration", m_destinationLogsConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace ObservabilityAdmin
} // namespace Aws
