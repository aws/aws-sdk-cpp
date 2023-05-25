/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resourcegroupstaggingapi/model/ResourceTagMapping.h>
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

ResourceTagMapping::ResourceTagMapping() : 
    m_resourceARNHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_complianceDetailsHasBeenSet(false)
{
}

ResourceTagMapping::ResourceTagMapping(JsonView jsonValue) : 
    m_resourceARNHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_complianceDetailsHasBeenSet(false)
{
  *this = jsonValue;
}

ResourceTagMapping& ResourceTagMapping::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ResourceARN"))
  {
    m_resourceARN = jsonValue.GetString("ResourceARN");

    m_resourceARNHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Tags"))
  {
    Aws::Utils::Array<JsonView> tagsJsonList = jsonValue.GetArray("Tags");
    for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
    {
      m_tags.push_back(tagsJsonList[tagsIndex].AsObject());
    }
    m_tagsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ComplianceDetails"))
  {
    m_complianceDetails = jsonValue.GetObject("ComplianceDetails");

    m_complianceDetailsHasBeenSet = true;
  }

  return *this;
}

JsonValue ResourceTagMapping::Jsonize() const
{
  JsonValue payload;

  if(m_resourceARNHasBeenSet)
  {
   payload.WithString("ResourceARN", m_resourceARN);

  }

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("Tags", std::move(tagsJsonList));

  }

  if(m_complianceDetailsHasBeenSet)
  {
   payload.WithObject("ComplianceDetails", m_complianceDetails.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace ResourceGroupsTaggingAPI
} // namespace Aws
