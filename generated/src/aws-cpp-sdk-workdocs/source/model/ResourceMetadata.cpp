/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workdocs/model/ResourceMetadata.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WorkDocs
{
namespace Model
{

ResourceMetadata::ResourceMetadata() : 
    m_type(ResourceType::NOT_SET),
    m_typeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_originalNameHasBeenSet(false),
    m_idHasBeenSet(false),
    m_versionIdHasBeenSet(false),
    m_ownerHasBeenSet(false),
    m_parentIdHasBeenSet(false)
{
}

ResourceMetadata::ResourceMetadata(JsonView jsonValue) : 
    m_type(ResourceType::NOT_SET),
    m_typeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_originalNameHasBeenSet(false),
    m_idHasBeenSet(false),
    m_versionIdHasBeenSet(false),
    m_ownerHasBeenSet(false),
    m_parentIdHasBeenSet(false)
{
  *this = jsonValue;
}

ResourceMetadata& ResourceMetadata::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Type"))
  {
    m_type = ResourceTypeMapper::GetResourceTypeForName(jsonValue.GetString("Type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OriginalName"))
  {
    m_originalName = jsonValue.GetString("OriginalName");

    m_originalNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VersionId"))
  {
    m_versionId = jsonValue.GetString("VersionId");

    m_versionIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Owner"))
  {
    m_owner = jsonValue.GetObject("Owner");

    m_ownerHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ParentId"))
  {
    m_parentId = jsonValue.GetString("ParentId");

    m_parentIdHasBeenSet = true;
  }

  return *this;
}

JsonValue ResourceMetadata::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", ResourceTypeMapper::GetNameForResourceType(m_type));
  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_originalNameHasBeenSet)
  {
   payload.WithString("OriginalName", m_originalName);

  }

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_versionIdHasBeenSet)
  {
   payload.WithString("VersionId", m_versionId);

  }

  if(m_ownerHasBeenSet)
  {
   payload.WithObject("Owner", m_owner.Jsonize());

  }

  if(m_parentIdHasBeenSet)
  {
   payload.WithString("ParentId", m_parentId);

  }

  return payload;
}

} // namespace Model
} // namespace WorkDocs
} // namespace Aws
