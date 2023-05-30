/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securitylake/model/CustomLogSourceProvider.h>
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

CustomLogSourceProvider::CustomLogSourceProvider() : 
    m_locationHasBeenSet(false),
    m_roleArnHasBeenSet(false)
{
}

CustomLogSourceProvider::CustomLogSourceProvider(JsonView jsonValue) : 
    m_locationHasBeenSet(false),
    m_roleArnHasBeenSet(false)
{
  *this = jsonValue;
}

CustomLogSourceProvider& CustomLogSourceProvider::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("location"))
  {
    m_location = jsonValue.GetString("location");

    m_locationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("roleArn"))
  {
    m_roleArn = jsonValue.GetString("roleArn");

    m_roleArnHasBeenSet = true;
  }

  return *this;
}

JsonValue CustomLogSourceProvider::Jsonize() const
{
  JsonValue payload;

  if(m_locationHasBeenSet)
  {
   payload.WithString("location", m_location);

  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("roleArn", m_roleArn);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityLake
} // namespace Aws
