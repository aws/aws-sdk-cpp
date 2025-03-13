/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint-sms-voice-v2/model/ProtectConfigurationRuleSetNumberOverride.h>
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

ProtectConfigurationRuleSetNumberOverride::ProtectConfigurationRuleSetNumberOverride(JsonView jsonValue)
{
  *this = jsonValue;
}

ProtectConfigurationRuleSetNumberOverride& ProtectConfigurationRuleSetNumberOverride::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DestinationPhoneNumber"))
  {
    m_destinationPhoneNumber = jsonValue.GetString("DestinationPhoneNumber");
    m_destinationPhoneNumberHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreatedTimestamp"))
  {
    m_createdTimestamp = jsonValue.GetDouble("CreatedTimestamp");
    m_createdTimestampHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Action"))
  {
    m_action = ProtectConfigurationRuleOverrideActionMapper::GetProtectConfigurationRuleOverrideActionForName(jsonValue.GetString("Action"));
    m_actionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("IsoCountryCode"))
  {
    m_isoCountryCode = jsonValue.GetString("IsoCountryCode");
    m_isoCountryCodeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ExpirationTimestamp"))
  {
    m_expirationTimestamp = jsonValue.GetDouble("ExpirationTimestamp");
    m_expirationTimestampHasBeenSet = true;
  }
  return *this;
}

JsonValue ProtectConfigurationRuleSetNumberOverride::Jsonize() const
{
  JsonValue payload;

  if(m_destinationPhoneNumberHasBeenSet)
  {
   payload.WithString("DestinationPhoneNumber", m_destinationPhoneNumber);

  }

  if(m_createdTimestampHasBeenSet)
  {
   payload.WithDouble("CreatedTimestamp", m_createdTimestamp.SecondsWithMSPrecision());
  }

  if(m_actionHasBeenSet)
  {
   payload.WithString("Action", ProtectConfigurationRuleOverrideActionMapper::GetNameForProtectConfigurationRuleOverrideAction(m_action));
  }

  if(m_isoCountryCodeHasBeenSet)
  {
   payload.WithString("IsoCountryCode", m_isoCountryCode);

  }

  if(m_expirationTimestampHasBeenSet)
  {
   payload.WithDouble("ExpirationTimestamp", m_expirationTimestamp.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
