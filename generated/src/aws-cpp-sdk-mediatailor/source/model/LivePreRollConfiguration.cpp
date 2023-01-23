/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediatailor/model/LivePreRollConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaTailor
{
namespace Model
{

LivePreRollConfiguration::LivePreRollConfiguration() : 
    m_adDecisionServerUrlHasBeenSet(false),
    m_maxDurationSeconds(0),
    m_maxDurationSecondsHasBeenSet(false)
{
}

LivePreRollConfiguration::LivePreRollConfiguration(JsonView jsonValue) : 
    m_adDecisionServerUrlHasBeenSet(false),
    m_maxDurationSeconds(0),
    m_maxDurationSecondsHasBeenSet(false)
{
  *this = jsonValue;
}

LivePreRollConfiguration& LivePreRollConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AdDecisionServerUrl"))
  {
    m_adDecisionServerUrl = jsonValue.GetString("AdDecisionServerUrl");

    m_adDecisionServerUrlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MaxDurationSeconds"))
  {
    m_maxDurationSeconds = jsonValue.GetInteger("MaxDurationSeconds");

    m_maxDurationSecondsHasBeenSet = true;
  }

  return *this;
}

JsonValue LivePreRollConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_adDecisionServerUrlHasBeenSet)
  {
   payload.WithString("AdDecisionServerUrl", m_adDecisionServerUrl);

  }

  if(m_maxDurationSecondsHasBeenSet)
  {
   payload.WithInteger("MaxDurationSeconds", m_maxDurationSeconds);

  }

  return payload;
}

} // namespace Model
} // namespace MediaTailor
} // namespace Aws
