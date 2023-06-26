/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsLambdaFunctionTracingConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

AwsLambdaFunctionTracingConfig::AwsLambdaFunctionTracingConfig() : 
    m_modeHasBeenSet(false)
{
}

AwsLambdaFunctionTracingConfig::AwsLambdaFunctionTracingConfig(JsonView jsonValue) : 
    m_modeHasBeenSet(false)
{
  *this = jsonValue;
}

AwsLambdaFunctionTracingConfig& AwsLambdaFunctionTracingConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Mode"))
  {
    m_mode = jsonValue.GetString("Mode");

    m_modeHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsLambdaFunctionTracingConfig::Jsonize() const
{
  JsonValue payload;

  if(m_modeHasBeenSet)
  {
   payload.WithString("Mode", m_mode);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
