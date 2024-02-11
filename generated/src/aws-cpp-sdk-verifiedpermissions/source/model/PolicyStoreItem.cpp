/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/verifiedpermissions/model/PolicyStoreItem.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace VerifiedPermissions
{
namespace Model
{

PolicyStoreItem::PolicyStoreItem() : 
    m_policyStoreIdHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_createdDateHasBeenSet(false),
    m_lastUpdatedDateHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
}

PolicyStoreItem::PolicyStoreItem(JsonView jsonValue) : 
    m_policyStoreIdHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_createdDateHasBeenSet(false),
    m_lastUpdatedDateHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
  *this = jsonValue;
}

PolicyStoreItem& PolicyStoreItem::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("policyStoreId"))
  {
    m_policyStoreId = jsonValue.GetString("policyStoreId");

    m_policyStoreIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("createdDate"))
  {
    m_createdDate = jsonValue.GetString("createdDate");

    m_createdDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastUpdatedDate"))
  {
    m_lastUpdatedDate = jsonValue.GetString("lastUpdatedDate");

    m_lastUpdatedDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

    m_descriptionHasBeenSet = true;
  }

  return *this;
}

JsonValue PolicyStoreItem::Jsonize() const
{
  JsonValue payload;

  if(m_policyStoreIdHasBeenSet)
  {
   payload.WithString("policyStoreId", m_policyStoreId);

  }

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_createdDateHasBeenSet)
  {
   payload.WithString("createdDate", m_createdDate.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_lastUpdatedDateHasBeenSet)
  {
   payload.WithString("lastUpdatedDate", m_lastUpdatedDate.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  return payload;
}

} // namespace Model
} // namespace VerifiedPermissions
} // namespace Aws
