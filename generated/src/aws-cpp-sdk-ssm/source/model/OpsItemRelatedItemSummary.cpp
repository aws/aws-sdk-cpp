/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/OpsItemRelatedItemSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SSM
{
namespace Model
{

OpsItemRelatedItemSummary::OpsItemRelatedItemSummary() : 
    m_opsItemIdHasBeenSet(false),
    m_associationIdHasBeenSet(false),
    m_resourceTypeHasBeenSet(false),
    m_associationTypeHasBeenSet(false),
    m_resourceUriHasBeenSet(false),
    m_createdByHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_lastModifiedByHasBeenSet(false),
    m_lastModifiedTimeHasBeenSet(false)
{
}

OpsItemRelatedItemSummary::OpsItemRelatedItemSummary(JsonView jsonValue) : 
    m_opsItemIdHasBeenSet(false),
    m_associationIdHasBeenSet(false),
    m_resourceTypeHasBeenSet(false),
    m_associationTypeHasBeenSet(false),
    m_resourceUriHasBeenSet(false),
    m_createdByHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_lastModifiedByHasBeenSet(false),
    m_lastModifiedTimeHasBeenSet(false)
{
  *this = jsonValue;
}

OpsItemRelatedItemSummary& OpsItemRelatedItemSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("OpsItemId"))
  {
    m_opsItemId = jsonValue.GetString("OpsItemId");

    m_opsItemIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AssociationId"))
  {
    m_associationId = jsonValue.GetString("AssociationId");

    m_associationIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourceType"))
  {
    m_resourceType = jsonValue.GetString("ResourceType");

    m_resourceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AssociationType"))
  {
    m_associationType = jsonValue.GetString("AssociationType");

    m_associationTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourceUri"))
  {
    m_resourceUri = jsonValue.GetString("ResourceUri");

    m_resourceUriHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedBy"))
  {
    m_createdBy = jsonValue.GetObject("CreatedBy");

    m_createdByHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedTime"))
  {
    m_createdTime = jsonValue.GetDouble("CreatedTime");

    m_createdTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastModifiedBy"))
  {
    m_lastModifiedBy = jsonValue.GetObject("LastModifiedBy");

    m_lastModifiedByHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastModifiedTime"))
  {
    m_lastModifiedTime = jsonValue.GetDouble("LastModifiedTime");

    m_lastModifiedTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue OpsItemRelatedItemSummary::Jsonize() const
{
  JsonValue payload;

  if(m_opsItemIdHasBeenSet)
  {
   payload.WithString("OpsItemId", m_opsItemId);

  }

  if(m_associationIdHasBeenSet)
  {
   payload.WithString("AssociationId", m_associationId);

  }

  if(m_resourceTypeHasBeenSet)
  {
   payload.WithString("ResourceType", m_resourceType);

  }

  if(m_associationTypeHasBeenSet)
  {
   payload.WithString("AssociationType", m_associationType);

  }

  if(m_resourceUriHasBeenSet)
  {
   payload.WithString("ResourceUri", m_resourceUri);

  }

  if(m_createdByHasBeenSet)
  {
   payload.WithObject("CreatedBy", m_createdBy.Jsonize());

  }

  if(m_createdTimeHasBeenSet)
  {
   payload.WithDouble("CreatedTime", m_createdTime.SecondsWithMSPrecision());
  }

  if(m_lastModifiedByHasBeenSet)
  {
   payload.WithObject("LastModifiedBy", m_lastModifiedBy.Jsonize());

  }

  if(m_lastModifiedTimeHasBeenSet)
  {
   payload.WithDouble("LastModifiedTime", m_lastModifiedTime.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace SSM
} // namespace Aws
