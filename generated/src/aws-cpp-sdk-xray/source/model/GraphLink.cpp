/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/xray/model/GraphLink.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace XRay
{
namespace Model
{

GraphLink::GraphLink(JsonView jsonValue)
{
  *this = jsonValue;
}

GraphLink& GraphLink::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ReferenceType"))
  {
    m_referenceType = jsonValue.GetString("ReferenceType");
    m_referenceTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SourceTraceId"))
  {
    m_sourceTraceId = jsonValue.GetString("SourceTraceId");
    m_sourceTraceIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DestinationTraceIds"))
  {
    Aws::Utils::Array<JsonView> destinationTraceIdsJsonList = jsonValue.GetArray("DestinationTraceIds");
    for(unsigned destinationTraceIdsIndex = 0; destinationTraceIdsIndex < destinationTraceIdsJsonList.GetLength(); ++destinationTraceIdsIndex)
    {
      m_destinationTraceIds.push_back(destinationTraceIdsJsonList[destinationTraceIdsIndex].AsString());
    }
    m_destinationTraceIdsHasBeenSet = true;
  }
  return *this;
}

JsonValue GraphLink::Jsonize() const
{
  JsonValue payload;

  if(m_referenceTypeHasBeenSet)
  {
   payload.WithString("ReferenceType", m_referenceType);

  }

  if(m_sourceTraceIdHasBeenSet)
  {
   payload.WithString("SourceTraceId", m_sourceTraceId);

  }

  if(m_destinationTraceIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> destinationTraceIdsJsonList(m_destinationTraceIds.size());
   for(unsigned destinationTraceIdsIndex = 0; destinationTraceIdsIndex < destinationTraceIdsJsonList.GetLength(); ++destinationTraceIdsIndex)
   {
     destinationTraceIdsJsonList[destinationTraceIdsIndex].AsString(m_destinationTraceIds[destinationTraceIdsIndex]);
   }
   payload.WithArray("DestinationTraceIds", std::move(destinationTraceIdsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace XRay
} // namespace Aws
