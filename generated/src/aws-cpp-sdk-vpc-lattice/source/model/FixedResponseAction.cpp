/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/vpc-lattice/model/FixedResponseAction.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace VPCLattice
{
namespace Model
{

FixedResponseAction::FixedResponseAction() : 
    m_statusCode(0),
    m_statusCodeHasBeenSet(false)
{
}

FixedResponseAction::FixedResponseAction(JsonView jsonValue) : 
    m_statusCode(0),
    m_statusCodeHasBeenSet(false)
{
  *this = jsonValue;
}

FixedResponseAction& FixedResponseAction::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("statusCode"))
  {
    m_statusCode = jsonValue.GetInteger("statusCode");

    m_statusCodeHasBeenSet = true;
  }

  return *this;
}

JsonValue FixedResponseAction::Jsonize() const
{
  JsonValue payload;

  if(m_statusCodeHasBeenSet)
  {
   payload.WithInteger("statusCode", m_statusCode);

  }

  return payload;
}

} // namespace Model
} // namespace VPCLattice
} // namespace Aws
