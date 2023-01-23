/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/migrationhubstrategy/model/DatabaseConfigDetail.h>
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

DatabaseConfigDetail::DatabaseConfigDetail() : 
    m_secretNameHasBeenSet(false)
{
}

DatabaseConfigDetail::DatabaseConfigDetail(JsonView jsonValue) : 
    m_secretNameHasBeenSet(false)
{
  *this = jsonValue;
}

DatabaseConfigDetail& DatabaseConfigDetail::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("secretName"))
  {
    m_secretName = jsonValue.GetString("secretName");

    m_secretNameHasBeenSet = true;
  }

  return *this;
}

JsonValue DatabaseConfigDetail::Jsonize() const
{
  JsonValue payload;

  if(m_secretNameHasBeenSet)
  {
   payload.WithString("secretName", m_secretName);

  }

  return payload;
}

} // namespace Model
} // namespace MigrationHubStrategyRecommendations
} // namespace Aws
