/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint-sms-voice-v2/model/SelectValidation.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace PinpointSMSVoiceV2
{
namespace Model
{

SelectValidation::SelectValidation() : 
    m_minChoices(0),
    m_minChoicesHasBeenSet(false),
    m_maxChoices(0),
    m_maxChoicesHasBeenSet(false),
    m_optionsHasBeenSet(false)
{
}

SelectValidation::SelectValidation(JsonView jsonValue) : 
    m_minChoices(0),
    m_minChoicesHasBeenSet(false),
    m_maxChoices(0),
    m_maxChoicesHasBeenSet(false),
    m_optionsHasBeenSet(false)
{
  *this = jsonValue;
}

SelectValidation& SelectValidation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MinChoices"))
  {
    m_minChoices = jsonValue.GetInteger("MinChoices");

    m_minChoicesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MaxChoices"))
  {
    m_maxChoices = jsonValue.GetInteger("MaxChoices");

    m_maxChoicesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Options"))
  {
    Aws::Utils::Array<JsonView> optionsJsonList = jsonValue.GetArray("Options");
    for(unsigned optionsIndex = 0; optionsIndex < optionsJsonList.GetLength(); ++optionsIndex)
    {
      m_options.push_back(optionsJsonList[optionsIndex].AsString());
    }
    m_optionsHasBeenSet = true;
  }

  return *this;
}

JsonValue SelectValidation::Jsonize() const
{
  JsonValue payload;

  if(m_minChoicesHasBeenSet)
  {
   payload.WithInteger("MinChoices", m_minChoices);

  }

  if(m_maxChoicesHasBeenSet)
  {
   payload.WithInteger("MaxChoices", m_maxChoices);

  }

  if(m_optionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> optionsJsonList(m_options.size());
   for(unsigned optionsIndex = 0; optionsIndex < optionsJsonList.GetLength(); ++optionsIndex)
   {
     optionsJsonList[optionsIndex].AsString(m_options[optionsIndex]);
   }
   payload.WithArray("Options", std::move(optionsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
