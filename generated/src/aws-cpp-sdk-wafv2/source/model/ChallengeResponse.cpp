/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wafv2/model/ChallengeResponse.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WAFV2
{
namespace Model
{

ChallengeResponse::ChallengeResponse() : 
    m_responseCode(0),
    m_responseCodeHasBeenSet(false),
    m_solveTimestamp(0),
    m_solveTimestampHasBeenSet(false),
    m_failureReason(FailureReason::NOT_SET),
    m_failureReasonHasBeenSet(false)
{
}

ChallengeResponse::ChallengeResponse(JsonView jsonValue) : 
    m_responseCode(0),
    m_responseCodeHasBeenSet(false),
    m_solveTimestamp(0),
    m_solveTimestampHasBeenSet(false),
    m_failureReason(FailureReason::NOT_SET),
    m_failureReasonHasBeenSet(false)
{
  *this = jsonValue;
}

ChallengeResponse& ChallengeResponse::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ResponseCode"))
  {
    m_responseCode = jsonValue.GetInteger("ResponseCode");

    m_responseCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SolveTimestamp"))
  {
    m_solveTimestamp = jsonValue.GetInt64("SolveTimestamp");

    m_solveTimestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FailureReason"))
  {
    m_failureReason = FailureReasonMapper::GetFailureReasonForName(jsonValue.GetString("FailureReason"));

    m_failureReasonHasBeenSet = true;
  }

  return *this;
}

JsonValue ChallengeResponse::Jsonize() const
{
  JsonValue payload;

  if(m_responseCodeHasBeenSet)
  {
   payload.WithInteger("ResponseCode", m_responseCode);

  }

  if(m_solveTimestampHasBeenSet)
  {
   payload.WithInt64("SolveTimestamp", m_solveTimestamp);

  }

  if(m_failureReasonHasBeenSet)
  {
   payload.WithString("FailureReason", FailureReasonMapper::GetNameForFailureReason(m_failureReason));
  }

  return payload;
}

} // namespace Model
} // namespace WAFV2
} // namespace Aws
