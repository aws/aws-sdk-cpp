/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/tnb/model/UpdateSolNetworkServiceData.h>
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

UpdateSolNetworkServiceData::UpdateSolNetworkServiceData(JsonView jsonValue)
{
  *this = jsonValue;
}

UpdateSolNetworkServiceData& UpdateSolNetworkServiceData::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("additionalParamsForNs"))
  {
    m_additionalParamsForNs = jsonValue.GetObject("additionalParamsForNs");
    m_additionalParamsForNsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("nsdInfoId"))
  {
    m_nsdInfoId = jsonValue.GetString("nsdInfoId");
    m_nsdInfoIdHasBeenSet = true;
  }
  return *this;
}

JsonValue UpdateSolNetworkServiceData::Jsonize() const
{
  JsonValue payload;

  if(m_additionalParamsForNsHasBeenSet)
  {
    if(!m_additionalParamsForNs.View().IsNull())
    {
       payload.WithObject("additionalParamsForNs", JsonValue(m_additionalParamsForNs.View()));
    }
  }

  if(m_nsdInfoIdHasBeenSet)
  {
   payload.WithString("nsdInfoId", m_nsdInfoId);

  }

  return payload;
}

} // namespace Model
} // namespace tnb
} // namespace Aws
