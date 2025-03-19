/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/TopicTemplate.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QuickSight
{
namespace Model
{

TopicTemplate::TopicTemplate(JsonView jsonValue)
{
  *this = jsonValue;
}

TopicTemplate& TopicTemplate::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TemplateType"))
  {
    m_templateType = jsonValue.GetString("TemplateType");
    m_templateTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Slots"))
  {
    Aws::Utils::Array<JsonView> slotsJsonList = jsonValue.GetArray("Slots");
    for(unsigned slotsIndex = 0; slotsIndex < slotsJsonList.GetLength(); ++slotsIndex)
    {
      m_slots.push_back(slotsJsonList[slotsIndex].AsObject());
    }
    m_slotsHasBeenSet = true;
  }
  return *this;
}

JsonValue TopicTemplate::Jsonize() const
{
  JsonValue payload;

  if(m_templateTypeHasBeenSet)
  {
   payload.WithString("TemplateType", m_templateType);

  }

  if(m_slotsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> slotsJsonList(m_slots.size());
   for(unsigned slotsIndex = 0; slotsIndex < slotsJsonList.GetLength(); ++slotsIndex)
   {
     slotsJsonList[slotsIndex].AsObject(m_slots[slotsIndex].Jsonize());
   }
   payload.WithArray("Slots", std::move(slotsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
