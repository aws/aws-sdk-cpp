/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint-sms-voice-v2/model/RegistrationVersionInformation.h>
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

RegistrationVersionInformation::RegistrationVersionInformation() : 
    m_versionNumber(0),
    m_versionNumberHasBeenSet(false),
    m_registrationVersionStatus(RegistrationVersionStatus::NOT_SET),
    m_registrationVersionStatusHasBeenSet(false),
    m_registrationVersionStatusHistoryHasBeenSet(false),
    m_deniedReasonsHasBeenSet(false)
{
}

RegistrationVersionInformation::RegistrationVersionInformation(JsonView jsonValue) : 
    m_versionNumber(0),
    m_versionNumberHasBeenSet(false),
    m_registrationVersionStatus(RegistrationVersionStatus::NOT_SET),
    m_registrationVersionStatusHasBeenSet(false),
    m_registrationVersionStatusHistoryHasBeenSet(false),
    m_deniedReasonsHasBeenSet(false)
{
  *this = jsonValue;
}

RegistrationVersionInformation& RegistrationVersionInformation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("VersionNumber"))
  {
    m_versionNumber = jsonValue.GetInt64("VersionNumber");

    m_versionNumberHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RegistrationVersionStatus"))
  {
    m_registrationVersionStatus = RegistrationVersionStatusMapper::GetRegistrationVersionStatusForName(jsonValue.GetString("RegistrationVersionStatus"));

    m_registrationVersionStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RegistrationVersionStatusHistory"))
  {
    m_registrationVersionStatusHistory = jsonValue.GetObject("RegistrationVersionStatusHistory");

    m_registrationVersionStatusHistoryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DeniedReasons"))
  {
    Aws::Utils::Array<JsonView> deniedReasonsJsonList = jsonValue.GetArray("DeniedReasons");
    for(unsigned deniedReasonsIndex = 0; deniedReasonsIndex < deniedReasonsJsonList.GetLength(); ++deniedReasonsIndex)
    {
      m_deniedReasons.push_back(deniedReasonsJsonList[deniedReasonsIndex].AsObject());
    }
    m_deniedReasonsHasBeenSet = true;
  }

  return *this;
}

JsonValue RegistrationVersionInformation::Jsonize() const
{
  JsonValue payload;

  if(m_versionNumberHasBeenSet)
  {
   payload.WithInt64("VersionNumber", m_versionNumber);

  }

  if(m_registrationVersionStatusHasBeenSet)
  {
   payload.WithString("RegistrationVersionStatus", RegistrationVersionStatusMapper::GetNameForRegistrationVersionStatus(m_registrationVersionStatus));
  }

  if(m_registrationVersionStatusHistoryHasBeenSet)
  {
   payload.WithObject("RegistrationVersionStatusHistory", m_registrationVersionStatusHistory.Jsonize());

  }

  if(m_deniedReasonsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> deniedReasonsJsonList(m_deniedReasons.size());
   for(unsigned deniedReasonsIndex = 0; deniedReasonsIndex < deniedReasonsJsonList.GetLength(); ++deniedReasonsIndex)
   {
     deniedReasonsJsonList[deniedReasonsIndex].AsObject(m_deniedReasons[deniedReasonsIndex].Jsonize());
   }
   payload.WithArray("DeniedReasons", std::move(deniedReasonsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
