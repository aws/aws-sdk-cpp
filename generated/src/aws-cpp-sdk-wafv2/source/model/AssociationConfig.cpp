/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wafv2/model/AssociationConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WAFV2
{
namespace Model
{

AssociationConfig::AssociationConfig() : 
    m_requestBodyHasBeenSet(false)
{
}

AssociationConfig::AssociationConfig(JsonView jsonValue) : 
    m_requestBodyHasBeenSet(false)
{
  *this = jsonValue;
}

AssociationConfig& AssociationConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RequestBody"))
  {
    Aws::Map<Aws::String, JsonView> requestBodyJsonMap = jsonValue.GetObject("RequestBody").GetAllObjects();
    for(auto& requestBodyItem : requestBodyJsonMap)
    {
      m_requestBody[AssociatedResourceTypeMapper::GetAssociatedResourceTypeForName(requestBodyItem.first)] = requestBodyItem.second.AsObject();
    }
    m_requestBodyHasBeenSet = true;
  }

  return *this;
}

JsonValue AssociationConfig::Jsonize() const
{
  JsonValue payload;

  if(m_requestBodyHasBeenSet)
  {
   JsonValue requestBodyJsonMap;
   for(auto& requestBodyItem : m_requestBody)
   {
     requestBodyJsonMap.WithObject(AssociatedResourceTypeMapper::GetNameForAssociatedResourceType(requestBodyItem.first), requestBodyItem.second.Jsonize());
   }
   payload.WithObject("RequestBody", std::move(requestBodyJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace WAFV2
} // namespace Aws
