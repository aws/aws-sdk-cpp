/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediapackagev2/model/Scte.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace mediapackagev2
{
namespace Model
{

Scte::Scte() : 
    m_scteFilterHasBeenSet(false)
{
}

Scte::Scte(JsonView jsonValue) : 
    m_scteFilterHasBeenSet(false)
{
  *this = jsonValue;
}

Scte& Scte::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ScteFilter"))
  {
    Aws::Utils::Array<JsonView> scteFilterJsonList = jsonValue.GetArray("ScteFilter");
    for(unsigned scteFilterIndex = 0; scteFilterIndex < scteFilterJsonList.GetLength(); ++scteFilterIndex)
    {
      m_scteFilter.push_back(ScteFilterMapper::GetScteFilterForName(scteFilterJsonList[scteFilterIndex].AsString()));
    }
    m_scteFilterHasBeenSet = true;
  }

  return *this;
}

JsonValue Scte::Jsonize() const
{
  JsonValue payload;

  if(m_scteFilterHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> scteFilterJsonList(m_scteFilter.size());
   for(unsigned scteFilterIndex = 0; scteFilterIndex < scteFilterJsonList.GetLength(); ++scteFilterIndex)
   {
     scteFilterJsonList[scteFilterIndex].AsString(ScteFilterMapper::GetNameForScteFilter(m_scteFilter[scteFilterIndex]));
   }
   payload.WithArray("ScteFilter", std::move(scteFilterJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace mediapackagev2
} // namespace Aws
