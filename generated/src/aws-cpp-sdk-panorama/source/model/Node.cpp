/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/panorama/model/Node.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Panorama
{
namespace Model
{

Node::Node() : 
    m_category(NodeCategory::NOT_SET),
    m_categoryHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_nodeIdHasBeenSet(false),
    m_ownerAccountHasBeenSet(false),
    m_packageArnHasBeenSet(false),
    m_packageIdHasBeenSet(false),
    m_packageNameHasBeenSet(false),
    m_packageVersionHasBeenSet(false),
    m_patchVersionHasBeenSet(false)
{
}

Node::Node(JsonView jsonValue) : 
    m_category(NodeCategory::NOT_SET),
    m_categoryHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_nodeIdHasBeenSet(false),
    m_ownerAccountHasBeenSet(false),
    m_packageArnHasBeenSet(false),
    m_packageIdHasBeenSet(false),
    m_packageNameHasBeenSet(false),
    m_packageVersionHasBeenSet(false),
    m_patchVersionHasBeenSet(false)
{
  *this = jsonValue;
}

Node& Node::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Category"))
  {
    m_category = NodeCategoryMapper::GetNodeCategoryForName(jsonValue.GetString("Category"));

    m_categoryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedTime"))
  {
    m_createdTime = jsonValue.GetDouble("CreatedTime");

    m_createdTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NodeId"))
  {
    m_nodeId = jsonValue.GetString("NodeId");

    m_nodeIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OwnerAccount"))
  {
    m_ownerAccount = jsonValue.GetString("OwnerAccount");

    m_ownerAccountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PackageArn"))
  {
    m_packageArn = jsonValue.GetString("PackageArn");

    m_packageArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PackageId"))
  {
    m_packageId = jsonValue.GetString("PackageId");

    m_packageIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PackageName"))
  {
    m_packageName = jsonValue.GetString("PackageName");

    m_packageNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PackageVersion"))
  {
    m_packageVersion = jsonValue.GetString("PackageVersion");

    m_packageVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PatchVersion"))
  {
    m_patchVersion = jsonValue.GetString("PatchVersion");

    m_patchVersionHasBeenSet = true;
  }

  return *this;
}

JsonValue Node::Jsonize() const
{
  JsonValue payload;

  if(m_categoryHasBeenSet)
  {
   payload.WithString("Category", NodeCategoryMapper::GetNameForNodeCategory(m_category));
  }

  if(m_createdTimeHasBeenSet)
  {
   payload.WithDouble("CreatedTime", m_createdTime.SecondsWithMSPrecision());
  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_nodeIdHasBeenSet)
  {
   payload.WithString("NodeId", m_nodeId);

  }

  if(m_ownerAccountHasBeenSet)
  {
   payload.WithString("OwnerAccount", m_ownerAccount);

  }

  if(m_packageArnHasBeenSet)
  {
   payload.WithString("PackageArn", m_packageArn);

  }

  if(m_packageIdHasBeenSet)
  {
   payload.WithString("PackageId", m_packageId);

  }

  if(m_packageNameHasBeenSet)
  {
   payload.WithString("PackageName", m_packageName);

  }

  if(m_packageVersionHasBeenSet)
  {
   payload.WithString("PackageVersion", m_packageVersion);

  }

  if(m_patchVersionHasBeenSet)
  {
   payload.WithString("PatchVersion", m_patchVersion);

  }

  return payload;
}

} // namespace Model
} // namespace Panorama
} // namespace Aws
