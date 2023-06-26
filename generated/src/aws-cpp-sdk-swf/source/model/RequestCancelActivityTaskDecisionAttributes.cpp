/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/swf/model/RequestCancelActivityTaskDecisionAttributes.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SWF
{
namespace Model
{

RequestCancelActivityTaskDecisionAttributes::RequestCancelActivityTaskDecisionAttributes() : 
    m_activityIdHasBeenSet(false)
{
}

RequestCancelActivityTaskDecisionAttributes::RequestCancelActivityTaskDecisionAttributes(JsonView jsonValue) : 
    m_activityIdHasBeenSet(false)
{
  *this = jsonValue;
}

RequestCancelActivityTaskDecisionAttributes& RequestCancelActivityTaskDecisionAttributes::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("activityId"))
  {
    m_activityId = jsonValue.GetString("activityId");

    m_activityIdHasBeenSet = true;
  }

  return *this;
}

JsonValue RequestCancelActivityTaskDecisionAttributes::Jsonize() const
{
  JsonValue payload;

  if(m_activityIdHasBeenSet)
  {
   payload.WithString("activityId", m_activityId);

  }

  return payload;
}

} // namespace Model
} // namespace SWF
} // namespace Aws
