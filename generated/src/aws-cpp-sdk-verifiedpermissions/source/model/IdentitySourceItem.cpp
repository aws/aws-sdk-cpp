/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/verifiedpermissions/model/IdentitySourceItem.h>
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

IdentitySourceItem::IdentitySourceItem() : 
    m_createdDateHasBeenSet(false),
    m_identitySourceIdHasBeenSet(false),
    m_lastUpdatedDateHasBeenSet(false),
    m_policyStoreIdHasBeenSet(false),
    m_principalEntityTypeHasBeenSet(false),
    m_configurationHasBeenSet(false)
{
}

IdentitySourceItem::IdentitySourceItem(JsonView jsonValue) : 
    m_createdDateHasBeenSet(false),
    m_identitySourceIdHasBeenSet(false),
    m_lastUpdatedDateHasBeenSet(false),
    m_policyStoreIdHasBeenSet(false),
    m_principalEntityTypeHasBeenSet(false),
    m_configurationHasBeenSet(false)
{
  *this = jsonValue;
}

IdentitySourceItem& IdentitySourceItem::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("createdDate"))
  {
    m_createdDate = jsonValue.GetString("createdDate");

    m_createdDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("identitySourceId"))
  {
    m_identitySourceId = jsonValue.GetString("identitySourceId");

    m_identitySourceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastUpdatedDate"))
  {
    m_lastUpdatedDate = jsonValue.GetString("lastUpdatedDate");

    m_lastUpdatedDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("policyStoreId"))
  {
    m_policyStoreId = jsonValue.GetString("policyStoreId");

    m_policyStoreIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("principalEntityType"))
  {
    m_principalEntityType = jsonValue.GetString("principalEntityType");

    m_principalEntityTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("configuration"))
  {
    m_configuration = jsonValue.GetObject("configuration");

    m_configurationHasBeenSet = true;
  }

  return *this;
}

JsonValue IdentitySourceItem::Jsonize() const
{
  JsonValue payload;

  if(m_createdDateHasBeenSet)
  {
   payload.WithString("createdDate", m_createdDate.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_identitySourceIdHasBeenSet)
  {
   payload.WithString("identitySourceId", m_identitySourceId);

  }

  if(m_lastUpdatedDateHasBeenSet)
  {
   payload.WithString("lastUpdatedDate", m_lastUpdatedDate.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_policyStoreIdHasBeenSet)
  {
   payload.WithString("policyStoreId", m_policyStoreId);

  }

  if(m_principalEntityTypeHasBeenSet)
  {
   payload.WithString("principalEntityType", m_principalEntityType);

  }

  if(m_configurationHasBeenSet)
  {
   payload.WithObject("configuration", m_configuration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace VerifiedPermissions
} // namespace Aws
