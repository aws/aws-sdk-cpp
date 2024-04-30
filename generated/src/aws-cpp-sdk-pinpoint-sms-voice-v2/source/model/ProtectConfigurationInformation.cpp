/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint-sms-voice-v2/model/ProtectConfigurationInformation.h>
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

ProtectConfigurationInformation::ProtectConfigurationInformation() : 
    m_protectConfigurationArnHasBeenSet(false),
    m_protectConfigurationIdHasBeenSet(false),
    m_createdTimestampHasBeenSet(false),
    m_accountDefault(false),
    m_accountDefaultHasBeenSet(false),
    m_deletionProtectionEnabled(false),
    m_deletionProtectionEnabledHasBeenSet(false)
{
}

ProtectConfigurationInformation::ProtectConfigurationInformation(JsonView jsonValue) : 
    m_protectConfigurationArnHasBeenSet(false),
    m_protectConfigurationIdHasBeenSet(false),
    m_createdTimestampHasBeenSet(false),
    m_accountDefault(false),
    m_accountDefaultHasBeenSet(false),
    m_deletionProtectionEnabled(false),
    m_deletionProtectionEnabledHasBeenSet(false)
{
  *this = jsonValue;
}

ProtectConfigurationInformation& ProtectConfigurationInformation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ProtectConfigurationArn"))
  {
    m_protectConfigurationArn = jsonValue.GetString("ProtectConfigurationArn");

    m_protectConfigurationArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ProtectConfigurationId"))
  {
    m_protectConfigurationId = jsonValue.GetString("ProtectConfigurationId");

    m_protectConfigurationIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedTimestamp"))
  {
    m_createdTimestamp = jsonValue.GetDouble("CreatedTimestamp");

    m_createdTimestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AccountDefault"))
  {
    m_accountDefault = jsonValue.GetBool("AccountDefault");

    m_accountDefaultHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DeletionProtectionEnabled"))
  {
    m_deletionProtectionEnabled = jsonValue.GetBool("DeletionProtectionEnabled");

    m_deletionProtectionEnabledHasBeenSet = true;
  }

  return *this;
}

JsonValue ProtectConfigurationInformation::Jsonize() const
{
  JsonValue payload;

  if(m_protectConfigurationArnHasBeenSet)
  {
   payload.WithString("ProtectConfigurationArn", m_protectConfigurationArn);

  }

  if(m_protectConfigurationIdHasBeenSet)
  {
   payload.WithString("ProtectConfigurationId", m_protectConfigurationId);

  }

  if(m_createdTimestampHasBeenSet)
  {
   payload.WithDouble("CreatedTimestamp", m_createdTimestamp.SecondsWithMSPrecision());
  }

  if(m_accountDefaultHasBeenSet)
  {
   payload.WithBool("AccountDefault", m_accountDefault);

  }

  if(m_deletionProtectionEnabledHasBeenSet)
  {
   payload.WithBool("DeletionProtectionEnabled", m_deletionProtectionEnabled);

  }

  return payload;
}

} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
