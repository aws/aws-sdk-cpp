/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/EsamSettings.h>
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

EsamSettings::EsamSettings(JsonView jsonValue)
{
  *this = jsonValue;
}

EsamSettings& EsamSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("manifestConfirmConditionNotification"))
  {
    m_manifestConfirmConditionNotification = jsonValue.GetObject("manifestConfirmConditionNotification");
    m_manifestConfirmConditionNotificationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("responseSignalPreroll"))
  {
    m_responseSignalPreroll = jsonValue.GetInteger("responseSignalPreroll");
    m_responseSignalPrerollHasBeenSet = true;
  }
  if(jsonValue.ValueExists("signalProcessingNotification"))
  {
    m_signalProcessingNotification = jsonValue.GetObject("signalProcessingNotification");
    m_signalProcessingNotificationHasBeenSet = true;
  }
  return *this;
}

JsonValue EsamSettings::Jsonize() const
{
  JsonValue payload;

  if(m_manifestConfirmConditionNotificationHasBeenSet)
  {
   payload.WithObject("manifestConfirmConditionNotification", m_manifestConfirmConditionNotification.Jsonize());

  }

  if(m_responseSignalPrerollHasBeenSet)
  {
   payload.WithInteger("responseSignalPreroll", m_responseSignalPreroll);

  }

  if(m_signalProcessingNotificationHasBeenSet)
  {
   payload.WithObject("signalProcessingNotification", m_signalProcessingNotification.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
