/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/AudioSelectorGroup.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaConvert
{
namespace Model
{

AudioSelectorGroup::AudioSelectorGroup() : 
    m_audioSelectorNamesHasBeenSet(false)
{
}

AudioSelectorGroup::AudioSelectorGroup(JsonView jsonValue) : 
    m_audioSelectorNamesHasBeenSet(false)
{
  *this = jsonValue;
}

AudioSelectorGroup& AudioSelectorGroup::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("audioSelectorNames"))
  {
    Aws::Utils::Array<JsonView> audioSelectorNamesJsonList = jsonValue.GetArray("audioSelectorNames");
    for(unsigned audioSelectorNamesIndex = 0; audioSelectorNamesIndex < audioSelectorNamesJsonList.GetLength(); ++audioSelectorNamesIndex)
    {
      m_audioSelectorNames.push_back(audioSelectorNamesJsonList[audioSelectorNamesIndex].AsString());
    }
    m_audioSelectorNamesHasBeenSet = true;
  }

  return *this;
}

JsonValue AudioSelectorGroup::Jsonize() const
{
  JsonValue payload;

  if(m_audioSelectorNamesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> audioSelectorNamesJsonList(m_audioSelectorNames.size());
   for(unsigned audioSelectorNamesIndex = 0; audioSelectorNamesIndex < audioSelectorNamesJsonList.GetLength(); ++audioSelectorNamesIndex)
   {
     audioSelectorNamesJsonList[audioSelectorNamesIndex].AsString(m_audioSelectorNames[audioSelectorNamesIndex]);
   }
   payload.WithArray("audioSelectorNames", std::move(audioSelectorNamesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
