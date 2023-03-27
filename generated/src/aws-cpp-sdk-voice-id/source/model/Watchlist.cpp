/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/voice-id/model/Watchlist.h>
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

Watchlist::Watchlist() : 
    m_createdAtHasBeenSet(false),
    m_defaultWatchlist(false),
    m_defaultWatchlistHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_domainIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_updatedAtHasBeenSet(false),
    m_watchlistIdHasBeenSet(false)
{
}

Watchlist::Watchlist(JsonView jsonValue) : 
    m_createdAtHasBeenSet(false),
    m_defaultWatchlist(false),
    m_defaultWatchlistHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_domainIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_updatedAtHasBeenSet(false),
    m_watchlistIdHasBeenSet(false)
{
  *this = jsonValue;
}

Watchlist& Watchlist::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CreatedAt"))
  {
    m_createdAt = jsonValue.GetDouble("CreatedAt");

    m_createdAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DefaultWatchlist"))
  {
    m_defaultWatchlist = jsonValue.GetBool("DefaultWatchlist");

    m_defaultWatchlistHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DomainId"))
  {
    m_domainId = jsonValue.GetString("DomainId");

    m_domainIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UpdatedAt"))
  {
    m_updatedAt = jsonValue.GetDouble("UpdatedAt");

    m_updatedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("WatchlistId"))
  {
    m_watchlistId = jsonValue.GetString("WatchlistId");

    m_watchlistIdHasBeenSet = true;
  }

  return *this;
}

JsonValue Watchlist::Jsonize() const
{
  JsonValue payload;

  if(m_createdAtHasBeenSet)
  {
   payload.WithDouble("CreatedAt", m_createdAt.SecondsWithMSPrecision());
  }

  if(m_defaultWatchlistHasBeenSet)
  {
   payload.WithBool("DefaultWatchlist", m_defaultWatchlist);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_domainIdHasBeenSet)
  {
   payload.WithString("DomainId", m_domainId);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_updatedAtHasBeenSet)
  {
   payload.WithDouble("UpdatedAt", m_updatedAt.SecondsWithMSPrecision());
  }

  if(m_watchlistIdHasBeenSet)
  {
   payload.WithString("WatchlistId", m_watchlistId);

  }

  return payload;
}

} // namespace Model
} // namespace VoiceID
} // namespace Aws
