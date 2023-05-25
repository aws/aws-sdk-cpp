/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/servicecatalog/model/ProvisioningArtifactPreferences.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ServiceCatalog
{
namespace Model
{

ProvisioningArtifactPreferences::ProvisioningArtifactPreferences() : 
    m_stackSetAccountsHasBeenSet(false),
    m_stackSetRegionsHasBeenSet(false)
{
}

ProvisioningArtifactPreferences::ProvisioningArtifactPreferences(JsonView jsonValue) : 
    m_stackSetAccountsHasBeenSet(false),
    m_stackSetRegionsHasBeenSet(false)
{
  *this = jsonValue;
}

ProvisioningArtifactPreferences& ProvisioningArtifactPreferences::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("StackSetAccounts"))
  {
    Aws::Utils::Array<JsonView> stackSetAccountsJsonList = jsonValue.GetArray("StackSetAccounts");
    for(unsigned stackSetAccountsIndex = 0; stackSetAccountsIndex < stackSetAccountsJsonList.GetLength(); ++stackSetAccountsIndex)
    {
      m_stackSetAccounts.push_back(stackSetAccountsJsonList[stackSetAccountsIndex].AsString());
    }
    m_stackSetAccountsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StackSetRegions"))
  {
    Aws::Utils::Array<JsonView> stackSetRegionsJsonList = jsonValue.GetArray("StackSetRegions");
    for(unsigned stackSetRegionsIndex = 0; stackSetRegionsIndex < stackSetRegionsJsonList.GetLength(); ++stackSetRegionsIndex)
    {
      m_stackSetRegions.push_back(stackSetRegionsJsonList[stackSetRegionsIndex].AsString());
    }
    m_stackSetRegionsHasBeenSet = true;
  }

  return *this;
}

JsonValue ProvisioningArtifactPreferences::Jsonize() const
{
  JsonValue payload;

  if(m_stackSetAccountsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> stackSetAccountsJsonList(m_stackSetAccounts.size());
   for(unsigned stackSetAccountsIndex = 0; stackSetAccountsIndex < stackSetAccountsJsonList.GetLength(); ++stackSetAccountsIndex)
   {
     stackSetAccountsJsonList[stackSetAccountsIndex].AsString(m_stackSetAccounts[stackSetAccountsIndex]);
   }
   payload.WithArray("StackSetAccounts", std::move(stackSetAccountsJsonList));

  }

  if(m_stackSetRegionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> stackSetRegionsJsonList(m_stackSetRegions.size());
   for(unsigned stackSetRegionsIndex = 0; stackSetRegionsIndex < stackSetRegionsJsonList.GetLength(); ++stackSetRegionsIndex)
   {
     stackSetRegionsJsonList[stackSetRegionsIndex].AsString(m_stackSetRegions[stackSetRegionsIndex]);
   }
   payload.WithArray("StackSetRegions", std::move(stackSetRegionsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
