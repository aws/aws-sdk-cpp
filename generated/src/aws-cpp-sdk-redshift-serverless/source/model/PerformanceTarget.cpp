/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift-serverless/model/PerformanceTarget.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace RedshiftServerless
{
namespace Model
{

PerformanceTarget::PerformanceTarget(JsonView jsonValue)
{
  *this = jsonValue;
}

PerformanceTarget& PerformanceTarget::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("level"))
  {
    m_level = jsonValue.GetInteger("level");
    m_levelHasBeenSet = true;
  }
  if(jsonValue.ValueExists("status"))
  {
    m_status = PerformanceTargetStatusMapper::GetPerformanceTargetStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  return *this;
}

JsonValue PerformanceTarget::Jsonize() const
{
  JsonValue payload;

  if(m_levelHasBeenSet)
  {
   payload.WithInteger("level", m_level);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", PerformanceTargetStatusMapper::GetNameForPerformanceTargetStatus(m_status));
  }

  return payload;
}

} // namespace Model
} // namespace RedshiftServerless
} // namespace Aws
