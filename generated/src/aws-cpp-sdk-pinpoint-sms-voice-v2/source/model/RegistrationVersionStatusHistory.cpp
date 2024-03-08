/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint-sms-voice-v2/model/RegistrationVersionStatusHistory.h>
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

RegistrationVersionStatusHistory::RegistrationVersionStatusHistory() : 
    m_draftTimestampHasBeenSet(false),
    m_submittedTimestampHasBeenSet(false),
    m_reviewingTimestampHasBeenSet(false),
    m_approvedTimestampHasBeenSet(false),
    m_discardedTimestampHasBeenSet(false),
    m_deniedTimestampHasBeenSet(false),
    m_revokedTimestampHasBeenSet(false),
    m_archivedTimestampHasBeenSet(false)
{
}

RegistrationVersionStatusHistory::RegistrationVersionStatusHistory(JsonView jsonValue) : 
    m_draftTimestampHasBeenSet(false),
    m_submittedTimestampHasBeenSet(false),
    m_reviewingTimestampHasBeenSet(false),
    m_approvedTimestampHasBeenSet(false),
    m_discardedTimestampHasBeenSet(false),
    m_deniedTimestampHasBeenSet(false),
    m_revokedTimestampHasBeenSet(false),
    m_archivedTimestampHasBeenSet(false)
{
  *this = jsonValue;
}

RegistrationVersionStatusHistory& RegistrationVersionStatusHistory::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DraftTimestamp"))
  {
    m_draftTimestamp = jsonValue.GetDouble("DraftTimestamp");

    m_draftTimestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SubmittedTimestamp"))
  {
    m_submittedTimestamp = jsonValue.GetDouble("SubmittedTimestamp");

    m_submittedTimestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ReviewingTimestamp"))
  {
    m_reviewingTimestamp = jsonValue.GetDouble("ReviewingTimestamp");

    m_reviewingTimestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ApprovedTimestamp"))
  {
    m_approvedTimestamp = jsonValue.GetDouble("ApprovedTimestamp");

    m_approvedTimestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DiscardedTimestamp"))
  {
    m_discardedTimestamp = jsonValue.GetDouble("DiscardedTimestamp");

    m_discardedTimestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DeniedTimestamp"))
  {
    m_deniedTimestamp = jsonValue.GetDouble("DeniedTimestamp");

    m_deniedTimestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RevokedTimestamp"))
  {
    m_revokedTimestamp = jsonValue.GetDouble("RevokedTimestamp");

    m_revokedTimestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ArchivedTimestamp"))
  {
    m_archivedTimestamp = jsonValue.GetDouble("ArchivedTimestamp");

    m_archivedTimestampHasBeenSet = true;
  }

  return *this;
}

JsonValue RegistrationVersionStatusHistory::Jsonize() const
{
  JsonValue payload;

  if(m_draftTimestampHasBeenSet)
  {
   payload.WithDouble("DraftTimestamp", m_draftTimestamp.SecondsWithMSPrecision());
  }

  if(m_submittedTimestampHasBeenSet)
  {
   payload.WithDouble("SubmittedTimestamp", m_submittedTimestamp.SecondsWithMSPrecision());
  }

  if(m_reviewingTimestampHasBeenSet)
  {
   payload.WithDouble("ReviewingTimestamp", m_reviewingTimestamp.SecondsWithMSPrecision());
  }

  if(m_approvedTimestampHasBeenSet)
  {
   payload.WithDouble("ApprovedTimestamp", m_approvedTimestamp.SecondsWithMSPrecision());
  }

  if(m_discardedTimestampHasBeenSet)
  {
   payload.WithDouble("DiscardedTimestamp", m_discardedTimestamp.SecondsWithMSPrecision());
  }

  if(m_deniedTimestampHasBeenSet)
  {
   payload.WithDouble("DeniedTimestamp", m_deniedTimestamp.SecondsWithMSPrecision());
  }

  if(m_revokedTimestampHasBeenSet)
  {
   payload.WithDouble("RevokedTimestamp", m_revokedTimestamp.SecondsWithMSPrecision());
  }

  if(m_archivedTimestampHasBeenSet)
  {
   payload.WithDouble("ArchivedTimestamp", m_archivedTimestamp.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
