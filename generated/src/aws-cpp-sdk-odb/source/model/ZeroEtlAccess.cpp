/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/odb/model/ZeroEtlAccess.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace odb
{
namespace Model
{

ZeroEtlAccess::ZeroEtlAccess(JsonView jsonValue)
{
  *this = jsonValue;
}

ZeroEtlAccess& ZeroEtlAccess::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("status"))
  {
    m_status = ManagedResourceStatusMapper::GetManagedResourceStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("cidr"))
  {
    m_cidr = jsonValue.GetString("cidr");
    m_cidrHasBeenSet = true;
  }
  return *this;
}

JsonValue ZeroEtlAccess::Jsonize() const
{
  JsonValue payload;

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", ManagedResourceStatusMapper::GetNameForManagedResourceStatus(m_status));
  }

  if(m_cidrHasBeenSet)
  {
   payload.WithString("cidr", m_cidr);

  }

  return payload;
}

} // namespace Model
} // namespace odb
} // namespace Aws
