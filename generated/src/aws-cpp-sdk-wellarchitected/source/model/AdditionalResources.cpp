/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wellarchitected/model/AdditionalResources.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WellArchitected
{
namespace Model
{

AdditionalResources::AdditionalResources() : 
    m_type(AdditionalResourceType::NOT_SET),
    m_typeHasBeenSet(false),
    m_contentHasBeenSet(false)
{
}

AdditionalResources::AdditionalResources(JsonView jsonValue) : 
    m_type(AdditionalResourceType::NOT_SET),
    m_typeHasBeenSet(false),
    m_contentHasBeenSet(false)
{
  *this = jsonValue;
}

AdditionalResources& AdditionalResources::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Type"))
  {
    m_type = AdditionalResourceTypeMapper::GetAdditionalResourceTypeForName(jsonValue.GetString("Type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Content"))
  {
    Aws::Utils::Array<JsonView> contentJsonList = jsonValue.GetArray("Content");
    for(unsigned contentIndex = 0; contentIndex < contentJsonList.GetLength(); ++contentIndex)
    {
      m_content.push_back(contentJsonList[contentIndex].AsObject());
    }
    m_contentHasBeenSet = true;
  }

  return *this;
}

JsonValue AdditionalResources::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", AdditionalResourceTypeMapper::GetNameForAdditionalResourceType(m_type));
  }

  if(m_contentHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> contentJsonList(m_content.size());
   for(unsigned contentIndex = 0; contentIndex < contentJsonList.GetLength(); ++contentIndex)
   {
     contentJsonList[contentIndex].AsObject(m_content[contentIndex].Jsonize());
   }
   payload.WithArray("Content", std::move(contentJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
