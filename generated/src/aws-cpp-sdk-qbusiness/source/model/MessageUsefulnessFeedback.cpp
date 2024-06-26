﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/model/MessageUsefulnessFeedback.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QBusiness
{
namespace Model
{

MessageUsefulnessFeedback::MessageUsefulnessFeedback() : 
    m_usefulness(MessageUsefulness::NOT_SET),
    m_usefulnessHasBeenSet(false),
    m_reason(MessageUsefulnessReason::NOT_SET),
    m_reasonHasBeenSet(false),
    m_commentHasBeenSet(false),
    m_submittedAtHasBeenSet(false)
{
}

MessageUsefulnessFeedback::MessageUsefulnessFeedback(JsonView jsonValue)
  : MessageUsefulnessFeedback()
{
  *this = jsonValue;
}

MessageUsefulnessFeedback& MessageUsefulnessFeedback::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("usefulness"))
  {
    m_usefulness = MessageUsefulnessMapper::GetMessageUsefulnessForName(jsonValue.GetString("usefulness"));

    m_usefulnessHasBeenSet = true;
  }

  if(jsonValue.ValueExists("reason"))
  {
    m_reason = MessageUsefulnessReasonMapper::GetMessageUsefulnessReasonForName(jsonValue.GetString("reason"));

    m_reasonHasBeenSet = true;
  }

  if(jsonValue.ValueExists("comment"))
  {
    m_comment = jsonValue.GetString("comment");

    m_commentHasBeenSet = true;
  }

  if(jsonValue.ValueExists("submittedAt"))
  {
    m_submittedAt = jsonValue.GetDouble("submittedAt");

    m_submittedAtHasBeenSet = true;
  }

  return *this;
}

JsonValue MessageUsefulnessFeedback::Jsonize() const
{
  JsonValue payload;

  if(m_usefulnessHasBeenSet)
  {
   payload.WithString("usefulness", MessageUsefulnessMapper::GetNameForMessageUsefulness(m_usefulness));
  }

  if(m_reasonHasBeenSet)
  {
   payload.WithString("reason", MessageUsefulnessReasonMapper::GetNameForMessageUsefulnessReason(m_reason));
  }

  if(m_commentHasBeenSet)
  {
   payload.WithString("comment", m_comment);

  }

  if(m_submittedAtHasBeenSet)
  {
   payload.WithDouble("submittedAt", m_submittedAt.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace QBusiness
} // namespace Aws
