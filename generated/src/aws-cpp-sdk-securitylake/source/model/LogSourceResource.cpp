/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securitylake/model/LogSourceResource.h>
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

LogSourceResource::LogSourceResource() : 
    m_awsLogSourceHasBeenSet(false),
    m_customLogSourceHasBeenSet(false)
{
}

LogSourceResource::LogSourceResource(JsonView jsonValue) : 
    m_awsLogSourceHasBeenSet(false),
    m_customLogSourceHasBeenSet(false)
{
  *this = jsonValue;
}

LogSourceResource& LogSourceResource::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("awsLogSource"))
  {
    m_awsLogSource = jsonValue.GetObject("awsLogSource");

    m_awsLogSourceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("customLogSource"))
  {
    m_customLogSource = jsonValue.GetObject("customLogSource");

    m_customLogSourceHasBeenSet = true;
  }

  return *this;
}

JsonValue LogSourceResource::Jsonize() const
{
  JsonValue payload;

  if(m_awsLogSourceHasBeenSet)
  {
   payload.WithObject("awsLogSource", m_awsLogSource.Jsonize());

  }

  if(m_customLogSourceHasBeenSet)
  {
   payload.WithObject("customLogSource", m_customLogSource.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SecurityLake
} // namespace Aws
