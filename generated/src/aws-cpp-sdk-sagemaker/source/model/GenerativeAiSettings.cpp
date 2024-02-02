/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/GenerativeAiSettings.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SageMaker
{
namespace Model
{

GenerativeAiSettings::GenerativeAiSettings() : 
    m_amazonBedrockRoleArnHasBeenSet(false)
{
}

GenerativeAiSettings::GenerativeAiSettings(JsonView jsonValue) : 
    m_amazonBedrockRoleArnHasBeenSet(false)
{
  *this = jsonValue;
}

GenerativeAiSettings& GenerativeAiSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AmazonBedrockRoleArn"))
  {
    m_amazonBedrockRoleArn = jsonValue.GetString("AmazonBedrockRoleArn");

    m_amazonBedrockRoleArnHasBeenSet = true;
  }

  return *this;
}

JsonValue GenerativeAiSettings::Jsonize() const
{
  JsonValue payload;

  if(m_amazonBedrockRoleArnHasBeenSet)
  {
   payload.WithString("AmazonBedrockRoleArn", m_amazonBedrockRoleArn);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
