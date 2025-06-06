/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rekognition/model/CreateFaceLivenessSessionRequestSettings.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Rekognition
{
namespace Model
{

CreateFaceLivenessSessionRequestSettings::CreateFaceLivenessSessionRequestSettings(JsonView jsonValue)
{
  *this = jsonValue;
}

CreateFaceLivenessSessionRequestSettings& CreateFaceLivenessSessionRequestSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("OutputConfig"))
  {
    m_outputConfig = jsonValue.GetObject("OutputConfig");
    m_outputConfigHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AuditImagesLimit"))
  {
    m_auditImagesLimit = jsonValue.GetInteger("AuditImagesLimit");
    m_auditImagesLimitHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ChallengePreferences"))
  {
    Aws::Utils::Array<JsonView> challengePreferencesJsonList = jsonValue.GetArray("ChallengePreferences");
    for(unsigned challengePreferencesIndex = 0; challengePreferencesIndex < challengePreferencesJsonList.GetLength(); ++challengePreferencesIndex)
    {
      m_challengePreferences.push_back(challengePreferencesJsonList[challengePreferencesIndex].AsObject());
    }
    m_challengePreferencesHasBeenSet = true;
  }
  return *this;
}

JsonValue CreateFaceLivenessSessionRequestSettings::Jsonize() const
{
  JsonValue payload;

  if(m_outputConfigHasBeenSet)
  {
   payload.WithObject("OutputConfig", m_outputConfig.Jsonize());

  }

  if(m_auditImagesLimitHasBeenSet)
  {
   payload.WithInteger("AuditImagesLimit", m_auditImagesLimit);

  }

  if(m_challengePreferencesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> challengePreferencesJsonList(m_challengePreferences.size());
   for(unsigned challengePreferencesIndex = 0; challengePreferencesIndex < challengePreferencesJsonList.GetLength(); ++challengePreferencesIndex)
   {
     challengePreferencesJsonList[challengePreferencesIndex].AsObject(m_challengePreferences[challengePreferencesIndex].Jsonize());
   }
   payload.WithArray("ChallengePreferences", std::move(challengePreferencesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Rekognition
} // namespace Aws
