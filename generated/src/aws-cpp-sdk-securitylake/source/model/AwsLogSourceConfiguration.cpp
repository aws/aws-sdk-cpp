/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securitylake/model/AwsLogSourceConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityLake
{
namespace Model
{

AwsLogSourceConfiguration::AwsLogSourceConfiguration() : 
    m_accountsHasBeenSet(false),
    m_regionsHasBeenSet(false),
    m_sourceName(AwsLogSourceName::NOT_SET),
    m_sourceNameHasBeenSet(false),
    m_sourceVersionHasBeenSet(false)
{
}

AwsLogSourceConfiguration::AwsLogSourceConfiguration(JsonView jsonValue) : 
    m_accountsHasBeenSet(false),
    m_regionsHasBeenSet(false),
    m_sourceName(AwsLogSourceName::NOT_SET),
    m_sourceNameHasBeenSet(false),
    m_sourceVersionHasBeenSet(false)
{
  *this = jsonValue;
}

AwsLogSourceConfiguration& AwsLogSourceConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("accounts"))
  {
    Aws::Utils::Array<JsonView> accountsJsonList = jsonValue.GetArray("accounts");
    for(unsigned accountsIndex = 0; accountsIndex < accountsJsonList.GetLength(); ++accountsIndex)
    {
      m_accounts.push_back(accountsJsonList[accountsIndex].AsString());
    }
    m_accountsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("regions"))
  {
    Aws::Utils::Array<JsonView> regionsJsonList = jsonValue.GetArray("regions");
    for(unsigned regionsIndex = 0; regionsIndex < regionsJsonList.GetLength(); ++regionsIndex)
    {
      m_regions.push_back(regionsJsonList[regionsIndex].AsString());
    }
    m_regionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sourceName"))
  {
    m_sourceName = AwsLogSourceNameMapper::GetAwsLogSourceNameForName(jsonValue.GetString("sourceName"));

    m_sourceNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sourceVersion"))
  {
    m_sourceVersion = jsonValue.GetString("sourceVersion");

    m_sourceVersionHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsLogSourceConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_accountsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> accountsJsonList(m_accounts.size());
   for(unsigned accountsIndex = 0; accountsIndex < accountsJsonList.GetLength(); ++accountsIndex)
   {
     accountsJsonList[accountsIndex].AsString(m_accounts[accountsIndex]);
   }
   payload.WithArray("accounts", std::move(accountsJsonList));

  }

  if(m_regionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> regionsJsonList(m_regions.size());
   for(unsigned regionsIndex = 0; regionsIndex < regionsJsonList.GetLength(); ++regionsIndex)
   {
     regionsJsonList[regionsIndex].AsString(m_regions[regionsIndex]);
   }
   payload.WithArray("regions", std::move(regionsJsonList));

  }

  if(m_sourceNameHasBeenSet)
  {
   payload.WithString("sourceName", AwsLogSourceNameMapper::GetNameForAwsLogSourceName(m_sourceName));
  }

  if(m_sourceVersionHasBeenSet)
  {
   payload.WithString("sourceVersion", m_sourceVersion);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityLake
} // namespace Aws
