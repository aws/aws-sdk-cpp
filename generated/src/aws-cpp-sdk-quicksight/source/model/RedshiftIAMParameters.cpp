/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/RedshiftIAMParameters.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QuickSight
{
namespace Model
{

RedshiftIAMParameters::RedshiftIAMParameters() : 
    m_roleArnHasBeenSet(false),
    m_databaseUserHasBeenSet(false),
    m_databaseGroupsHasBeenSet(false),
    m_autoCreateDatabaseUser(false),
    m_autoCreateDatabaseUserHasBeenSet(false)
{
}

RedshiftIAMParameters::RedshiftIAMParameters(JsonView jsonValue) : 
    m_roleArnHasBeenSet(false),
    m_databaseUserHasBeenSet(false),
    m_databaseGroupsHasBeenSet(false),
    m_autoCreateDatabaseUser(false),
    m_autoCreateDatabaseUserHasBeenSet(false)
{
  *this = jsonValue;
}

RedshiftIAMParameters& RedshiftIAMParameters::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RoleArn"))
  {
    m_roleArn = jsonValue.GetString("RoleArn");

    m_roleArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DatabaseUser"))
  {
    m_databaseUser = jsonValue.GetString("DatabaseUser");

    m_databaseUserHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DatabaseGroups"))
  {
    Aws::Utils::Array<JsonView> databaseGroupsJsonList = jsonValue.GetArray("DatabaseGroups");
    for(unsigned databaseGroupsIndex = 0; databaseGroupsIndex < databaseGroupsJsonList.GetLength(); ++databaseGroupsIndex)
    {
      m_databaseGroups.push_back(databaseGroupsJsonList[databaseGroupsIndex].AsString());
    }
    m_databaseGroupsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AutoCreateDatabaseUser"))
  {
    m_autoCreateDatabaseUser = jsonValue.GetBool("AutoCreateDatabaseUser");

    m_autoCreateDatabaseUserHasBeenSet = true;
  }

  return *this;
}

JsonValue RedshiftIAMParameters::Jsonize() const
{
  JsonValue payload;

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("RoleArn", m_roleArn);

  }

  if(m_databaseUserHasBeenSet)
  {
   payload.WithString("DatabaseUser", m_databaseUser);

  }

  if(m_databaseGroupsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> databaseGroupsJsonList(m_databaseGroups.size());
   for(unsigned databaseGroupsIndex = 0; databaseGroupsIndex < databaseGroupsJsonList.GetLength(); ++databaseGroupsIndex)
   {
     databaseGroupsJsonList[databaseGroupsIndex].AsString(m_databaseGroups[databaseGroupsIndex]);
   }
   payload.WithArray("DatabaseGroups", std::move(databaseGroupsJsonList));

  }

  if(m_autoCreateDatabaseUserHasBeenSet)
  {
   payload.WithBool("AutoCreateDatabaseUser", m_autoCreateDatabaseUser);

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
