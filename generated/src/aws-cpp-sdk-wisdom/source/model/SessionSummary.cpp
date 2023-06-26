/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wisdom/model/SessionSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ConnectWisdomService
{
namespace Model
{

SessionSummary::SessionSummary() : 
    m_assistantArnHasBeenSet(false),
    m_assistantIdHasBeenSet(false),
    m_sessionArnHasBeenSet(false),
    m_sessionIdHasBeenSet(false)
{
}

SessionSummary::SessionSummary(JsonView jsonValue) : 
    m_assistantArnHasBeenSet(false),
    m_assistantIdHasBeenSet(false),
    m_sessionArnHasBeenSet(false),
    m_sessionIdHasBeenSet(false)
{
  *this = jsonValue;
}

SessionSummary& SessionSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("assistantArn"))
  {
    m_assistantArn = jsonValue.GetString("assistantArn");

    m_assistantArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("assistantId"))
  {
    m_assistantId = jsonValue.GetString("assistantId");

    m_assistantIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sessionArn"))
  {
    m_sessionArn = jsonValue.GetString("sessionArn");

    m_sessionArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sessionId"))
  {
    m_sessionId = jsonValue.GetString("sessionId");

    m_sessionIdHasBeenSet = true;
  }

  return *this;
}

JsonValue SessionSummary::Jsonize() const
{
  JsonValue payload;

  if(m_assistantArnHasBeenSet)
  {
   payload.WithString("assistantArn", m_assistantArn);

  }

  if(m_assistantIdHasBeenSet)
  {
   payload.WithString("assistantId", m_assistantId);

  }

  if(m_sessionArnHasBeenSet)
  {
   payload.WithString("sessionArn", m_sessionArn);

  }

  if(m_sessionIdHasBeenSet)
  {
   payload.WithString("sessionId", m_sessionId);

  }

  return payload;
}

} // namespace Model
} // namespace ConnectWisdomService
} // namespace Aws
