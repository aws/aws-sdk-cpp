/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securitylake/model/DataLakeLifecycleExpiration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityLake
{
namespace Model
{

DataLakeLifecycleExpiration::DataLakeLifecycleExpiration() : 
    m_days(0),
    m_daysHasBeenSet(false)
{
}

DataLakeLifecycleExpiration::DataLakeLifecycleExpiration(JsonView jsonValue) : 
    m_days(0),
    m_daysHasBeenSet(false)
{
  *this = jsonValue;
}

DataLakeLifecycleExpiration& DataLakeLifecycleExpiration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("days"))
  {
    m_days = jsonValue.GetInteger("days");

    m_daysHasBeenSet = true;
  }

  return *this;
}

JsonValue DataLakeLifecycleExpiration::Jsonize() const
{
  JsonValue payload;

  if(m_daysHasBeenSet)
  {
   payload.WithInteger("days", m_days);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityLake
} // namespace Aws
