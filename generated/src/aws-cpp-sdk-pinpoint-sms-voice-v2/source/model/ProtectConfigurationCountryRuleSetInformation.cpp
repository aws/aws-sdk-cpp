/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint-sms-voice-v2/model/ProtectConfigurationCountryRuleSetInformation.h>
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

ProtectConfigurationCountryRuleSetInformation::ProtectConfigurationCountryRuleSetInformation(JsonView jsonValue)
{
  *this = jsonValue;
}

ProtectConfigurationCountryRuleSetInformation& ProtectConfigurationCountryRuleSetInformation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ProtectStatus"))
  {
    m_protectStatus = ProtectStatusMapper::GetProtectStatusForName(jsonValue.GetString("ProtectStatus"));
    m_protectStatusHasBeenSet = true;
  }
  return *this;
}

JsonValue ProtectConfigurationCountryRuleSetInformation::Jsonize() const
{
  JsonValue payload;

  if(m_protectStatusHasBeenSet)
  {
   payload.WithString("ProtectStatus", ProtectStatusMapper::GetNameForProtectStatus(m_protectStatus));
  }

  return payload;
}

} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
