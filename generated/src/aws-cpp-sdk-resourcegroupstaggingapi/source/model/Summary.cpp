/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resourcegroupstaggingapi/model/Summary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ResourceGroupsTaggingAPI
{
namespace Model
{

Summary::Summary() : 
    m_lastUpdatedHasBeenSet(false),
    m_targetIdHasBeenSet(false),
    m_targetIdType(TargetIdType::NOT_SET),
    m_targetIdTypeHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_resourceTypeHasBeenSet(false),
    m_nonCompliantResources(0),
    m_nonCompliantResourcesHasBeenSet(false)
{
}

Summary::Summary(JsonView jsonValue) : 
    m_lastUpdatedHasBeenSet(false),
    m_targetIdHasBeenSet(false),
    m_targetIdType(TargetIdType::NOT_SET),
    m_targetIdTypeHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_resourceTypeHasBeenSet(false),
    m_nonCompliantResources(0),
    m_nonCompliantResourcesHasBeenSet(false)
{
  *this = jsonValue;
}

Summary& Summary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("LastUpdated"))
  {
    m_lastUpdated = jsonValue.GetString("LastUpdated");

    m_lastUpdatedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TargetId"))
  {
    m_targetId = jsonValue.GetString("TargetId");

    m_targetIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TargetIdType"))
  {
    m_targetIdType = TargetIdTypeMapper::GetTargetIdTypeForName(jsonValue.GetString("TargetIdType"));

    m_targetIdTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Region"))
  {
    m_region = jsonValue.GetString("Region");

    m_regionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourceType"))
  {
    m_resourceType = jsonValue.GetString("ResourceType");

    m_resourceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NonCompliantResources"))
  {
    m_nonCompliantResources = jsonValue.GetInt64("NonCompliantResources");

    m_nonCompliantResourcesHasBeenSet = true;
  }

  return *this;
}

JsonValue Summary::Jsonize() const
{
  JsonValue payload;

  if(m_lastUpdatedHasBeenSet)
  {
   payload.WithString("LastUpdated", m_lastUpdated);

  }

  if(m_targetIdHasBeenSet)
  {
   payload.WithString("TargetId", m_targetId);

  }

  if(m_targetIdTypeHasBeenSet)
  {
   payload.WithString("TargetIdType", TargetIdTypeMapper::GetNameForTargetIdType(m_targetIdType));
  }

  if(m_regionHasBeenSet)
  {
   payload.WithString("Region", m_region);

  }

  if(m_resourceTypeHasBeenSet)
  {
   payload.WithString("ResourceType", m_resourceType);

  }

  if(m_nonCompliantResourcesHasBeenSet)
  {
   payload.WithInt64("NonCompliantResources", m_nonCompliantResources);

  }

  return payload;
}

} // namespace Model
} // namespace ResourceGroupsTaggingAPI
} // namespace Aws
