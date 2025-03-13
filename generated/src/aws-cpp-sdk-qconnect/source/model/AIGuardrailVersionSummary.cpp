/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qconnect/model/AIGuardrailVersionSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QConnect
{
namespace Model
{

AIGuardrailVersionSummary::AIGuardrailVersionSummary(JsonView jsonValue)
{
  *this = jsonValue;
}

AIGuardrailVersionSummary& AIGuardrailVersionSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("aiGuardrailSummary"))
  {
    m_aiGuardrailSummary = jsonValue.GetObject("aiGuardrailSummary");
    m_aiGuardrailSummaryHasBeenSet = true;
  }
  if(jsonValue.ValueExists("versionNumber"))
  {
    m_versionNumber = jsonValue.GetInt64("versionNumber");
    m_versionNumberHasBeenSet = true;
  }
  return *this;
}

JsonValue AIGuardrailVersionSummary::Jsonize() const
{
  JsonValue payload;

  if(m_aiGuardrailSummaryHasBeenSet)
  {
   payload.WithObject("aiGuardrailSummary", m_aiGuardrailSummary.Jsonize());

  }

  if(m_versionNumberHasBeenSet)
  {
   payload.WithInt64("versionNumber", m_versionNumber);

  }

  return payload;
}

} // namespace Model
} // namespace QConnect
} // namespace Aws
