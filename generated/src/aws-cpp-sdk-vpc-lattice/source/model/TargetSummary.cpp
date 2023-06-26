/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/vpc-lattice/model/TargetSummary.h>
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

TargetSummary::TargetSummary() : 
    m_idHasBeenSet(false),
    m_port(0),
    m_portHasBeenSet(false),
    m_reasonCodeHasBeenSet(false),
    m_status(TargetStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
}

TargetSummary::TargetSummary(JsonView jsonValue) : 
    m_idHasBeenSet(false),
    m_port(0),
    m_portHasBeenSet(false),
    m_reasonCodeHasBeenSet(false),
    m_status(TargetStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
  *this = jsonValue;
}

TargetSummary& TargetSummary::operator =(JsonView jsonValue)
{
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

  if(jsonValue.ValueExists("reasonCode"))
  {
    m_reasonCode = jsonValue.GetString("reasonCode");

    m_reasonCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = TargetStatusMapper::GetTargetStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  return *this;
}

JsonValue TargetSummary::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_portHasBeenSet)
  {
   payload.WithInteger("port", m_port);

  }

  if(m_reasonCodeHasBeenSet)
  {
   payload.WithString("reasonCode", m_reasonCode);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", TargetStatusMapper::GetNameForTargetStatus(m_status));
  }

  return payload;
}

} // namespace Model
} // namespace VPCLattice
} // namespace Aws
