/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securitylake/model/DataLakeLifecycleTransition.h>
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

DataLakeLifecycleTransition::DataLakeLifecycleTransition() : 
    m_days(0),
    m_daysHasBeenSet(false),
    m_storageClassHasBeenSet(false)
{
}

DataLakeLifecycleTransition::DataLakeLifecycleTransition(JsonView jsonValue) : 
    m_days(0),
    m_daysHasBeenSet(false),
    m_storageClassHasBeenSet(false)
{
  *this = jsonValue;
}

DataLakeLifecycleTransition& DataLakeLifecycleTransition::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("days"))
  {
    m_days = jsonValue.GetInteger("days");

    m_daysHasBeenSet = true;
  }

  if(jsonValue.ValueExists("storageClass"))
  {
    m_storageClass = jsonValue.GetString("storageClass");

    m_storageClassHasBeenSet = true;
  }

  return *this;
}

JsonValue DataLakeLifecycleTransition::Jsonize() const
{
  JsonValue payload;

  if(m_daysHasBeenSet)
  {
   payload.WithInteger("days", m_days);

  }

  if(m_storageClassHasBeenSet)
  {
   payload.WithString("storageClass", m_storageClass);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityLake
} // namespace Aws
