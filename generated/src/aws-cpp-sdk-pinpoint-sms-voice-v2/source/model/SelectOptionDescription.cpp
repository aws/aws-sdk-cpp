/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint-sms-voice-v2/model/SelectOptionDescription.h>
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

SelectOptionDescription::SelectOptionDescription() : 
    m_optionHasBeenSet(false),
    m_titleHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
}

SelectOptionDescription::SelectOptionDescription(JsonView jsonValue) : 
    m_optionHasBeenSet(false),
    m_titleHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
  *this = jsonValue;
}

SelectOptionDescription& SelectOptionDescription::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Option"))
  {
    m_option = jsonValue.GetString("Option");

    m_optionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Title"))
  {
    m_title = jsonValue.GetString("Title");

    m_titleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  return *this;
}

JsonValue SelectOptionDescription::Jsonize() const
{
  JsonValue payload;

  if(m_optionHasBeenSet)
  {
   payload.WithString("Option", m_option);

  }

  if(m_titleHasBeenSet)
  {
   payload.WithString("Title", m_title);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  return payload;
}

} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
