/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pipes/model/PipeTargetRedshiftDataParameters.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Pipes
{
namespace Model
{

PipeTargetRedshiftDataParameters::PipeTargetRedshiftDataParameters() : 
    m_databaseHasBeenSet(false),
    m_dbUserHasBeenSet(false),
    m_secretManagerArnHasBeenSet(false),
    m_sqlsHasBeenSet(false),
    m_statementNameHasBeenSet(false),
    m_withEvent(false),
    m_withEventHasBeenSet(false)
{
}

PipeTargetRedshiftDataParameters::PipeTargetRedshiftDataParameters(JsonView jsonValue) : 
    m_databaseHasBeenSet(false),
    m_dbUserHasBeenSet(false),
    m_secretManagerArnHasBeenSet(false),
    m_sqlsHasBeenSet(false),
    m_statementNameHasBeenSet(false),
    m_withEvent(false),
    m_withEventHasBeenSet(false)
{
  *this = jsonValue;
}

PipeTargetRedshiftDataParameters& PipeTargetRedshiftDataParameters::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Database"))
  {
    m_database = jsonValue.GetString("Database");

    m_databaseHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DbUser"))
  {
    m_dbUser = jsonValue.GetString("DbUser");

    m_dbUserHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SecretManagerArn"))
  {
    m_secretManagerArn = jsonValue.GetString("SecretManagerArn");

    m_secretManagerArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Sqls"))
  {
    Aws::Utils::Array<JsonView> sqlsJsonList = jsonValue.GetArray("Sqls");
    for(unsigned sqlsIndex = 0; sqlsIndex < sqlsJsonList.GetLength(); ++sqlsIndex)
    {
      m_sqls.push_back(sqlsJsonList[sqlsIndex].AsString());
    }
    m_sqlsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StatementName"))
  {
    m_statementName = jsonValue.GetString("StatementName");

    m_statementNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("WithEvent"))
  {
    m_withEvent = jsonValue.GetBool("WithEvent");

    m_withEventHasBeenSet = true;
  }

  return *this;
}

JsonValue PipeTargetRedshiftDataParameters::Jsonize() const
{
  JsonValue payload;

  if(m_databaseHasBeenSet)
  {
   payload.WithString("Database", m_database);

  }

  if(m_dbUserHasBeenSet)
  {
   payload.WithString("DbUser", m_dbUser);

  }

  if(m_secretManagerArnHasBeenSet)
  {
   payload.WithString("SecretManagerArn", m_secretManagerArn);

  }

  if(m_sqlsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> sqlsJsonList(m_sqls.size());
   for(unsigned sqlsIndex = 0; sqlsIndex < sqlsJsonList.GetLength(); ++sqlsIndex)
   {
     sqlsJsonList[sqlsIndex].AsString(m_sqls[sqlsIndex]);
   }
   payload.WithArray("Sqls", std::move(sqlsJsonList));

  }

  if(m_statementNameHasBeenSet)
  {
   payload.WithString("StatementName", m_statementName);

  }

  if(m_withEventHasBeenSet)
  {
   payload.WithBool("WithEvent", m_withEvent);

  }

  return payload;
}

} // namespace Model
} // namespace Pipes
} // namespace Aws
