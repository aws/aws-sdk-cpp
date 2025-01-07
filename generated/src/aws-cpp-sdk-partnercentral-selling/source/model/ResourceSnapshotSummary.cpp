﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/partnercentral-selling/model/ResourceSnapshotSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace PartnerCentralSelling
{
namespace Model
{

ResourceSnapshotSummary::ResourceSnapshotSummary() : 
    m_arnHasBeenSet(false),
    m_createdByHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_resourceSnapshotTemplateNameHasBeenSet(false),
    m_resourceType(ResourceType::NOT_SET),
    m_resourceTypeHasBeenSet(false),
    m_revision(0),
    m_revisionHasBeenSet(false)
{
}

ResourceSnapshotSummary::ResourceSnapshotSummary(JsonView jsonValue)
  : ResourceSnapshotSummary()
{
  *this = jsonValue;
}

ResourceSnapshotSummary& ResourceSnapshotSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedBy"))
  {
    m_createdBy = jsonValue.GetString("CreatedBy");

    m_createdByHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourceId"))
  {
    m_resourceId = jsonValue.GetString("ResourceId");

    m_resourceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourceSnapshotTemplateName"))
  {
    m_resourceSnapshotTemplateName = jsonValue.GetString("ResourceSnapshotTemplateName");

    m_resourceSnapshotTemplateNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourceType"))
  {
    m_resourceType = ResourceTypeMapper::GetResourceTypeForName(jsonValue.GetString("ResourceType"));

    m_resourceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Revision"))
  {
    m_revision = jsonValue.GetInteger("Revision");

    m_revisionHasBeenSet = true;
  }

  return *this;
}

JsonValue ResourceSnapshotSummary::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("Arn", m_arn);

  }

  if(m_createdByHasBeenSet)
  {
   payload.WithString("CreatedBy", m_createdBy);

  }

  if(m_resourceIdHasBeenSet)
  {
   payload.WithString("ResourceId", m_resourceId);

  }

  if(m_resourceSnapshotTemplateNameHasBeenSet)
  {
   payload.WithString("ResourceSnapshotTemplateName", m_resourceSnapshotTemplateName);

  }

  if(m_resourceTypeHasBeenSet)
  {
   payload.WithString("ResourceType", ResourceTypeMapper::GetNameForResourceType(m_resourceType));
  }

  if(m_revisionHasBeenSet)
  {
   payload.WithInteger("Revision", m_revision);

  }

  return payload;
}

} // namespace Model
} // namespace PartnerCentralSelling
} // namespace Aws
