/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pca-connector-ad/model/AccessControlEntry.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace PcaConnectorAd
{
namespace Model
{

AccessControlEntry::AccessControlEntry() : 
    m_accessRightsHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_groupDisplayNameHasBeenSet(false),
    m_groupSecurityIdentifierHasBeenSet(false),
    m_templateArnHasBeenSet(false),
    m_updatedAtHasBeenSet(false)
{
}

AccessControlEntry::AccessControlEntry(JsonView jsonValue) : 
    m_accessRightsHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_groupDisplayNameHasBeenSet(false),
    m_groupSecurityIdentifierHasBeenSet(false),
    m_templateArnHasBeenSet(false),
    m_updatedAtHasBeenSet(false)
{
  *this = jsonValue;
}

AccessControlEntry& AccessControlEntry::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AccessRights"))
  {
    m_accessRights = jsonValue.GetObject("AccessRights");

    m_accessRightsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedAt"))
  {
    m_createdAt = jsonValue.GetDouble("CreatedAt");

    m_createdAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("GroupDisplayName"))
  {
    m_groupDisplayName = jsonValue.GetString("GroupDisplayName");

    m_groupDisplayNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("GroupSecurityIdentifier"))
  {
    m_groupSecurityIdentifier = jsonValue.GetString("GroupSecurityIdentifier");

    m_groupSecurityIdentifierHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TemplateArn"))
  {
    m_templateArn = jsonValue.GetString("TemplateArn");

    m_templateArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UpdatedAt"))
  {
    m_updatedAt = jsonValue.GetDouble("UpdatedAt");

    m_updatedAtHasBeenSet = true;
  }

  return *this;
}

JsonValue AccessControlEntry::Jsonize() const
{
  JsonValue payload;

  if(m_accessRightsHasBeenSet)
  {
   payload.WithObject("AccessRights", m_accessRights.Jsonize());

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithDouble("CreatedAt", m_createdAt.SecondsWithMSPrecision());
  }

  if(m_groupDisplayNameHasBeenSet)
  {
   payload.WithString("GroupDisplayName", m_groupDisplayName);

  }

  if(m_groupSecurityIdentifierHasBeenSet)
  {
   payload.WithString("GroupSecurityIdentifier", m_groupSecurityIdentifier);

  }

  if(m_templateArnHasBeenSet)
  {
   payload.WithString("TemplateArn", m_templateArn);

  }

  if(m_updatedAtHasBeenSet)
  {
   payload.WithDouble("UpdatedAt", m_updatedAt.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace PcaConnectorAd
} // namespace Aws
