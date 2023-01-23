/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ram/model/ResourceShareAssociation.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace RAM
{
namespace Model
{

ResourceShareAssociation::ResourceShareAssociation() : 
    m_resourceShareArnHasBeenSet(false),
    m_resourceShareNameHasBeenSet(false),
    m_associatedEntityHasBeenSet(false),
    m_associationType(ResourceShareAssociationType::NOT_SET),
    m_associationTypeHasBeenSet(false),
    m_status(ResourceShareAssociationStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_statusMessageHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_lastUpdatedTimeHasBeenSet(false),
    m_external(false),
    m_externalHasBeenSet(false)
{
}

ResourceShareAssociation::ResourceShareAssociation(JsonView jsonValue) : 
    m_resourceShareArnHasBeenSet(false),
    m_resourceShareNameHasBeenSet(false),
    m_associatedEntityHasBeenSet(false),
    m_associationType(ResourceShareAssociationType::NOT_SET),
    m_associationTypeHasBeenSet(false),
    m_status(ResourceShareAssociationStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_statusMessageHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_lastUpdatedTimeHasBeenSet(false),
    m_external(false),
    m_externalHasBeenSet(false)
{
  *this = jsonValue;
}

ResourceShareAssociation& ResourceShareAssociation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("resourceShareArn"))
  {
    m_resourceShareArn = jsonValue.GetString("resourceShareArn");

    m_resourceShareArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("resourceShareName"))
  {
    m_resourceShareName = jsonValue.GetString("resourceShareName");

    m_resourceShareNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("associatedEntity"))
  {
    m_associatedEntity = jsonValue.GetString("associatedEntity");

    m_associatedEntityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("associationType"))
  {
    m_associationType = ResourceShareAssociationTypeMapper::GetResourceShareAssociationTypeForName(jsonValue.GetString("associationType"));

    m_associationTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = ResourceShareAssociationStatusMapper::GetResourceShareAssociationStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("statusMessage"))
  {
    m_statusMessage = jsonValue.GetString("statusMessage");

    m_statusMessageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("creationTime"))
  {
    m_creationTime = jsonValue.GetDouble("creationTime");

    m_creationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastUpdatedTime"))
  {
    m_lastUpdatedTime = jsonValue.GetDouble("lastUpdatedTime");

    m_lastUpdatedTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("external"))
  {
    m_external = jsonValue.GetBool("external");

    m_externalHasBeenSet = true;
  }

  return *this;
}

JsonValue ResourceShareAssociation::Jsonize() const
{
  JsonValue payload;

  if(m_resourceShareArnHasBeenSet)
  {
   payload.WithString("resourceShareArn", m_resourceShareArn);

  }

  if(m_resourceShareNameHasBeenSet)
  {
   payload.WithString("resourceShareName", m_resourceShareName);

  }

  if(m_associatedEntityHasBeenSet)
  {
   payload.WithString("associatedEntity", m_associatedEntity);

  }

  if(m_associationTypeHasBeenSet)
  {
   payload.WithString("associationType", ResourceShareAssociationTypeMapper::GetNameForResourceShareAssociationType(m_associationType));
  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", ResourceShareAssociationStatusMapper::GetNameForResourceShareAssociationStatus(m_status));
  }

  if(m_statusMessageHasBeenSet)
  {
   payload.WithString("statusMessage", m_statusMessage);

  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithDouble("creationTime", m_creationTime.SecondsWithMSPrecision());
  }

  if(m_lastUpdatedTimeHasBeenSet)
  {
   payload.WithDouble("lastUpdatedTime", m_lastUpdatedTime.SecondsWithMSPrecision());
  }

  if(m_externalHasBeenSet)
  {
   payload.WithBool("external", m_external);

  }

  return payload;
}

} // namespace Model
} // namespace RAM
} // namespace Aws
