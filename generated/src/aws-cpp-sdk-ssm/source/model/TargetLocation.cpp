/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/TargetLocation.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SSM
{
namespace Model
{

TargetLocation::TargetLocation(JsonView jsonValue)
{
  *this = jsonValue;
}

TargetLocation& TargetLocation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Accounts"))
  {
    Aws::Utils::Array<JsonView> accountsJsonList = jsonValue.GetArray("Accounts");
    for(unsigned accountsIndex = 0; accountsIndex < accountsJsonList.GetLength(); ++accountsIndex)
    {
      m_accounts.push_back(accountsJsonList[accountsIndex].AsString());
    }
    m_accountsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Regions"))
  {
    Aws::Utils::Array<JsonView> regionsJsonList = jsonValue.GetArray("Regions");
    for(unsigned regionsIndex = 0; regionsIndex < regionsJsonList.GetLength(); ++regionsIndex)
    {
      m_regions.push_back(regionsJsonList[regionsIndex].AsString());
    }
    m_regionsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TargetLocationMaxConcurrency"))
  {
    m_targetLocationMaxConcurrency = jsonValue.GetString("TargetLocationMaxConcurrency");
    m_targetLocationMaxConcurrencyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TargetLocationMaxErrors"))
  {
    m_targetLocationMaxErrors = jsonValue.GetString("TargetLocationMaxErrors");
    m_targetLocationMaxErrorsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ExecutionRoleName"))
  {
    m_executionRoleName = jsonValue.GetString("ExecutionRoleName");
    m_executionRoleNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TargetLocationAlarmConfiguration"))
  {
    m_targetLocationAlarmConfiguration = jsonValue.GetObject("TargetLocationAlarmConfiguration");
    m_targetLocationAlarmConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("IncludeChildOrganizationUnits"))
  {
    m_includeChildOrganizationUnits = jsonValue.GetBool("IncludeChildOrganizationUnits");
    m_includeChildOrganizationUnitsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ExcludeAccounts"))
  {
    Aws::Utils::Array<JsonView> excludeAccountsJsonList = jsonValue.GetArray("ExcludeAccounts");
    for(unsigned excludeAccountsIndex = 0; excludeAccountsIndex < excludeAccountsJsonList.GetLength(); ++excludeAccountsIndex)
    {
      m_excludeAccounts.push_back(excludeAccountsJsonList[excludeAccountsIndex].AsString());
    }
    m_excludeAccountsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Targets"))
  {
    Aws::Utils::Array<JsonView> targetsJsonList = jsonValue.GetArray("Targets");
    for(unsigned targetsIndex = 0; targetsIndex < targetsJsonList.GetLength(); ++targetsIndex)
    {
      m_targets.push_back(targetsJsonList[targetsIndex].AsObject());
    }
    m_targetsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TargetsMaxConcurrency"))
  {
    m_targetsMaxConcurrency = jsonValue.GetString("TargetsMaxConcurrency");
    m_targetsMaxConcurrencyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TargetsMaxErrors"))
  {
    m_targetsMaxErrors = jsonValue.GetString("TargetsMaxErrors");
    m_targetsMaxErrorsHasBeenSet = true;
  }
  return *this;
}

JsonValue TargetLocation::Jsonize() const
{
  JsonValue payload;

  if(m_accountsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> accountsJsonList(m_accounts.size());
   for(unsigned accountsIndex = 0; accountsIndex < accountsJsonList.GetLength(); ++accountsIndex)
   {
     accountsJsonList[accountsIndex].AsString(m_accounts[accountsIndex]);
   }
   payload.WithArray("Accounts", std::move(accountsJsonList));

  }

  if(m_regionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> regionsJsonList(m_regions.size());
   for(unsigned regionsIndex = 0; regionsIndex < regionsJsonList.GetLength(); ++regionsIndex)
   {
     regionsJsonList[regionsIndex].AsString(m_regions[regionsIndex]);
   }
   payload.WithArray("Regions", std::move(regionsJsonList));

  }

  if(m_targetLocationMaxConcurrencyHasBeenSet)
  {
   payload.WithString("TargetLocationMaxConcurrency", m_targetLocationMaxConcurrency);

  }

  if(m_targetLocationMaxErrorsHasBeenSet)
  {
   payload.WithString("TargetLocationMaxErrors", m_targetLocationMaxErrors);

  }

  if(m_executionRoleNameHasBeenSet)
  {
   payload.WithString("ExecutionRoleName", m_executionRoleName);

  }

  if(m_targetLocationAlarmConfigurationHasBeenSet)
  {
   payload.WithObject("TargetLocationAlarmConfiguration", m_targetLocationAlarmConfiguration.Jsonize());

  }

  if(m_includeChildOrganizationUnitsHasBeenSet)
  {
   payload.WithBool("IncludeChildOrganizationUnits", m_includeChildOrganizationUnits);

  }

  if(m_excludeAccountsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> excludeAccountsJsonList(m_excludeAccounts.size());
   for(unsigned excludeAccountsIndex = 0; excludeAccountsIndex < excludeAccountsJsonList.GetLength(); ++excludeAccountsIndex)
   {
     excludeAccountsJsonList[excludeAccountsIndex].AsString(m_excludeAccounts[excludeAccountsIndex]);
   }
   payload.WithArray("ExcludeAccounts", std::move(excludeAccountsJsonList));

  }

  if(m_targetsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> targetsJsonList(m_targets.size());
   for(unsigned targetsIndex = 0; targetsIndex < targetsJsonList.GetLength(); ++targetsIndex)
   {
     targetsJsonList[targetsIndex].AsObject(m_targets[targetsIndex].Jsonize());
   }
   payload.WithArray("Targets", std::move(targetsJsonList));

  }

  if(m_targetsMaxConcurrencyHasBeenSet)
  {
   payload.WithString("TargetsMaxConcurrency", m_targetsMaxConcurrency);

  }

  if(m_targetsMaxErrorsHasBeenSet)
  {
   payload.WithString("TargetsMaxErrors", m_targetsMaxErrors);

  }

  return payload;
}

} // namespace Model
} // namespace SSM
} // namespace Aws
