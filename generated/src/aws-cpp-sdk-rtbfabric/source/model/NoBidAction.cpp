/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rtbfabric/model/NoBidAction.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace RTBFabric
{
namespace Model
{

NoBidAction::NoBidAction(JsonView jsonValue)
{
  *this = jsonValue;
}

NoBidAction& NoBidAction::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("noBidReasonCode"))
  {
    m_noBidReasonCode = jsonValue.GetInteger("noBidReasonCode");
    m_noBidReasonCodeHasBeenSet = true;
  }
  return *this;
}

JsonValue NoBidAction::Jsonize() const
{
  JsonValue payload;

  if(m_noBidReasonCodeHasBeenSet)
  {
   payload.WithInteger("noBidReasonCode", m_noBidReasonCode);

  }

  return payload;
}

} // namespace Model
} // namespace RTBFabric
} // namespace Aws
