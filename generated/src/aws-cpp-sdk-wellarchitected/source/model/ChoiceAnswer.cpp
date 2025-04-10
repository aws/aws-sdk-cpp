﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wellarchitected/model/ChoiceAnswer.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WellArchitected
{
namespace Model
{

ChoiceAnswer::ChoiceAnswer(JsonView jsonValue)
{
  *this = jsonValue;
}

ChoiceAnswer& ChoiceAnswer::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ChoiceId"))
  {
    m_choiceId = jsonValue.GetString("ChoiceId");
    m_choiceIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Status"))
  {
    m_status = ChoiceStatusMapper::GetChoiceStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Reason"))
  {
    m_reason = ChoiceReasonMapper::GetChoiceReasonForName(jsonValue.GetString("Reason"));
    m_reasonHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Notes"))
  {
    m_notes = jsonValue.GetString("Notes");
    m_notesHasBeenSet = true;
  }
  return *this;
}

JsonValue ChoiceAnswer::Jsonize() const
{
  JsonValue payload;

  if(m_choiceIdHasBeenSet)
  {
   payload.WithString("ChoiceId", m_choiceId);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", ChoiceStatusMapper::GetNameForChoiceStatus(m_status));
  }

  if(m_reasonHasBeenSet)
  {
   payload.WithString("Reason", ChoiceReasonMapper::GetNameForChoiceReason(m_reason));
  }

  if(m_notesHasBeenSet)
  {
   payload.WithString("Notes", m_notes);

  }

  return payload;
}

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
