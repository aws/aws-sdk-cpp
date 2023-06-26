/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/voice-id/model/AuthenticationConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace VoiceID
{
namespace Model
{

AuthenticationConfiguration::AuthenticationConfiguration() : 
    m_acceptanceThreshold(0),
    m_acceptanceThresholdHasBeenSet(false)
{
}

AuthenticationConfiguration::AuthenticationConfiguration(JsonView jsonValue) : 
    m_acceptanceThreshold(0),
    m_acceptanceThresholdHasBeenSet(false)
{
  *this = jsonValue;
}

AuthenticationConfiguration& AuthenticationConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AcceptanceThreshold"))
  {
    m_acceptanceThreshold = jsonValue.GetInteger("AcceptanceThreshold");

    m_acceptanceThresholdHasBeenSet = true;
  }

  return *this;
}

JsonValue AuthenticationConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_acceptanceThresholdHasBeenSet)
  {
   payload.WithInteger("AcceptanceThreshold", m_acceptanceThreshold);

  }

  return payload;
}

} // namespace Model
} // namespace VoiceID
} // namespace Aws
