/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qconnect/model/AIAgentVersionSummary.h>
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

AIAgentVersionSummary::AIAgentVersionSummary(JsonView jsonValue)
{
  *this = jsonValue;
}

AIAgentVersionSummary& AIAgentVersionSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("aiAgentSummary"))
  {
    m_aiAgentSummary = jsonValue.GetObject("aiAgentSummary");
    m_aiAgentSummaryHasBeenSet = true;
  }
  if(jsonValue.ValueExists("versionNumber"))
  {
    m_versionNumber = jsonValue.GetInt64("versionNumber");
    m_versionNumberHasBeenSet = true;
  }
  return *this;
}

JsonValue AIAgentVersionSummary::Jsonize() const
{
  JsonValue payload;

  if(m_aiAgentSummaryHasBeenSet)
  {
   payload.WithObject("aiAgentSummary", m_aiAgentSummary.Jsonize());

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
