/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/synthetics/model/CanaryRunStatus.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Synthetics
{
namespace Model
{

CanaryRunStatus::CanaryRunStatus(JsonView jsonValue)
{
  *this = jsonValue;
}

CanaryRunStatus& CanaryRunStatus::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("State"))
  {
    m_state = CanaryRunStateMapper::GetCanaryRunStateForName(jsonValue.GetString("State"));
    m_stateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("StateReason"))
  {
    m_stateReason = jsonValue.GetString("StateReason");
    m_stateReasonHasBeenSet = true;
  }
  if(jsonValue.ValueExists("StateReasonCode"))
  {
    m_stateReasonCode = CanaryRunStateReasonCodeMapper::GetCanaryRunStateReasonCodeForName(jsonValue.GetString("StateReasonCode"));
    m_stateReasonCodeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TestResult"))
  {
    m_testResult = CanaryRunTestResultMapper::GetCanaryRunTestResultForName(jsonValue.GetString("TestResult"));
    m_testResultHasBeenSet = true;
  }
  return *this;
}

JsonValue CanaryRunStatus::Jsonize() const
{
  JsonValue payload;

  if(m_stateHasBeenSet)
  {
   payload.WithString("State", CanaryRunStateMapper::GetNameForCanaryRunState(m_state));
  }

  if(m_stateReasonHasBeenSet)
  {
   payload.WithString("StateReason", m_stateReason);

  }

  if(m_stateReasonCodeHasBeenSet)
  {
   payload.WithString("StateReasonCode", CanaryRunStateReasonCodeMapper::GetNameForCanaryRunStateReasonCode(m_stateReasonCode));
  }

  if(m_testResultHasBeenSet)
  {
   payload.WithString("TestResult", CanaryRunTestResultMapper::GetNameForCanaryRunTestResult(m_testResult));
  }

  return payload;
}

} // namespace Model
} // namespace Synthetics
} // namespace Aws
