/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediapackage/model/HlsIngest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaPackage
{
namespace Model
{

HlsIngest::HlsIngest() : 
    m_ingestEndpointsHasBeenSet(false)
{
}

HlsIngest::HlsIngest(JsonView jsonValue) : 
    m_ingestEndpointsHasBeenSet(false)
{
  *this = jsonValue;
}

HlsIngest& HlsIngest::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ingestEndpoints"))
  {
    Aws::Utils::Array<JsonView> ingestEndpointsJsonList = jsonValue.GetArray("ingestEndpoints");
    for(unsigned ingestEndpointsIndex = 0; ingestEndpointsIndex < ingestEndpointsJsonList.GetLength(); ++ingestEndpointsIndex)
    {
      m_ingestEndpoints.push_back(ingestEndpointsJsonList[ingestEndpointsIndex].AsObject());
    }
    m_ingestEndpointsHasBeenSet = true;
  }

  return *this;
}

JsonValue HlsIngest::Jsonize() const
{
  JsonValue payload;

  if(m_ingestEndpointsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> ingestEndpointsJsonList(m_ingestEndpoints.size());
   for(unsigned ingestEndpointsIndex = 0; ingestEndpointsIndex < ingestEndpointsJsonList.GetLength(); ++ingestEndpointsIndex)
   {
     ingestEndpointsJsonList[ingestEndpointsIndex].AsObject(m_ingestEndpoints[ingestEndpointsIndex].Jsonize());
   }
   payload.WithArray("ingestEndpoints", std::move(ingestEndpointsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace MediaPackage
} // namespace Aws
