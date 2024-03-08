/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/servicecatalog-appregistry/model/ResourceInfo.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AppRegistry
{
namespace Model
{

ResourceInfo::ResourceInfo() : 
    m_nameHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_resourceType(ResourceType::NOT_SET),
    m_resourceTypeHasBeenSet(false),
    m_resourceDetailsHasBeenSet(false),
    m_optionsHasBeenSet(false)
{
}

ResourceInfo::ResourceInfo(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_resourceType(ResourceType::NOT_SET),
    m_resourceTypeHasBeenSet(false),
    m_resourceDetailsHasBeenSet(false),
    m_optionsHasBeenSet(false)
{
  *this = jsonValue;
}

ResourceInfo& ResourceInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("resourceType"))
  {
    m_resourceType = ResourceTypeMapper::GetResourceTypeForName(jsonValue.GetString("resourceType"));

    m_resourceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("resourceDetails"))
  {
    m_resourceDetails = jsonValue.GetObject("resourceDetails");

    m_resourceDetailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("options"))
  {
    Aws::Utils::Array<JsonView> optionsJsonList = jsonValue.GetArray("options");
    for(unsigned optionsIndex = 0; optionsIndex < optionsJsonList.GetLength(); ++optionsIndex)
    {
      m_options.push_back(AssociationOptionMapper::GetAssociationOptionForName(optionsJsonList[optionsIndex].AsString()));
    }
    m_optionsHasBeenSet = true;
  }

  return *this;
}

JsonValue ResourceInfo::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_resourceTypeHasBeenSet)
  {
   payload.WithString("resourceType", ResourceTypeMapper::GetNameForResourceType(m_resourceType));
  }

  if(m_resourceDetailsHasBeenSet)
  {
   payload.WithObject("resourceDetails", m_resourceDetails.Jsonize());

  }

  if(m_optionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> optionsJsonList(m_options.size());
   for(unsigned optionsIndex = 0; optionsIndex < optionsJsonList.GetLength(); ++optionsIndex)
   {
     optionsJsonList[optionsIndex].AsString(AssociationOptionMapper::GetNameForAssociationOption(m_options[optionsIndex]));
   }
   payload.WithArray("options", std::move(optionsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace AppRegistry
} // namespace Aws
