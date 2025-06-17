/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mpa/model/ApprovalStrategyResponse.h>
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

ApprovalStrategyResponse::ApprovalStrategyResponse(JsonView jsonValue)
{
  *this = jsonValue;
}

ApprovalStrategyResponse& ApprovalStrategyResponse::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MofN"))
  {
    m_mofN = jsonValue.GetObject("MofN");
    m_mofNHasBeenSet = true;
  }
  return *this;
}

JsonValue ApprovalStrategyResponse::Jsonize() const
{
  JsonValue payload;

  if(m_mofNHasBeenSet)
  {
   payload.WithObject("MofN", m_mofN.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace MPA
} // namespace Aws
