/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm-sap/model/DatabaseConnection.h>
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

DatabaseConnection::DatabaseConnection() : 
    m_databaseConnectionMethod(DatabaseConnectionMethod::NOT_SET),
    m_databaseConnectionMethodHasBeenSet(false),
    m_databaseArnHasBeenSet(false),
    m_connectionIpHasBeenSet(false)
{
}

DatabaseConnection::DatabaseConnection(JsonView jsonValue) : 
    m_databaseConnectionMethod(DatabaseConnectionMethod::NOT_SET),
    m_databaseConnectionMethodHasBeenSet(false),
    m_databaseArnHasBeenSet(false),
    m_connectionIpHasBeenSet(false)
{
  *this = jsonValue;
}

DatabaseConnection& DatabaseConnection::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DatabaseConnectionMethod"))
  {
    m_databaseConnectionMethod = DatabaseConnectionMethodMapper::GetDatabaseConnectionMethodForName(jsonValue.GetString("DatabaseConnectionMethod"));

    m_databaseConnectionMethodHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DatabaseArn"))
  {
    m_databaseArn = jsonValue.GetString("DatabaseArn");

    m_databaseArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ConnectionIp"))
  {
    m_connectionIp = jsonValue.GetString("ConnectionIp");

    m_connectionIpHasBeenSet = true;
  }

  return *this;
}

JsonValue DatabaseConnection::Jsonize() const
{
  JsonValue payload;

  if(m_databaseConnectionMethodHasBeenSet)
  {
   payload.WithString("DatabaseConnectionMethod", DatabaseConnectionMethodMapper::GetNameForDatabaseConnectionMethod(m_databaseConnectionMethod));
  }

  if(m_databaseArnHasBeenSet)
  {
   payload.WithString("DatabaseArn", m_databaseArn);

  }

  if(m_connectionIpHasBeenSet)
  {
   payload.WithString("ConnectionIp", m_connectionIp);

  }

  return payload;
}

} // namespace Model
} // namespace SsmSap
} // namespace Aws
