/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qconnect/model/NotifyRecommendationsReceivedError.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QConnect
{
namespace Model
{

NotifyRecommendationsReceivedError::NotifyRecommendationsReceivedError() : 
    m_messageHasBeenSet(false),
    m_recommendationIdHasBeenSet(false)
{
}

NotifyRecommendationsReceivedError::NotifyRecommendationsReceivedError(JsonView jsonValue) : 
    m_messageHasBeenSet(false),
    m_recommendationIdHasBeenSet(false)
{
  *this = jsonValue;
}

NotifyRecommendationsReceivedError& NotifyRecommendationsReceivedError::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("message"))
  {
    m_message = jsonValue.GetString("message");

    m_messageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("recommendationId"))
  {
    m_recommendationId = jsonValue.GetString("recommendationId");

    m_recommendationIdHasBeenSet = true;
  }

  return *this;
}

JsonValue NotifyRecommendationsReceivedError::Jsonize() const
{
  JsonValue payload;

  if(m_messageHasBeenSet)
  {
   payload.WithString("message", m_message);

  }

  if(m_recommendationIdHasBeenSet)
  {
   payload.WithString("recommendationId", m_recommendationId);

  }

  return payload;
}

} // namespace Model
} // namespace QConnect
} // namespace Aws
