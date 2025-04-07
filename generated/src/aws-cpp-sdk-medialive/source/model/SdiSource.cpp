/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/SdiSource.h>
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

SdiSource::SdiSource(JsonView jsonValue)
{
  *this = jsonValue;
}

SdiSource& SdiSource::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");
    m_arnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");
    m_idHasBeenSet = true;
  }
  if(jsonValue.ValueExists("inputs"))
  {
    Aws::Utils::Array<JsonView> inputsJsonList = jsonValue.GetArray("inputs");
    for(unsigned inputsIndex = 0; inputsIndex < inputsJsonList.GetLength(); ++inputsIndex)
    {
      m_inputs.push_back(inputsJsonList[inputsIndex].AsString());
    }
    m_inputsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("mode"))
  {
    m_mode = SdiSourceModeMapper::GetSdiSourceModeForName(jsonValue.GetString("mode"));
    m_modeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("state"))
  {
    m_state = SdiSourceStateMapper::GetSdiSourceStateForName(jsonValue.GetString("state"));
    m_stateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("type"))
  {
    m_type = SdiSourceTypeMapper::GetSdiSourceTypeForName(jsonValue.GetString("type"));
    m_typeHasBeenSet = true;
  }
  return *this;
}

JsonValue SdiSource::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_inputsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> inputsJsonList(m_inputs.size());
   for(unsigned inputsIndex = 0; inputsIndex < inputsJsonList.GetLength(); ++inputsIndex)
   {
     inputsJsonList[inputsIndex].AsString(m_inputs[inputsIndex]);
   }
   payload.WithArray("inputs", std::move(inputsJsonList));

  }

  if(m_modeHasBeenSet)
  {
   payload.WithString("mode", SdiSourceModeMapper::GetNameForSdiSourceMode(m_mode));
  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_stateHasBeenSet)
  {
   payload.WithString("state", SdiSourceStateMapper::GetNameForSdiSourceState(m_state));
  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", SdiSourceTypeMapper::GetNameForSdiSourceType(m_type));
  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
