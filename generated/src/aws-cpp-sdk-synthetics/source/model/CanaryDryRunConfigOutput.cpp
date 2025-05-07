/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/synthetics/model/CanaryDryRunConfigOutput.h>
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

CanaryDryRunConfigOutput::CanaryDryRunConfigOutput(JsonView jsonValue)
{
  *this = jsonValue;
}

CanaryDryRunConfigOutput& CanaryDryRunConfigOutput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DryRunId"))
  {
    m_dryRunId = jsonValue.GetString("DryRunId");
    m_dryRunIdHasBeenSet = true;
  }
  return *this;
}

JsonValue CanaryDryRunConfigOutput::Jsonize() const
{
  JsonValue payload;

  if(m_dryRunIdHasBeenSet)
  {
   payload.WithString("DryRunId", m_dryRunId);

  }

  return payload;
}

} // namespace Model
} // namespace Synthetics
} // namespace Aws
