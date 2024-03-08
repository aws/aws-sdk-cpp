/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/model/BasicAuthConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QBusiness
{
namespace Model
{

BasicAuthConfiguration::BasicAuthConfiguration() : 
    m_roleArnHasBeenSet(false),
    m_secretArnHasBeenSet(false)
{
}

BasicAuthConfiguration::BasicAuthConfiguration(JsonView jsonValue) : 
    m_roleArnHasBeenSet(false),
    m_secretArnHasBeenSet(false)
{
  *this = jsonValue;
}

BasicAuthConfiguration& BasicAuthConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("roleArn"))
  {
    m_roleArn = jsonValue.GetString("roleArn");

    m_roleArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("secretArn"))
  {
    m_secretArn = jsonValue.GetString("secretArn");

    m_secretArnHasBeenSet = true;
  }

  return *this;
}

JsonValue BasicAuthConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("roleArn", m_roleArn);

  }

  if(m_secretArnHasBeenSet)
  {
   payload.WithString("secretArn", m_secretArn);

  }

  return payload;
}

} // namespace Model
} // namespace QBusiness
} // namespace Aws
