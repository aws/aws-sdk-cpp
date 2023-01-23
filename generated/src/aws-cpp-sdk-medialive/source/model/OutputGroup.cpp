/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/OutputGroup.h>
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

OutputGroup::OutputGroup() : 
    m_nameHasBeenSet(false),
    m_outputGroupSettingsHasBeenSet(false),
    m_outputsHasBeenSet(false)
{
}

OutputGroup::OutputGroup(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_outputGroupSettingsHasBeenSet(false),
    m_outputsHasBeenSet(false)
{
  *this = jsonValue;
}

OutputGroup& OutputGroup::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("outputGroupSettings"))
  {
    m_outputGroupSettings = jsonValue.GetObject("outputGroupSettings");

    m_outputGroupSettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("outputs"))
  {
    Aws::Utils::Array<JsonView> outputsJsonList = jsonValue.GetArray("outputs");
    for(unsigned outputsIndex = 0; outputsIndex < outputsJsonList.GetLength(); ++outputsIndex)
    {
      m_outputs.push_back(outputsJsonList[outputsIndex].AsObject());
    }
    m_outputsHasBeenSet = true;
  }

  return *this;
}

JsonValue OutputGroup::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_outputGroupSettingsHasBeenSet)
  {
   payload.WithObject("outputGroupSettings", m_outputGroupSettings.Jsonize());

  }

  if(m_outputsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> outputsJsonList(m_outputs.size());
   for(unsigned outputsIndex = 0; outputsIndex < outputsJsonList.GetLength(); ++outputsIndex)
   {
     outputsJsonList[outputsIndex].AsObject(m_outputs[outputsIndex].Jsonize());
   }
   payload.WithArray("outputs", std::move(outputsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
