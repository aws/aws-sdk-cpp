/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces-web/model/EventFilter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WorkSpacesWeb
{
namespace Model
{

EventFilter::EventFilter(JsonView jsonValue)
{
  *this = jsonValue;
}

EventFilter& EventFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("all"))
  {
    m_all = jsonValue.GetObject("all");
    m_allHasBeenSet = true;
  }
  if(jsonValue.ValueExists("include"))
  {
    Aws::Utils::Array<JsonView> includeJsonList = jsonValue.GetArray("include");
    for(unsigned includeIndex = 0; includeIndex < includeJsonList.GetLength(); ++includeIndex)
    {
      m_include.push_back(EventMapper::GetEventForName(includeJsonList[includeIndex].AsString()));
    }
    m_includeHasBeenSet = true;
  }
  return *this;
}

JsonValue EventFilter::Jsonize() const
{
  JsonValue payload;

  if(m_allHasBeenSet)
  {
   payload.WithObject("all", m_all.Jsonize());

  }

  if(m_includeHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> includeJsonList(m_include.size());
   for(unsigned includeIndex = 0; includeIndex < includeJsonList.GetLength(); ++includeIndex)
   {
     includeJsonList[includeIndex].AsString(EventMapper::GetNameForEvent(m_include[includeIndex]));
   }
   payload.WithArray("include", std::move(includeJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace WorkSpacesWeb
} // namespace Aws
