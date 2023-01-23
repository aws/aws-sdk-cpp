/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mturk-requester/model/BonusPayment.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MTurk
{
namespace Model
{

BonusPayment::BonusPayment() : 
    m_workerIdHasBeenSet(false),
    m_bonusAmountHasBeenSet(false),
    m_assignmentIdHasBeenSet(false),
    m_reasonHasBeenSet(false),
    m_grantTimeHasBeenSet(false)
{
}

BonusPayment::BonusPayment(JsonView jsonValue) : 
    m_workerIdHasBeenSet(false),
    m_bonusAmountHasBeenSet(false),
    m_assignmentIdHasBeenSet(false),
    m_reasonHasBeenSet(false),
    m_grantTimeHasBeenSet(false)
{
  *this = jsonValue;
}

BonusPayment& BonusPayment::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("WorkerId"))
  {
    m_workerId = jsonValue.GetString("WorkerId");

    m_workerIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BonusAmount"))
  {
    m_bonusAmount = jsonValue.GetString("BonusAmount");

    m_bonusAmountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AssignmentId"))
  {
    m_assignmentId = jsonValue.GetString("AssignmentId");

    m_assignmentIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Reason"))
  {
    m_reason = jsonValue.GetString("Reason");

    m_reasonHasBeenSet = true;
  }

  if(jsonValue.ValueExists("GrantTime"))
  {
    m_grantTime = jsonValue.GetDouble("GrantTime");

    m_grantTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue BonusPayment::Jsonize() const
{
  JsonValue payload;

  if(m_workerIdHasBeenSet)
  {
   payload.WithString("WorkerId", m_workerId);

  }

  if(m_bonusAmountHasBeenSet)
  {
   payload.WithString("BonusAmount", m_bonusAmount);

  }

  if(m_assignmentIdHasBeenSet)
  {
   payload.WithString("AssignmentId", m_assignmentId);

  }

  if(m_reasonHasBeenSet)
  {
   payload.WithString("Reason", m_reason);

  }

  if(m_grantTimeHasBeenSet)
  {
   payload.WithDouble("GrantTime", m_grantTime.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace MTurk
} // namespace Aws
