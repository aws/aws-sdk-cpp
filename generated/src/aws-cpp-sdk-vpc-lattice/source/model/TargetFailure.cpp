/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/vpc-lattice/model/TargetFailure.h>
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

TargetFailure::TargetFailure() : 
    m_failureCodeHasBeenSet(false),
    m_failureMessageHasBeenSet(false),
    m_idHasBeenSet(false),
    m_port(0),
    m_portHasBeenSet(false)
{
}

TargetFailure::TargetFailure(JsonView jsonValue) : 
    m_failureCodeHasBeenSet(false),
    m_failureMessageHasBeenSet(false),
    m_idHasBeenSet(false),
    m_port(0),
    m_portHasBeenSet(false)
{
  *this = jsonValue;
}

TargetFailure& TargetFailure::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("failureCode"))
  {
    m_failureCode = jsonValue.GetString("failureCode");

    m_failureCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("failureMessage"))
  {
    m_failureMessage = jsonValue.GetString("failureMessage");

    m_failureMessageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("port"))
  {
    m_port = jsonValue.GetInteger("port");

    m_portHasBeenSet = true;
  }

  return *this;
}

JsonValue TargetFailure::Jsonize() const
{
  JsonValue payload;

  if(m_failureCodeHasBeenSet)
  {
   payload.WithString("failureCode", m_failureCode);

  }

  if(m_failureMessageHasBeenSet)
  {
   payload.WithString("failureMessage", m_failureMessage);

  }

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_portHasBeenSet)
  {
   payload.WithInteger("port", m_port);

  }

  return payload;
}

} // namespace Model
} // namespace VPCLattice
} // namespace Aws
