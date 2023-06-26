/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/AudioDolbyEDecode.h>
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

AudioDolbyEDecode::AudioDolbyEDecode() : 
    m_programSelection(DolbyEProgramSelection::NOT_SET),
    m_programSelectionHasBeenSet(false)
{
}

AudioDolbyEDecode::AudioDolbyEDecode(JsonView jsonValue) : 
    m_programSelection(DolbyEProgramSelection::NOT_SET),
    m_programSelectionHasBeenSet(false)
{
  *this = jsonValue;
}

AudioDolbyEDecode& AudioDolbyEDecode::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("programSelection"))
  {
    m_programSelection = DolbyEProgramSelectionMapper::GetDolbyEProgramSelectionForName(jsonValue.GetString("programSelection"));

    m_programSelectionHasBeenSet = true;
  }

  return *this;
}

JsonValue AudioDolbyEDecode::Jsonize() const
{
  JsonValue payload;

  if(m_programSelectionHasBeenSet)
  {
   payload.WithString("programSelection", DolbyEProgramSelectionMapper::GetNameForDolbyEProgramSelection(m_programSelection));
  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
