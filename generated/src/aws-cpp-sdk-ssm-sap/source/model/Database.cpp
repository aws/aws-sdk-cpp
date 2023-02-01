/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm-sap/model/Database.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SsmSap
{
namespace Model
{

Database::Database() : 
    m_applicationIdHasBeenSet(false),
    m_componentIdHasBeenSet(false),
    m_credentialsHasBeenSet(false),
    m_databaseIdHasBeenSet(false),
    m_databaseNameHasBeenSet(false),
    m_databaseType(DatabaseType::NOT_SET),
    m_databaseTypeHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_status(DatabaseStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_primaryHostHasBeenSet(false),
    m_sQLPort(0),
    m_sQLPortHasBeenSet(false),
    m_lastUpdatedHasBeenSet(false)
{
}

Database::Database(JsonView jsonValue) : 
    m_applicationIdHasBeenSet(false),
    m_componentIdHasBeenSet(false),
    m_credentialsHasBeenSet(false),
    m_databaseIdHasBeenSet(false),
    m_databaseNameHasBeenSet(false),
    m_databaseType(DatabaseType::NOT_SET),
    m_databaseTypeHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_status(DatabaseStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_primaryHostHasBeenSet(false),
    m_sQLPort(0),
    m_sQLPortHasBeenSet(false),
    m_lastUpdatedHasBeenSet(false)
{
  *this = jsonValue;
}

Database& Database::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ApplicationId"))
  {
    m_applicationId = jsonValue.GetString("ApplicationId");

    m_applicationIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ComponentId"))
  {
    m_componentId = jsonValue.GetString("ComponentId");

    m_componentIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Credentials"))
  {
    Aws::Utils::Array<JsonView> credentialsJsonList = jsonValue.GetArray("Credentials");
    for(unsigned credentialsIndex = 0; credentialsIndex < credentialsJsonList.GetLength(); ++credentialsIndex)
    {
      m_credentials.push_back(credentialsJsonList[credentialsIndex].AsObject());
    }
    m_credentialsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DatabaseId"))
  {
    m_databaseId = jsonValue.GetString("DatabaseId");

    m_databaseIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DatabaseName"))
  {
    m_databaseName = jsonValue.GetString("DatabaseName");

    m_databaseNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DatabaseType"))
  {
    m_databaseType = DatabaseTypeMapper::GetDatabaseTypeForName(jsonValue.GetString("DatabaseType"));

    m_databaseTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = DatabaseStatusMapper::GetDatabaseStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PrimaryHost"))
  {
    m_primaryHost = jsonValue.GetString("PrimaryHost");

    m_primaryHostHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SQLPort"))
  {
    m_sQLPort = jsonValue.GetInteger("SQLPort");

    m_sQLPortHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastUpdated"))
  {
    m_lastUpdated = jsonValue.GetDouble("LastUpdated");

    m_lastUpdatedHasBeenSet = true;
  }

  return *this;
}

JsonValue Database::Jsonize() const
{
  JsonValue payload;

  if(m_applicationIdHasBeenSet)
  {
   payload.WithString("ApplicationId", m_applicationId);

  }

  if(m_componentIdHasBeenSet)
  {
   payload.WithString("ComponentId", m_componentId);

  }

  if(m_credentialsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> credentialsJsonList(m_credentials.size());
   for(unsigned credentialsIndex = 0; credentialsIndex < credentialsJsonList.GetLength(); ++credentialsIndex)
   {
     credentialsJsonList[credentialsIndex].AsObject(m_credentials[credentialsIndex].Jsonize());
   }
   payload.WithArray("Credentials", std::move(credentialsJsonList));

  }

  if(m_databaseIdHasBeenSet)
  {
   payload.WithString("DatabaseId", m_databaseId);

  }

  if(m_databaseNameHasBeenSet)
  {
   payload.WithString("DatabaseName", m_databaseName);

  }

  if(m_databaseTypeHasBeenSet)
  {
   payload.WithString("DatabaseType", DatabaseTypeMapper::GetNameForDatabaseType(m_databaseType));
  }

  if(m_arnHasBeenSet)
  {
   payload.WithString("Arn", m_arn);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", DatabaseStatusMapper::GetNameForDatabaseStatus(m_status));
  }

  if(m_primaryHostHasBeenSet)
  {
   payload.WithString("PrimaryHost", m_primaryHost);

  }

  if(m_sQLPortHasBeenSet)
  {
   payload.WithInteger("SQLPort", m_sQLPort);

  }

  if(m_lastUpdatedHasBeenSet)
  {
   payload.WithDouble("LastUpdated", m_lastUpdated.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace SsmSap
} // namespace Aws
