/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qapps/model/UserAppItem.h>
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

UserAppItem::UserAppItem(JsonView jsonValue)
{
  *this = jsonValue;
}

UserAppItem& UserAppItem::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("appId"))
  {
    m_appId = jsonValue.GetString("appId");
    m_appIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("appArn"))
  {
    m_appArn = jsonValue.GetString("appArn");
    m_appArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("title"))
  {
    m_title = jsonValue.GetString("title");
    m_titleHasBeenSet = true;
  }
  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetString("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("canEdit"))
  {
    m_canEdit = jsonValue.GetBool("canEdit");
    m_canEditHasBeenSet = true;
  }
  if(jsonValue.ValueExists("status"))
  {
    m_status = jsonValue.GetString("status");
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("isVerified"))
  {
    m_isVerified = jsonValue.GetBool("isVerified");
    m_isVerifiedHasBeenSet = true;
  }
  return *this;
}

JsonValue UserAppItem::Jsonize() const
{
  JsonValue payload;

  if(m_appIdHasBeenSet)
  {
   payload.WithString("appId", m_appId);

  }

  if(m_appArnHasBeenSet)
  {
   payload.WithString("appArn", m_appArn);

  }

  if(m_titleHasBeenSet)
  {
   payload.WithString("title", m_title);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithString("createdAt", m_createdAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_canEditHasBeenSet)
  {
   payload.WithBool("canEdit", m_canEdit);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", m_status);

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
