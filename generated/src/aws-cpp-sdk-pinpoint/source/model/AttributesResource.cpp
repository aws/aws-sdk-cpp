/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint/model/AttributesResource.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Pinpoint
{
namespace Model
{

AttributesResource::AttributesResource() : 
    m_applicationIdHasBeenSet(false),
    m_attributeTypeHasBeenSet(false),
    m_attributesHasBeenSet(false)
{
}

AttributesResource::AttributesResource(JsonView jsonValue) : 
    m_applicationIdHasBeenSet(false),
    m_attributeTypeHasBeenSet(false),
    m_attributesHasBeenSet(false)
{
  *this = jsonValue;
}

AttributesResource& AttributesResource::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ApplicationId"))
  {
    m_applicationId = jsonValue.GetString("ApplicationId");

    m_applicationIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AttributeType"))
  {
    m_attributeType = jsonValue.GetString("AttributeType");

    m_attributeTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Attributes"))
  {
    Aws::Utils::Array<JsonView> attributesJsonList = jsonValue.GetArray("Attributes");
    for(unsigned attributesIndex = 0; attributesIndex < attributesJsonList.GetLength(); ++attributesIndex)
    {
      m_attributes.push_back(attributesJsonList[attributesIndex].AsString());
    }
    m_attributesHasBeenSet = true;
  }

  return *this;
}

JsonValue AttributesResource::Jsonize() const
{
  JsonValue payload;

  if(m_applicationIdHasBeenSet)
  {
   payload.WithString("ApplicationId", m_applicationId);

  }

  if(m_attributeTypeHasBeenSet)
  {
   payload.WithString("AttributeType", m_attributeType);

  }

  if(m_attributesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> attributesJsonList(m_attributes.size());
   for(unsigned attributesIndex = 0; attributesIndex < attributesJsonList.GetLength(); ++attributesIndex)
   {
     attributesJsonList[attributesIndex].AsString(m_attributes[attributesIndex]);
   }
   payload.WithArray("Attributes", std::move(attributesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
