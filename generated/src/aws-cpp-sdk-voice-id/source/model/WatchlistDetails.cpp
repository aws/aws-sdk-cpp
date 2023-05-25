/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/voice-id/model/WatchlistDetails.h>
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

WatchlistDetails::WatchlistDetails() : 
    m_defaultWatchlistIdHasBeenSet(false)
{
}

WatchlistDetails::WatchlistDetails(JsonView jsonValue) : 
    m_defaultWatchlistIdHasBeenSet(false)
{
  *this = jsonValue;
}

WatchlistDetails& WatchlistDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DefaultWatchlistId"))
  {
    m_defaultWatchlistId = jsonValue.GetString("DefaultWatchlistId");

    m_defaultWatchlistIdHasBeenSet = true;
  }

  return *this;
}

JsonValue WatchlistDetails::Jsonize() const
{
  JsonValue payload;

  if(m_defaultWatchlistIdHasBeenSet)
  {
   payload.WithString("DefaultWatchlistId", m_defaultWatchlistId);

  }

  return payload;
}

} // namespace Model
} // namespace VoiceID
} // namespace Aws
