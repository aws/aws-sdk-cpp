/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/synthetics/model/DryRunConfigOutput.h>
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

DryRunConfigOutput::DryRunConfigOutput(JsonView jsonValue)
{
  *this = jsonValue;
}

DryRunConfigOutput& DryRunConfigOutput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DryRunId"))
  {
    m_dryRunId = jsonValue.GetString("DryRunId");
    m_dryRunIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LastDryRunExecutionStatus"))
  {
    m_lastDryRunExecutionStatus = jsonValue.GetString("LastDryRunExecutionStatus");
    m_lastDryRunExecutionStatusHasBeenSet = true;
  }
  return *this;
}

JsonValue DryRunConfigOutput::Jsonize() const
{
  JsonValue payload;

  if(m_dryRunIdHasBeenSet)
  {
   payload.WithString("DryRunId", m_dryRunId);

  }

  if(m_lastDryRunExecutionStatusHasBeenSet)
  {
   payload.WithString("LastDryRunExecutionStatus", m_lastDryRunExecutionStatus);

  }

  return payload;
}

} // namespace Model
} // namespace Synthetics
} // namespace Aws
