/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/SrtSettings.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaLive
{
namespace Model
{

SrtSettings::SrtSettings(JsonView jsonValue)
{
  *this = jsonValue;
}

SrtSettings& SrtSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("srtCallerSources"))
  {
    Aws::Utils::Array<JsonView> srtCallerSourcesJsonList = jsonValue.GetArray("srtCallerSources");
    for(unsigned srtCallerSourcesIndex = 0; srtCallerSourcesIndex < srtCallerSourcesJsonList.GetLength(); ++srtCallerSourcesIndex)
    {
      m_srtCallerSources.push_back(srtCallerSourcesJsonList[srtCallerSourcesIndex].AsObject());
    }
    m_srtCallerSourcesHasBeenSet = true;
  }
  return *this;
}

JsonValue SrtSettings::Jsonize() const
{
  JsonValue payload;

  if(m_srtCallerSourcesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> srtCallerSourcesJsonList(m_srtCallerSources.size());
   for(unsigned srtCallerSourcesIndex = 0; srtCallerSourcesIndex < srtCallerSourcesJsonList.GetLength(); ++srtCallerSourcesIndex)
   {
     srtCallerSourcesJsonList[srtCallerSourcesIndex].AsObject(m_srtCallerSources[srtCallerSourcesIndex].Jsonize());
   }
   payload.WithArray("srtCallerSources", std::move(srtCallerSourcesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
