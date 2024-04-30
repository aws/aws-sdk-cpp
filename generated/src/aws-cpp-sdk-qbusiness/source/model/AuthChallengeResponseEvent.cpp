/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/model/AuthChallengeResponseEvent.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QBusiness
{
namespace Model
{

AuthChallengeResponseEvent::AuthChallengeResponseEvent() : 
    m_responseMapHasBeenSet(false)
{
}

AuthChallengeResponseEvent::AuthChallengeResponseEvent(JsonView jsonValue) : 
    m_responseMapHasBeenSet(false)
{
  *this = jsonValue;
}

AuthChallengeResponseEvent& AuthChallengeResponseEvent::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("responseMap"))
  {
    Aws::Map<Aws::String, JsonView> responseMapJsonMap = jsonValue.GetObject("responseMap").GetAllObjects();
    for(auto& responseMapItem : responseMapJsonMap)
    {
      m_responseMap[responseMapItem.first] = responseMapItem.second.AsString();
    }
    m_responseMapHasBeenSet = true;
  }

  return *this;
}

JsonValue AuthChallengeResponseEvent::Jsonize() const
{
  JsonValue payload;

  if(m_responseMapHasBeenSet)
  {
   JsonValue responseMapJsonMap;
   for(auto& responseMapItem : m_responseMap)
   {
     responseMapJsonMap.WithString(responseMapItem.first, responseMapItem.second);
   }
   payload.WithObject("responseMap", std::move(responseMapJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace QBusiness
} // namespace Aws
