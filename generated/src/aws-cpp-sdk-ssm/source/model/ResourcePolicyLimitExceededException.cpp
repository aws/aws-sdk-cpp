/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/ResourcePolicyLimitExceededException.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SSM
{
namespace Model
{

ResourcePolicyLimitExceededException::ResourcePolicyLimitExceededException() : 
    m_limit(0),
    m_limitHasBeenSet(false),
    m_limitTypeHasBeenSet(false),
    m_messageHasBeenSet(false)
{
}

ResourcePolicyLimitExceededException::ResourcePolicyLimitExceededException(JsonView jsonValue) : 
    m_limit(0),
    m_limitHasBeenSet(false),
    m_limitTypeHasBeenSet(false),
    m_messageHasBeenSet(false)
{
  *this = jsonValue;
}

ResourcePolicyLimitExceededException& ResourcePolicyLimitExceededException::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Limit"))
  {
    m_limit = jsonValue.GetInteger("Limit");

    m_limitHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LimitType"))
  {
    m_limitType = jsonValue.GetString("LimitType");

    m_limitTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Message"))
  {
    m_message = jsonValue.GetString("Message");

    m_messageHasBeenSet = true;
  }

  return *this;
}

JsonValue ResourcePolicyLimitExceededException::Jsonize() const
{
  JsonValue payload;

  if(m_limitHasBeenSet)
  {
   payload.WithInteger("Limit", m_limit);

  }

  if(m_limitTypeHasBeenSet)
  {
   payload.WithString("LimitType", m_limitType);

  }

  if(m_messageHasBeenSet)
  {
   payload.WithString("Message", m_message);

  }

  return payload;
}

} // namespace Model
} // namespace SSM
} // namespace Aws
