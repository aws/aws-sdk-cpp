/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/migrationhubstrategy/model/AppUnitError.h>
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

AppUnitError::AppUnitError() : 
    m_appUnitErrorCategory(AppUnitErrorCategory::NOT_SET),
    m_appUnitErrorCategoryHasBeenSet(false)
{
}

AppUnitError::AppUnitError(JsonView jsonValue) : 
    m_appUnitErrorCategory(AppUnitErrorCategory::NOT_SET),
    m_appUnitErrorCategoryHasBeenSet(false)
{
  *this = jsonValue;
}

AppUnitError& AppUnitError::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("appUnitErrorCategory"))
  {
    m_appUnitErrorCategory = AppUnitErrorCategoryMapper::GetAppUnitErrorCategoryForName(jsonValue.GetString("appUnitErrorCategory"));

    m_appUnitErrorCategoryHasBeenSet = true;
  }

  return *this;
}

JsonValue AppUnitError::Jsonize() const
{
  JsonValue payload;

  if(m_appUnitErrorCategoryHasBeenSet)
  {
   payload.WithString("appUnitErrorCategory", AppUnitErrorCategoryMapper::GetNameForAppUnitErrorCategory(m_appUnitErrorCategory));
  }

  return payload;
}

} // namespace Model
} // namespace MigrationHubStrategyRecommendations
} // namespace Aws
