/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/StandardsSubscriptionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

StandardsSubscriptionRequest::StandardsSubscriptionRequest() : 
    m_standardsArnHasBeenSet(false),
    m_standardsInputHasBeenSet(false)
{
}

StandardsSubscriptionRequest::StandardsSubscriptionRequest(JsonView jsonValue) : 
    m_standardsArnHasBeenSet(false),
    m_standardsInputHasBeenSet(false)
{
  *this = jsonValue;
}

StandardsSubscriptionRequest& StandardsSubscriptionRequest::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("StandardsArn"))
  {
    m_standardsArn = jsonValue.GetString("StandardsArn");

    m_standardsArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StandardsInput"))
  {
    Aws::Map<Aws::String, JsonView> standardsInputJsonMap = jsonValue.GetObject("StandardsInput").GetAllObjects();
    for(auto& standardsInputItem : standardsInputJsonMap)
    {
      m_standardsInput[standardsInputItem.first] = standardsInputItem.second.AsString();
    }
    m_standardsInputHasBeenSet = true;
  }

  return *this;
}

JsonValue StandardsSubscriptionRequest::Jsonize() const
{
  JsonValue payload;

  if(m_standardsArnHasBeenSet)
  {
   payload.WithString("StandardsArn", m_standardsArn);

  }

  if(m_standardsInputHasBeenSet)
  {
   JsonValue standardsInputJsonMap;
   for(auto& standardsInputItem : m_standardsInput)
   {
     standardsInputJsonMap.WithString(standardsInputItem.first, standardsInputItem.second);
   }
   payload.WithObject("StandardsInput", std::move(standardsInputJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
