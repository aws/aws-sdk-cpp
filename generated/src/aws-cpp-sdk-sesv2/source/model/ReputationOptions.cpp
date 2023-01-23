/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sesv2/model/ReputationOptions.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SESV2
{
namespace Model
{

ReputationOptions::ReputationOptions() : 
    m_reputationMetricsEnabled(false),
    m_reputationMetricsEnabledHasBeenSet(false),
    m_lastFreshStartHasBeenSet(false)
{
}

ReputationOptions::ReputationOptions(JsonView jsonValue) : 
    m_reputationMetricsEnabled(false),
    m_reputationMetricsEnabledHasBeenSet(false),
    m_lastFreshStartHasBeenSet(false)
{
  *this = jsonValue;
}

ReputationOptions& ReputationOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ReputationMetricsEnabled"))
  {
    m_reputationMetricsEnabled = jsonValue.GetBool("ReputationMetricsEnabled");

    m_reputationMetricsEnabledHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastFreshStart"))
  {
    m_lastFreshStart = jsonValue.GetDouble("LastFreshStart");

    m_lastFreshStartHasBeenSet = true;
  }

  return *this;
}

JsonValue ReputationOptions::Jsonize() const
{
  JsonValue payload;

  if(m_reputationMetricsEnabledHasBeenSet)
  {
   payload.WithBool("ReputationMetricsEnabled", m_reputationMetricsEnabled);

  }

  if(m_lastFreshStartHasBeenSet)
  {
   payload.WithDouble("LastFreshStart", m_lastFreshStart.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace SESV2
} // namespace Aws
