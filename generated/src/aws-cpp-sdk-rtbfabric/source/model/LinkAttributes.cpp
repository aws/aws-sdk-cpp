/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rtbfabric/model/LinkAttributes.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace RTBFabric
{
namespace Model
{

LinkAttributes::LinkAttributes(JsonView jsonValue)
{
  *this = jsonValue;
}

LinkAttributes& LinkAttributes::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("responderErrorMasking"))
  {
    Aws::Utils::Array<JsonView> responderErrorMaskingJsonList = jsonValue.GetArray("responderErrorMasking");
    for(unsigned responderErrorMaskingIndex = 0; responderErrorMaskingIndex < responderErrorMaskingJsonList.GetLength(); ++responderErrorMaskingIndex)
    {
      m_responderErrorMasking.push_back(responderErrorMaskingJsonList[responderErrorMaskingIndex].AsObject());
    }
    m_responderErrorMaskingHasBeenSet = true;
  }
  if(jsonValue.ValueExists("customerProvidedId"))
  {
    m_customerProvidedId = jsonValue.GetString("customerProvidedId");
    m_customerProvidedIdHasBeenSet = true;
  }
  return *this;
}

JsonValue LinkAttributes::Jsonize() const
{
  JsonValue payload;

  if(m_responderErrorMaskingHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> responderErrorMaskingJsonList(m_responderErrorMasking.size());
   for(unsigned responderErrorMaskingIndex = 0; responderErrorMaskingIndex < responderErrorMaskingJsonList.GetLength(); ++responderErrorMaskingIndex)
   {
     responderErrorMaskingJsonList[responderErrorMaskingIndex].AsObject(m_responderErrorMasking[responderErrorMaskingIndex].Jsonize());
   }
   payload.WithArray("responderErrorMasking", std::move(responderErrorMaskingJsonList));

  }

  if(m_customerProvidedIdHasBeenSet)
  {
   payload.WithString("customerProvidedId", m_customerProvidedId);

  }

  return payload;
}

} // namespace Model
} // namespace RTBFabric
} // namespace Aws
