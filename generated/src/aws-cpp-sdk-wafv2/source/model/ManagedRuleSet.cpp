/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wafv2/model/ManagedRuleSet.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WAFV2
{
namespace Model
{

ManagedRuleSet::ManagedRuleSet() : 
    m_nameHasBeenSet(false),
    m_idHasBeenSet(false),
    m_aRNHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_publishedVersionsHasBeenSet(false),
    m_recommendedVersionHasBeenSet(false),
    m_labelNamespaceHasBeenSet(false)
{
}

ManagedRuleSet::ManagedRuleSet(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_idHasBeenSet(false),
    m_aRNHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_publishedVersionsHasBeenSet(false),
    m_recommendedVersionHasBeenSet(false),
    m_labelNamespaceHasBeenSet(false)
{
  *this = jsonValue;
}

ManagedRuleSet& ManagedRuleSet::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ARN"))
  {
    m_aRN = jsonValue.GetString("ARN");

    m_aRNHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PublishedVersions"))
  {
    Aws::Map<Aws::String, JsonView> publishedVersionsJsonMap = jsonValue.GetObject("PublishedVersions").GetAllObjects();
    for(auto& publishedVersionsItem : publishedVersionsJsonMap)
    {
      m_publishedVersions[publishedVersionsItem.first] = publishedVersionsItem.second.AsObject();
    }
    m_publishedVersionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RecommendedVersion"))
  {
    m_recommendedVersion = jsonValue.GetString("RecommendedVersion");

    m_recommendedVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LabelNamespace"))
  {
    m_labelNamespace = jsonValue.GetString("LabelNamespace");

    m_labelNamespaceHasBeenSet = true;
  }

  return *this;
}

JsonValue ManagedRuleSet::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_aRNHasBeenSet)
  {
   payload.WithString("ARN", m_aRN);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_publishedVersionsHasBeenSet)
  {
   JsonValue publishedVersionsJsonMap;
   for(auto& publishedVersionsItem : m_publishedVersions)
   {
     publishedVersionsJsonMap.WithObject(publishedVersionsItem.first, publishedVersionsItem.second.Jsonize());
   }
   payload.WithObject("PublishedVersions", std::move(publishedVersionsJsonMap));

  }

  if(m_recommendedVersionHasBeenSet)
  {
   payload.WithString("RecommendedVersion", m_recommendedVersion);

  }

  if(m_labelNamespaceHasBeenSet)
  {
   payload.WithString("LabelNamespace", m_labelNamespace);

  }

  return payload;
}

} // namespace Model
} // namespace WAFV2
} // namespace Aws
