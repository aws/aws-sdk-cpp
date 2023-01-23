/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediatailor/model/DashPlaylistSettings.h>
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

DashPlaylistSettings::DashPlaylistSettings() : 
    m_manifestWindowSeconds(0),
    m_manifestWindowSecondsHasBeenSet(false),
    m_minBufferTimeSeconds(0),
    m_minBufferTimeSecondsHasBeenSet(false),
    m_minUpdatePeriodSeconds(0),
    m_minUpdatePeriodSecondsHasBeenSet(false),
    m_suggestedPresentationDelaySeconds(0),
    m_suggestedPresentationDelaySecondsHasBeenSet(false)
{
}

DashPlaylistSettings::DashPlaylistSettings(JsonView jsonValue) : 
    m_manifestWindowSeconds(0),
    m_manifestWindowSecondsHasBeenSet(false),
    m_minBufferTimeSeconds(0),
    m_minBufferTimeSecondsHasBeenSet(false),
    m_minUpdatePeriodSeconds(0),
    m_minUpdatePeriodSecondsHasBeenSet(false),
    m_suggestedPresentationDelaySeconds(0),
    m_suggestedPresentationDelaySecondsHasBeenSet(false)
{
  *this = jsonValue;
}

DashPlaylistSettings& DashPlaylistSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ManifestWindowSeconds"))
  {
    m_manifestWindowSeconds = jsonValue.GetInteger("ManifestWindowSeconds");

    m_manifestWindowSecondsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MinBufferTimeSeconds"))
  {
    m_minBufferTimeSeconds = jsonValue.GetInteger("MinBufferTimeSeconds");

    m_minBufferTimeSecondsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MinUpdatePeriodSeconds"))
  {
    m_minUpdatePeriodSeconds = jsonValue.GetInteger("MinUpdatePeriodSeconds");

    m_minUpdatePeriodSecondsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SuggestedPresentationDelaySeconds"))
  {
    m_suggestedPresentationDelaySeconds = jsonValue.GetInteger("SuggestedPresentationDelaySeconds");

    m_suggestedPresentationDelaySecondsHasBeenSet = true;
  }

  return *this;
}

JsonValue DashPlaylistSettings::Jsonize() const
{
  JsonValue payload;

  if(m_manifestWindowSecondsHasBeenSet)
  {
   payload.WithInteger("ManifestWindowSeconds", m_manifestWindowSeconds);

  }

  if(m_minBufferTimeSecondsHasBeenSet)
  {
   payload.WithInteger("MinBufferTimeSeconds", m_minBufferTimeSeconds);

  }

  if(m_minUpdatePeriodSecondsHasBeenSet)
  {
   payload.WithInteger("MinUpdatePeriodSeconds", m_minUpdatePeriodSeconds);

  }

  if(m_suggestedPresentationDelaySecondsHasBeenSet)
  {
   payload.WithInteger("SuggestedPresentationDelaySeconds", m_suggestedPresentationDelaySeconds);

  }

  return payload;
}

} // namespace Model
} // namespace MediaTailor
} // namespace Aws
