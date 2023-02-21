/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/tnb/model/GetSolInstantiatedVnfInfo.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace tnb
{
namespace Model
{

GetSolInstantiatedVnfInfo::GetSolInstantiatedVnfInfo() : 
    m_vnfState(VnfOperationalState::NOT_SET),
    m_vnfStateHasBeenSet(false)
{
}

GetSolInstantiatedVnfInfo::GetSolInstantiatedVnfInfo(JsonView jsonValue) : 
    m_vnfState(VnfOperationalState::NOT_SET),
    m_vnfStateHasBeenSet(false)
{
  *this = jsonValue;
}

GetSolInstantiatedVnfInfo& GetSolInstantiatedVnfInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("vnfState"))
  {
    m_vnfState = VnfOperationalStateMapper::GetVnfOperationalStateForName(jsonValue.GetString("vnfState"));

    m_vnfStateHasBeenSet = true;
  }

  return *this;
}

JsonValue GetSolInstantiatedVnfInfo::Jsonize() const
{
  JsonValue payload;

  if(m_vnfStateHasBeenSet)
  {
   payload.WithString("vnfState", VnfOperationalStateMapper::GetNameForVnfOperationalState(m_vnfState));
  }

  return payload;
}

} // namespace Model
} // namespace tnb
} // namespace Aws
