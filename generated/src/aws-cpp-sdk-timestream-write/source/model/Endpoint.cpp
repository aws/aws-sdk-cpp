/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/timestream-write/model/Endpoint.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace TimestreamWrite
{
namespace Model
{

Endpoint::Endpoint() : 
    m_addressHasBeenSet(false),
    m_cachePeriodInMinutes(0),
    m_cachePeriodInMinutesHasBeenSet(false)
{
}

Endpoint::Endpoint(JsonView jsonValue) : 
    m_addressHasBeenSet(false),
    m_cachePeriodInMinutes(0),
    m_cachePeriodInMinutesHasBeenSet(false)
{
  *this = jsonValue;
}

Endpoint& Endpoint::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Address"))
  {
    m_address = jsonValue.GetString("Address");

    m_addressHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CachePeriodInMinutes"))
  {
    m_cachePeriodInMinutes = jsonValue.GetInt64("CachePeriodInMinutes");

    m_cachePeriodInMinutesHasBeenSet = true;
  }

  return *this;
}

JsonValue Endpoint::Jsonize() const
{
  JsonValue payload;

  if(m_addressHasBeenSet)
  {
   payload.WithString("Address", m_address);

  }

  if(m_cachePeriodInMinutesHasBeenSet)
  {
   payload.WithInt64("CachePeriodInMinutes", m_cachePeriodInMinutes);

  }

  return payload;
}

} // namespace Model
} // namespace TimestreamWrite
} // namespace Aws
