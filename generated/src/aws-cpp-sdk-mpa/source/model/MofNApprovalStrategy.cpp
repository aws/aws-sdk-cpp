/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mpa/model/MofNApprovalStrategy.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MPA
{
namespace Model
{

MofNApprovalStrategy::MofNApprovalStrategy(JsonView jsonValue)
{
  *this = jsonValue;
}

MofNApprovalStrategy& MofNApprovalStrategy::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MinApprovalsRequired"))
  {
    m_minApprovalsRequired = jsonValue.GetInteger("MinApprovalsRequired");
    m_minApprovalsRequiredHasBeenSet = true;
  }
  return *this;
}

JsonValue MofNApprovalStrategy::Jsonize() const
{
  JsonValue payload;

  if(m_minApprovalsRequiredHasBeenSet)
  {
   payload.WithInteger("MinApprovalsRequired", m_minApprovalsRequired);

  }

  return payload;
}

} // namespace Model
} // namespace MPA
} // namespace Aws
