/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/verifiedpermissions/model/PolicyTemplateItem.h>
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

PolicyTemplateItem::PolicyTemplateItem() : 
    m_policyStoreIdHasBeenSet(false),
    m_policyTemplateIdHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_createdDateHasBeenSet(false),
    m_lastUpdatedDateHasBeenSet(false)
{
}

PolicyTemplateItem::PolicyTemplateItem(JsonView jsonValue) : 
    m_policyStoreIdHasBeenSet(false),
    m_policyTemplateIdHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_createdDateHasBeenSet(false),
    m_lastUpdatedDateHasBeenSet(false)
{
  *this = jsonValue;
}

PolicyTemplateItem& PolicyTemplateItem::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("policyStoreId"))
  {
    m_policyStoreId = jsonValue.GetString("policyStoreId");

    m_policyStoreIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("policyTemplateId"))
  {
    m_policyTemplateId = jsonValue.GetString("policyTemplateId");

    m_policyTemplateIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

    m_descriptionHasBeenSet = true;
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

  return *this;
}

JsonValue PolicyTemplateItem::Jsonize() const
{
  JsonValue payload;

  if(m_policyStoreIdHasBeenSet)
  {
   payload.WithString("policyStoreId", m_policyStoreId);

  }

  if(m_policyTemplateIdHasBeenSet)
  {
   payload.WithString("policyTemplateId", m_policyTemplateId);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_createdDateHasBeenSet)
  {
   payload.WithString("createdDate", m_createdDate.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_lastUpdatedDateHasBeenSet)
  {
   payload.WithString("lastUpdatedDate", m_lastUpdatedDate.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  return payload;
}

} // namespace Model
} // namespace VerifiedPermissions
} // namespace Aws
