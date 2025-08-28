/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm-sap/model/RuleStatusCounts.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SsmSap
{
namespace Model
{

RuleStatusCounts::RuleStatusCounts(JsonView jsonValue)
{
  *this = jsonValue;
}

RuleStatusCounts& RuleStatusCounts::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Failed"))
  {
    m_failed = jsonValue.GetInteger("Failed");
    m_failedHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Warning"))
  {
    m_warning = jsonValue.GetInteger("Warning");
    m_warningHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Info"))
  {
    m_info = jsonValue.GetInteger("Info");
    m_infoHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Passed"))
  {
    m_passed = jsonValue.GetInteger("Passed");
    m_passedHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Unknown"))
  {
    m_unknown = jsonValue.GetInteger("Unknown");
    m_unknownHasBeenSet = true;
  }
  return *this;
}

JsonValue RuleStatusCounts::Jsonize() const
{
  JsonValue payload;

  if(m_failedHasBeenSet)
  {
   payload.WithInteger("Failed", m_failed);

  }

  if(m_warningHasBeenSet)
  {
   payload.WithInteger("Warning", m_warning);

  }

  if(m_infoHasBeenSet)
  {
   payload.WithInteger("Info", m_info);

  }

  if(m_passedHasBeenSet)
  {
   payload.WithInteger("Passed", m_passed);

  }

  if(m_unknownHasBeenSet)
  {
   payload.WithInteger("Unknown", m_unknown);

  }

  return payload;
}

} // namespace Model
} // namespace SsmSap
} // namespace Aws
