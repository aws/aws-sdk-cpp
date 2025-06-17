/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/ResourceResult.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

ResourceResult::ResourceResult(JsonView jsonValue)
{
  *this = jsonValue;
}

ResourceResult& ResourceResult::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ResourceArn"))
  {
    m_resourceArn = jsonValue.GetString("ResourceArn");
    m_resourceArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ResourceId"))
  {
    m_resourceId = jsonValue.GetString("ResourceId");
    m_resourceIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AccountId"))
  {
    m_accountId = jsonValue.GetString("AccountId");
    m_accountIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Region"))
  {
    m_region = jsonValue.GetString("Region");
    m_regionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ResourceCategory"))
  {
    m_resourceCategory = ResourceCategoryMapper::GetResourceCategoryForName(jsonValue.GetString("ResourceCategory"));
    m_resourceCategoryHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ResourceType"))
  {
    m_resourceType = jsonValue.GetString("ResourceType");
    m_resourceTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ResourceName"))
  {
    m_resourceName = jsonValue.GetString("ResourceName");
    m_resourceNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ResourceCreationTimeDt"))
  {
    m_resourceCreationTimeDt = jsonValue.GetString("ResourceCreationTimeDt");
    m_resourceCreationTimeDtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ResourceDetailCaptureTimeDt"))
  {
    m_resourceDetailCaptureTimeDt = jsonValue.GetString("ResourceDetailCaptureTimeDt");
    m_resourceDetailCaptureTimeDtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("FindingsSummary"))
  {
    Aws::Utils::Array<JsonView> findingsSummaryJsonList = jsonValue.GetArray("FindingsSummary");
    for(unsigned findingsSummaryIndex = 0; findingsSummaryIndex < findingsSummaryJsonList.GetLength(); ++findingsSummaryIndex)
    {
      m_findingsSummary.push_back(findingsSummaryJsonList[findingsSummaryIndex].AsObject());
    }
    m_findingsSummaryHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ResourceTags"))
  {
    Aws::Utils::Array<JsonView> resourceTagsJsonList = jsonValue.GetArray("ResourceTags");
    for(unsigned resourceTagsIndex = 0; resourceTagsIndex < resourceTagsJsonList.GetLength(); ++resourceTagsIndex)
    {
      m_resourceTags.push_back(resourceTagsJsonList[resourceTagsIndex].AsObject());
    }
    m_resourceTagsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ResourceConfig"))
  {
    m_resourceConfig = jsonValue.GetObject("ResourceConfig");
    m_resourceConfigHasBeenSet = true;
  }
  return *this;
}

JsonValue ResourceResult::Jsonize() const
{
  JsonValue payload;

  if(m_resourceArnHasBeenSet)
  {
   payload.WithString("ResourceArn", m_resourceArn);

  }

  if(m_resourceIdHasBeenSet)
  {
   payload.WithString("ResourceId", m_resourceId);

  }

  if(m_accountIdHasBeenSet)
  {
   payload.WithString("AccountId", m_accountId);

  }

  if(m_regionHasBeenSet)
  {
   payload.WithString("Region", m_region);

  }

  if(m_resourceCategoryHasBeenSet)
  {
   payload.WithString("ResourceCategory", ResourceCategoryMapper::GetNameForResourceCategory(m_resourceCategory));
  }

  if(m_resourceTypeHasBeenSet)
  {
   payload.WithString("ResourceType", m_resourceType);

  }

  if(m_resourceNameHasBeenSet)
  {
   payload.WithString("ResourceName", m_resourceName);

  }

  if(m_resourceCreationTimeDtHasBeenSet)
  {
   payload.WithString("ResourceCreationTimeDt", m_resourceCreationTimeDt);

  }

  if(m_resourceDetailCaptureTimeDtHasBeenSet)
  {
   payload.WithString("ResourceDetailCaptureTimeDt", m_resourceDetailCaptureTimeDt);

  }

  if(m_findingsSummaryHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> findingsSummaryJsonList(m_findingsSummary.size());
   for(unsigned findingsSummaryIndex = 0; findingsSummaryIndex < findingsSummaryJsonList.GetLength(); ++findingsSummaryIndex)
   {
     findingsSummaryJsonList[findingsSummaryIndex].AsObject(m_findingsSummary[findingsSummaryIndex].Jsonize());
   }
   payload.WithArray("FindingsSummary", std::move(findingsSummaryJsonList));

  }

  if(m_resourceTagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> resourceTagsJsonList(m_resourceTags.size());
   for(unsigned resourceTagsIndex = 0; resourceTagsIndex < resourceTagsJsonList.GetLength(); ++resourceTagsIndex)
   {
     resourceTagsJsonList[resourceTagsIndex].AsObject(m_resourceTags[resourceTagsIndex].Jsonize());
   }
   payload.WithArray("ResourceTags", std::move(resourceTagsJsonList));

  }

  if(m_resourceConfigHasBeenSet)
  {
    if(!m_resourceConfig.View().IsNull())
    {
       payload.WithObject("ResourceConfig", JsonValue(m_resourceConfig.View()));
    }
  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
