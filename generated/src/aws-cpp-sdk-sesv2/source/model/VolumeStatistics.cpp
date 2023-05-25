/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sesv2/model/VolumeStatistics.h>
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

VolumeStatistics::VolumeStatistics() : 
    m_inboxRawCount(0),
    m_inboxRawCountHasBeenSet(false),
    m_spamRawCount(0),
    m_spamRawCountHasBeenSet(false),
    m_projectedInbox(0),
    m_projectedInboxHasBeenSet(false),
    m_projectedSpam(0),
    m_projectedSpamHasBeenSet(false)
{
}

VolumeStatistics::VolumeStatistics(JsonView jsonValue) : 
    m_inboxRawCount(0),
    m_inboxRawCountHasBeenSet(false),
    m_spamRawCount(0),
    m_spamRawCountHasBeenSet(false),
    m_projectedInbox(0),
    m_projectedInboxHasBeenSet(false),
    m_projectedSpam(0),
    m_projectedSpamHasBeenSet(false)
{
  *this = jsonValue;
}

VolumeStatistics& VolumeStatistics::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("InboxRawCount"))
  {
    m_inboxRawCount = jsonValue.GetInt64("InboxRawCount");

    m_inboxRawCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SpamRawCount"))
  {
    m_spamRawCount = jsonValue.GetInt64("SpamRawCount");

    m_spamRawCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ProjectedInbox"))
  {
    m_projectedInbox = jsonValue.GetInt64("ProjectedInbox");

    m_projectedInboxHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ProjectedSpam"))
  {
    m_projectedSpam = jsonValue.GetInt64("ProjectedSpam");

    m_projectedSpamHasBeenSet = true;
  }

  return *this;
}

JsonValue VolumeStatistics::Jsonize() const
{
  JsonValue payload;

  if(m_inboxRawCountHasBeenSet)
  {
   payload.WithInt64("InboxRawCount", m_inboxRawCount);

  }

  if(m_spamRawCountHasBeenSet)
  {
   payload.WithInt64("SpamRawCount", m_spamRawCount);

  }

  if(m_projectedInboxHasBeenSet)
  {
   payload.WithInt64("ProjectedInbox", m_projectedInbox);

  }

  if(m_projectedSpamHasBeenSet)
  {
   payload.WithInt64("ProjectedSpam", m_projectedSpam);

  }

  return payload;
}

} // namespace Model
} // namespace SESV2
} // namespace Aws
