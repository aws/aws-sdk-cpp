/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workmail/model/LambdaAvailabilityProvider.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WorkMail
{
namespace Model
{

LambdaAvailabilityProvider::LambdaAvailabilityProvider() : 
    m_lambdaArnHasBeenSet(false)
{
}

LambdaAvailabilityProvider::LambdaAvailabilityProvider(JsonView jsonValue) : 
    m_lambdaArnHasBeenSet(false)
{
  *this = jsonValue;
}

LambdaAvailabilityProvider& LambdaAvailabilityProvider::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("LambdaArn"))
  {
    m_lambdaArn = jsonValue.GetString("LambdaArn");

    m_lambdaArnHasBeenSet = true;
  }

  return *this;
}

JsonValue LambdaAvailabilityProvider::Jsonize() const
{
  JsonValue payload;

  if(m_lambdaArnHasBeenSet)
  {
   payload.WithString("LambdaArn", m_lambdaArn);

  }

  return payload;
}

} // namespace Model
} // namespace WorkMail
} // namespace Aws
