/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qapps/model/LibraryItemMember.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QApps
{
namespace Model
{

LibraryItemMember::LibraryItemMember(JsonView jsonValue)
{
  *this = jsonValue;
}

LibraryItemMember& LibraryItemMember::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("libraryItemId"))
  {
    m_libraryItemId = jsonValue.GetString("libraryItemId");
    m_libraryItemIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("appId"))
  {
    m_appId = jsonValue.GetString("appId");
    m_appIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("appVersion"))
  {
    m_appVersion = jsonValue.GetInteger("appVersion");
    m_appVersionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("categories"))
  {
    Aws::Utils::Array<JsonView> categoriesJsonList = jsonValue.GetArray("categories");
    for(unsigned categoriesIndex = 0; categoriesIndex < categoriesJsonList.GetLength(); ++categoriesIndex)
    {
      m_categories.push_back(categoriesJsonList[categoriesIndex].AsObject());
    }
    m_categoriesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("status"))
  {
    m_status = jsonValue.GetString("status");
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetString("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("createdBy"))
  {
    m_createdBy = jsonValue.GetString("createdBy");
    m_createdByHasBeenSet = true;
  }
  if(jsonValue.ValueExists("updatedAt"))
  {
    m_updatedAt = jsonValue.GetString("updatedAt");
    m_updatedAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("updatedBy"))
  {
    m_updatedBy = jsonValue.GetString("updatedBy");
    m_updatedByHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ratingCount"))
  {
    m_ratingCount = jsonValue.GetInteger("ratingCount");
    m_ratingCountHasBeenSet = true;
  }
  if(jsonValue.ValueExists("isRatedByUser"))
  {
    m_isRatedByUser = jsonValue.GetBool("isRatedByUser");
    m_isRatedByUserHasBeenSet = true;
  }
  if(jsonValue.ValueExists("userCount"))
  {
    m_userCount = jsonValue.GetInteger("userCount");
    m_userCountHasBeenSet = true;
  }
  if(jsonValue.ValueExists("isVerified"))
  {
    m_isVerified = jsonValue.GetBool("isVerified");
    m_isVerifiedHasBeenSet = true;
  }
  return *this;
}

JsonValue LibraryItemMember::Jsonize() const
{
  JsonValue payload;

  if(m_libraryItemIdHasBeenSet)
  {
   payload.WithString("libraryItemId", m_libraryItemId);

  }

  if(m_appIdHasBeenSet)
  {
   payload.WithString("appId", m_appId);

  }

  if(m_appVersionHasBeenSet)
  {
   payload.WithInteger("appVersion", m_appVersion);

  }

  if(m_categoriesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> categoriesJsonList(m_categories.size());
   for(unsigned categoriesIndex = 0; categoriesIndex < categoriesJsonList.GetLength(); ++categoriesIndex)
   {
     categoriesJsonList[categoriesIndex].AsObject(m_categories[categoriesIndex].Jsonize());
   }
   payload.WithArray("categories", std::move(categoriesJsonList));

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", m_status);

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithString("createdAt", m_createdAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_createdByHasBeenSet)
  {
   payload.WithString("createdBy", m_createdBy);

  }

  if(m_updatedAtHasBeenSet)
  {
   payload.WithString("updatedAt", m_updatedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_updatedByHasBeenSet)
  {
   payload.WithString("updatedBy", m_updatedBy);

  }

  if(m_ratingCountHasBeenSet)
  {
   payload.WithInteger("ratingCount", m_ratingCount);

  }

  if(m_isRatedByUserHasBeenSet)
  {
   payload.WithBool("isRatedByUser", m_isRatedByUser);

  }

  if(m_userCountHasBeenSet)
  {
   payload.WithInteger("userCount", m_userCount);

  }

  if(m_isVerifiedHasBeenSet)
  {
   payload.WithBool("isVerified", m_isVerified);

  }

  return payload;
}

} // namespace Model
} // namespace QApps
} // namespace Aws
