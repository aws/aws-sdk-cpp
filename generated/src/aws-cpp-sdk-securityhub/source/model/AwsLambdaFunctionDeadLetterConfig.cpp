﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsLambdaFunctionDeadLetterConfig.h>
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

AwsLambdaFunctionDeadLetterConfig::AwsLambdaFunctionDeadLetterConfig(JsonView jsonValue)
{
  *this = jsonValue;
}

AwsLambdaFunctionDeadLetterConfig& AwsLambdaFunctionDeadLetterConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TargetArn"))
  {
    m_targetArn = jsonValue.GetString("TargetArn");
    m_targetArnHasBeenSet = true;
  }
  return *this;
}

JsonValue AwsLambdaFunctionDeadLetterConfig::Jsonize() const
{
  JsonValue payload;

  if(m_targetArnHasBeenSet)
  {
   payload.WithString("TargetArn", m_targetArn);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
