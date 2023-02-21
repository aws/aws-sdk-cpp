/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/tnb/model/GetSolVnfInfo.h>
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

GetSolVnfInfo::GetSolVnfInfo() : 
    m_vnfState(VnfOperationalState::NOT_SET),
    m_vnfStateHasBeenSet(false),
    m_vnfcResourceInfoHasBeenSet(false)
{
}

GetSolVnfInfo::GetSolVnfInfo(JsonView jsonValue) : 
    m_vnfState(VnfOperationalState::NOT_SET),
    m_vnfStateHasBeenSet(false),
    m_vnfcResourceInfoHasBeenSet(false)
{
  *this = jsonValue;
}

GetSolVnfInfo& GetSolVnfInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("vnfState"))
  {
    m_vnfState = VnfOperationalStateMapper::GetVnfOperationalStateForName(jsonValue.GetString("vnfState"));

    m_vnfStateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("vnfcResourceInfo"))
  {
    Aws::Utils::Array<JsonView> vnfcResourceInfoJsonList = jsonValue.GetArray("vnfcResourceInfo");
    for(unsigned vnfcResourceInfoIndex = 0; vnfcResourceInfoIndex < vnfcResourceInfoJsonList.GetLength(); ++vnfcResourceInfoIndex)
    {
      m_vnfcResourceInfo.push_back(vnfcResourceInfoJsonList[vnfcResourceInfoIndex].AsObject());
    }
    m_vnfcResourceInfoHasBeenSet = true;
  }

  return *this;
}

JsonValue GetSolVnfInfo::Jsonize() const
{
  JsonValue payload;

  if(m_vnfStateHasBeenSet)
  {
   payload.WithString("vnfState", VnfOperationalStateMapper::GetNameForVnfOperationalState(m_vnfState));
  }

  if(m_vnfcResourceInfoHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> vnfcResourceInfoJsonList(m_vnfcResourceInfo.size());
   for(unsigned vnfcResourceInfoIndex = 0; vnfcResourceInfoIndex < vnfcResourceInfoJsonList.GetLength(); ++vnfcResourceInfoIndex)
   {
     vnfcResourceInfoJsonList[vnfcResourceInfoIndex].AsObject(m_vnfcResourceInfo[vnfcResourceInfoIndex].Jsonize());
   }
   payload.WithArray("vnfcResourceInfo", std::move(vnfcResourceInfoJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace tnb
} // namespace Aws
