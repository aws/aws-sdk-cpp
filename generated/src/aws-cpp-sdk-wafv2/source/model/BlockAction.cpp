/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wafv2/model/BlockAction.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WAFV2
{
namespace Model
{

BlockAction::BlockAction() : 
    m_customResponseHasBeenSet(false)
{
}

BlockAction::BlockAction(JsonView jsonValue) : 
    m_customResponseHasBeenSet(false)
{
  *this = jsonValue;
}

BlockAction& BlockAction::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CustomResponse"))
  {
    m_customResponse = jsonValue.GetObject("CustomResponse");

    m_customResponseHasBeenSet = true;
  }

  return *this;
}

JsonValue BlockAction::Jsonize() const
{
  JsonValue payload;

  if(m_customResponseHasBeenSet)
  {
   payload.WithObject("CustomResponse", m_customResponse.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace WAFV2
} // namespace Aws
