/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsLambdaFunctionLayer.h>
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

AwsLambdaFunctionLayer::AwsLambdaFunctionLayer() : 
    m_arnHasBeenSet(false),
    m_codeSize(0),
    m_codeSizeHasBeenSet(false)
{
}

AwsLambdaFunctionLayer::AwsLambdaFunctionLayer(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_codeSize(0),
    m_codeSizeHasBeenSet(false)
{
  *this = jsonValue;
}

AwsLambdaFunctionLayer& AwsLambdaFunctionLayer::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CodeSize"))
  {
    m_codeSize = jsonValue.GetInteger("CodeSize");

    m_codeSizeHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsLambdaFunctionLayer::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("Arn", m_arn);

  }

  if(m_codeSizeHasBeenSet)
  {
   payload.WithInteger("CodeSize", m_codeSize);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
