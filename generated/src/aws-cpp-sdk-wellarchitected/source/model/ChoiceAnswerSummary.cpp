/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wellarchitected/model/ChoiceAnswerSummary.h>
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

ChoiceAnswerSummary::ChoiceAnswerSummary() : 
    m_choiceIdHasBeenSet(false),
    m_status(ChoiceStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_reason(ChoiceReason::NOT_SET),
    m_reasonHasBeenSet(false)
{
}

ChoiceAnswerSummary::ChoiceAnswerSummary(JsonView jsonValue) : 
    m_choiceIdHasBeenSet(false),
    m_status(ChoiceStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_reason(ChoiceReason::NOT_SET),
    m_reasonHasBeenSet(false)
{
  *this = jsonValue;
}

ChoiceAnswerSummary& ChoiceAnswerSummary::operator =(JsonView jsonValue)
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

  return *this;
}

JsonValue ChoiceAnswerSummary::Jsonize() const
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

  return payload;
}

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
